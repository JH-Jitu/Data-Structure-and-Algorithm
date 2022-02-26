/*Task: This code has a class named Point which contains two element x and y.
   The ar is array of Point class and has n = 100000 elements.

   You have to sort the ar array against it's y element.
   Like [(5, 3), (6, 1), (7, 2)] => [(6, 1), (7, 2), (5, 3)]
   if two Point's y is same, then compare using x.
   Like [(5, 3), (6, 1), (7, 1)] => [(6, 1), (7, 1), (5, 3)]

   First in the code, write your role in ROLL_NO variable
   and write your code in my_sort function.
   You can use any additional function as you like.
   DO NOT MODIFY ANY OTHER PART OF THE CODE

   The program will output smallest 10 element in the ar array.
   Like for roll 220121352, output will be

    Smallest 10 points are
    49734 14143
    49735 14143
    3764 31617
    3765 31617
    44726 32639
    44727 32639
    84844 37921
    84845 37921
    84196 42241
    84197 42241
    */

#include <iostream>

using namespace std;

int n = 10000;

class Point
{
public:
    int x, y;
};

void Merge(Point leftArray[], Point rightArray[], Point Array[], int lengthOfLeftArray, int lengthOfRightArray)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < lengthOfLeftArray && j < lengthOfRightArray)
    {
        if (leftArray[i].y <= rightArray[j].y)
        {
            Array[k].x = leftArray[i].x;
            Array[k].y = leftArray[i].y;
            // Array[k] = leftArray[i];
            i++;
        }
        else
        {
            Array[k].x = rightArray[j].x;
            Array[k].y = rightArray[j].y;
            // Array[k] = rightArray[j];
            j++;
        }
        // k++;8i
    }

    while (i < lengthOfLeftArray)
    {
        Array[k].x = leftArray[i].x;
        Array[k].y = leftArray[i].y;
        // Array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < lengthOfRightArray)
    {
        Array[k].x = rightArray[i].x;
        Array[k].y = rightArray[i].y;
        // Array[k] = rightArray[i];
        j++;
        k++;
    }
}

void my_sort(Point array[], int lengthOfArray)
{
    // write your sort code here
    if (lengthOfArray < 2)
    {
        return;
    }

    int mid = lengthOfArray / 2;
    //         int mid = (lengthOfArray % 2 == 0) ? (lengthOfArray / 2) : ((lengthOfArray + 1) / 2);

    cout << mid;

    Point leftArray[mid];
    Point rightArray[lengthOfArray - mid];

    // This is bug
    // int lengthOfLeftArray = sizeof(leftArray) / sizeof(leftArray[0]);
    // int lengthOfRightArray = sizeof(rightArray) / sizeof(rightArray[0]);

    // This is right
    int lengthOfLeftArray = mid;
    int lengthOfRightArray = lengthOfArray - mid;

    for (int i = 0; i < lengthOfLeftArray; i++)
    {
        leftArray[i] = array[i];
        //        leftArray[i].x = array[i].x;
        //        leftArray[i].y = array[i].y;
    }

    for (int i = mid; i < lengthOfArray; i++)
    {
        rightArray[i - mid] = array[i];
        //        rightArray[i - mid].x = array[i].x;
        //        rightArray[i - mid].y = array[i].y;
    }
    //

    my_sort(leftArray, lengthOfLeftArray);
    my_sort(rightArray, lengthOfRightArray);

    Merge(leftArray, rightArray, array, lengthOfLeftArray, lengthOfRightArray);
}

// Write your role here
int ROLL_NO = 220121352;

int main()
{
    //     int n = 150;

    Point ar[n + 10];
    int i;
    int t = ROLL_NO - 100;
    for (i = 0; i < n; i++)
    {
        ar[i].x = i;
        ar[i].y = t;
        if (i % 2 == 1)
            t = (t * 2 + i) % ROLL_NO;
    }
    int lengthOfArray = sizeof(ar) / sizeof(ar[0]);
    my_sort(ar, lengthOfArray);
    cout << "Smallest 10 points are" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << ar[i].x << ' ' << ar[i].y << endl;
    }
    return 0;
}
