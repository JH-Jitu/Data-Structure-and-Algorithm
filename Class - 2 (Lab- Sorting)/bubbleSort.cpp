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

void swap(int *index1, int *index2)
{
    int temp;
    temp = *index1;
    *index1 = *index2;
    *index2 = temp;
}
// To sort the Array
void bubbleSort(int size, int *arr)
{

    cout
        << "After Sorting: ";
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = 1; i < size; i++)
        {
            if (arr[i - 1] > arr[i])
            {
                swap(&arr[i - 1], &arr[i]); // array reference type but array er value jehetu primitive type tai swap function er argument e array er value gular address pass kore dsi ja swap function parameter akare receive korbe
                swapped = true;
            }
        }
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
    bubbleSort(size, arr); // To sort the array

    displayArray(size, arr); // Again to display sorted array
}