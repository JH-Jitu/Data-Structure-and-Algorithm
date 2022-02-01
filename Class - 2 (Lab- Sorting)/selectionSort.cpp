#include <iostream>
using namespace std;

// To take input of array
void inputArray(int size, int *arr)

{
    cout << "Enter the elements now: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element {" << i + 1 << "}: ";
        cin >> arr[i];
    }
}

// To sort the Array (optimized)
void selectionSort(int size, int *arr)
{

    cout << "After Sorting: ";
    int i, j, minValue;
    bool swapped = true;
    i = 0;
    while (swapped)
    {
        swapped = false;
        minValue = arr[i];
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                minValue = arr[j];

                arr[j] = arr[i];
                arr[i] = minValue;
                swapped = true;
            }
            // cout << "Run time calculation " << j << endl;
            // dekha jabe jodi 5ta element ni... tobe prothombar index 1 theke theke 4 porjonto check korbe ar choto ta borotar shathe exchange hobe.. erpor index 2 theke 4 porjonto, erpor index 3 theke 4 porjonto, erpor just index 4 ei => So, 5ta element er jonne eta run kore => 4 + 3 + 2 + 1 + 0  = 10 bar..(0 after sorted)
            // Kintu Bubble Sort er khetre jodi 5ta element ni... tobe protibar ei index 0 theke check kora shuru kore 4 porjonto check kore ar boro ta choto tar shathe exchange hoi.. Orthat, 5ta element er jonne jonne prottekbar 4bar comparison chalai.. jaar fole eta selection sort theke slower process. Karon =>  5ta element er jonne eta run kore => 4 + 4 + 4 + 4 + 4 = 20 bar..

            // Jokhon sorted array input dbo tokhon 2tai prothom loop e 4bar comparison chalabe then output return korbe.. orthat speed same thakbe
        }
        i++;
        // arr[i] = key;
        // cout << "Run time calculation" << endl;
    }
}

// Non-Optimized
// void selectionSort(int size, int *arr)
// {

//     cout << "After Sorting: ";
//     int select, j, minValue, minIndex;
//     for (select = 0; select < (size - 1); select++)
//     {
//         minIndex = select;
//         minValue = arr[select];
//         for (j = select + 1; j < size; j++)
//         {
//             if (arr[j] < arr[select])
//             {
//                 minValue = arr[j];
//                 minIndex = j;
//             }
//         }

//         arr[minIndex] = arr[select];
//         arr[select] = minValue;
//     }
// }

// To Display Array
void displayArray(int size, int *arr)

{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";
}

// Main Function
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];

    inputArray(size, arr); // To take input the values of array
    cout << "Your array: ";
    displayArray(size, arr); // To display array

    cout << endl;

    // After Insertion Sort:
    selectionSort(size, arr); // To sort the array

    displayArray(size, arr); // Again to display sorted array
}