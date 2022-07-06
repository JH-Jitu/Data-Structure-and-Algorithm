#include <iostream>
using namespace std;

void displayArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// function to swap elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// partition
int partition(int *array, int low, int high)
{
    int left, right, pivotItem;
    pivotItem = array[low];
    left = low;
    right = high;
    while (left < right)
    {
        while (array[left] <= pivotItem && left < high)
        {
            left++;
        }
        while (array[right] > pivotItem && right > low)
        {
            right--;
        }
        if (left < right)
        {
            swap(left, right);
        }
    }

    // Right is final position for pivot
    array[low] = array[right];
    array[right] = pivotItem;
    return right;
}

// Sorting Function
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {

        int pivot = partition(array, low, high);

        quickSort(array, low, pivot);

        quickSort(array, pivot + 1, high);
    }
}

// Main Execution
int main()
{
    int array[] = {10, 16, 8, 12, 15, 6, 3, 9, 5, 100};
    int lengthOfArray = sizeof(array) / sizeof(array[0]);

    cout << "Unsorted Array: " << endl;
    displayArray(array, lengthOfArray);

    // perform quicksort on array
    quickSort(array, 0, lengthOfArray - 1);

    cout << "Sorted array in ascending order: " << endl;
    displayArray(array, lengthOfArray);
}