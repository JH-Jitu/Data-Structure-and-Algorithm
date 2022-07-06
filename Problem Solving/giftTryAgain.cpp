#include <iostream>
using namespace std;

int main()
{
    int numberOfPeopleN, numberOfGiftK, startingPersonA;

    cout << "Number of People 'space' Number of Gift 'space' Starting Person: ";
    cin >> numberOfPeopleN >> numberOfGiftK >> startingPersonA;

    cout << "Number of People: " << numberOfPeopleN << ", Number of Gift: " << numberOfGiftK << ", Starting Person: " << startingPersonA << endl;

    int sum;
    for (int i = 1; i <= numberOfGiftK; i++)
    {
        if (numberOfGiftK > numberOfPeopleN)
        {
            sum = startingPersonA + i;
        }
        else
        {
            sum = i + 1;
        }
    }
    cout << "So last person is: " << sum - numberOfGiftK;
}