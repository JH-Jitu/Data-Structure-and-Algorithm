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

// To sort the Array
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
        }
        i++;
    }
}

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