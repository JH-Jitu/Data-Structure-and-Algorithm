#include <iostream>
using namespace std;

void Merge(int *leftArray, int *rightArray, int *Array, int leftArrayLength, int rightArrayLength)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i < leftArrayLength && j < rightArrayLength)
    {
        if (leftArray[i] <= rightArray[j])
        {
            Array[k] = leftArray[i];
            i++;
        }
        else
        {
            Array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftArrayLength)
    {
        Array[k] = leftArray[i];
        i++;
        k++;
    }

    while (j < rightArrayLength)
    {
        Array[k] = rightArray[i];
        j++;
        k++;
    }
}

void mergeSort(int array[], int arrayLenght)
{
    if (arrayLenght < 2)
        return;

    int mid = arrayLenght / 2;

    int leftArray[mid];
    int rightArray[arrayLenght - mid];

    for (int i = 0; i < mid; i++)
    {
        leftArray[i] = array[i];
    }

    for (int i = mid; i < arrayLenght; i++)
    {
        rightArray[i - mid] = array[i];
    }

    int leftArrayLength = sizeof(leftArray) / sizeof(leftArray[0]);
    int rightArrayLength = sizeof(rightArray) / sizeof(rightArray[0]);

    mergeSort(leftArray, leftArrayLength);
    mergeSort(rightArray, rightArrayLength);

    Merge(leftArray, rightArray, array, leftArrayLength, rightArrayLength);
}

int main()
{
    int arraySize;
    cout << "Enter the number of elements: ";
    cin >> arraySize;
    cout << endl;
    int array[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout << "Enter the value of " << i + 1 << " elements: ";
        cin >> array[i];
    }

    int arrayLenght = sizeof(array) / sizeof(array[0]);
    cout << "\nArray Length: " << arrayLenght << endl;

    mergeSort(array, arrayLenght);

    cout << "\nThe Array is: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << " " << array[i];
    }

    cout << endl
         << endl;
    return 0;
}