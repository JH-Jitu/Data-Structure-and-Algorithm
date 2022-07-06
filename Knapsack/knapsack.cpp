#include <iostream>
using namespace std;

// void takeInput() {
//     int a[2][2]
// }

int main()
{
    int numberOfItems, totalWeight;
    totalWeight= 4;

    cout << "Input number of items: ";
    cin >> numberOfItems;

    int array[numberOfItems][2];

    for (int i = 0; i < numberOfItems; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "[Weight][Value]: [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < numberOfItems; i++)
    {
        cout << "[Weight][value] \t";
        for (int j = 0; j < 2; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    for (int w = 0; w < totalWeight; w++)
    {
        array[0][w] = 0;
    }

    for (int i = 0; i < numberOfItems; i++)
    {
        array[i][0] = 0;
    }

    for (int i = 0; i < numberOfItems; i++)
    {
        for (int w = 0; w < totalWeight; w++)
        {
            
        }
        
    }
    

    cout << "Hello World";
}