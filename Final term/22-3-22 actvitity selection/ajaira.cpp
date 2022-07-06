#include <iostream>
using namespace std;

int main()
{
    int numberOfInput;
    cin >> numberOfInput;
    int array[numberOfInput];

    cout << "input numbers ";
    for (int i; i < numberOfInput; i++)
    {
        cin >> array[i];
    }
    for (int i; i < numberOfInput; i++)
    {
        cout << array[i];
    }
}