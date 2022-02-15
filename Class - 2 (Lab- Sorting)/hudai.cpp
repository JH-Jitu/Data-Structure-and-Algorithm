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

const int n = 100000;

class Point
{
public:
    int x, y;
};

void my_sort()
{
    Point ar[5];
    ar[0].x = 5;
    ar[1].y = 10;
}

// Write your role here
int ROLL_NO = 220121352;

int main()
{
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
    my_sort();
    cout << "Smallest 10 points are" << endl;
    for (i = 0; i < 10; i++)
    {
        cout << ar[i].x << ' ' << ar[i].y << endl;
    }
    return 0;
}
