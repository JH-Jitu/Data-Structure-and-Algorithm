#include <iostream>
#include <string>
using namespace std;

struct Recommendations
{
    string name;
    int timeSpend;

    Recommendations(string a, int b)
    {
        name = a;
        timeSpend = b;
    }
};

// To sort the Array
void insertionSort(int size, int *arr)
{

    cout << "After Sorting: ";
    int i, j, key;
    for (int j = 1; j < size; j++)
    {
        key = arr[j];
        i = j - 1;

        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i = i - 1;
        }
        arr[i + 1] = key;
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
    // int size;
    // cout << "Enter the size of array: ";
    // cin >> size;

    Recommendations r1("C# Videos", 5);
    cout << r1.name;
    int arr[6] = {5, 20, 15, 30, 10, 20};

    int size = sizeof(arr) / sizeof(arr[0]);
    // inputArray(size, arr); // To take input the values of array
    cout << "Your array: ";
    displayArray(size, arr); // To display array

    cout << endl;

    // After Insertion Sort:
    insertionSort(size, arr); // To sort the array

    displayArray(size, arr); // Again to display sorted array
}