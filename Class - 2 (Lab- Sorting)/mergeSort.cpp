#include <iostream>
using namespace std;

// Length of an Array
int lengthFunc(int *arr)
{
    int length = sizeof(arr) / sizeof(arr[0]);
    // int length = *(&arr + 1) - arr;
    // cout << length;
    return length;
}

// To take input of array
void inputArray(int size, int *arr)

{
    int length = lengthFunc(arr);
    cout << "Enter the elements now: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element {" << i + 1 << "}: ";
        cin >> arr[i];
    }
}

// Merge the array
void merge(int *leftArray, int *rightArray, int *array)
{
    int lengthOfLeftArray = lengthFunc(leftArray);
    int lengthOfRightArray = lengthFunc(rightArray);

    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < lengthOfLeftArray && j < lengthOfRightArray)
    {
        if (leftArray[i] < rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        }
        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }
    while (i < lengthOfLeftArray)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < lengthOfRightArray)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

// Merge Sort Function (First making partition and then using recursion)
void mergeSort(int *array)
{
    int lengthOfArray = lengthFunc(array);
    if (lengthOfArray < 2)
        return;
    // int mid = lengthOfArray % 2 == 0 ? lengthOfArray / 2 : ((lengthOfArray + 1) / 2);
    int mid = lengthOfArray / 2;

    int leftArray[mid];
    int rigthArray[lengthOfArray - mid];

    for (int i = 0; i < mid; i++)
    {
        leftArray[i] = array[i];
    }
    for (int i = mid; i < lengthOfArray; i++)
    {
        rigthArray[i - mid] = array[i];
    }

    mergeSort(leftArray);
    mergeSort(rigthArray);

    merge(leftArray, rigthArray, array);
}

// To Display Array
void displayArray(int size, int *arr)

{
    int length = lengthFunc(arr);
    cout << "[";
    for (int i = 0; i < length; i++)
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

    // After Merge Sort:
    cout << "after sorting: ";

    mergeSort(arr); // To sort the array

    displayArray(size, arr); // Again to display sorted array
}