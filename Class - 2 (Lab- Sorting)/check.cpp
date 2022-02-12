#include <iostream>
using namespace std;

double lengthOfArray(int arr[])
{
    // int length = sizeof(arr) / sizeof(arr[0]);
    // return length;
    int size = sizeof(arr);
    return size;
}

int main()
{
    int arr[5] = {5, 6, 7, 8, 9};

    int length = lengthOfArray(arr);

    cout << "length of array: " << length;
}