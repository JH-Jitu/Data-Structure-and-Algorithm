#include <iostream>
using namespace std;

int main()
{
    int numberOfPeopleN, numberOfGiftK, startingPersonA;

    cout << "Number of People 'space' Number of Gift 'space' Starting Person: ";
    cin >> numberOfPeopleN >> numberOfGiftK >> startingPersonA;
    int x = startingPersonA + (numberOfGiftK - 1);

    cout << "Last person: " << x << endl;

    int givenGift;
    int remainingGift;
    int lastPerson;

    if (x > numberOfPeopleN)
    {

        remainingGift = x - numberOfPeopleN;
        // remainingGift = numberOfGiftK - givenGift;

        cout << remainingGift;

        for (int i = 1; i <= remainingGift; i++)
        {
            // cout << i;
            lastPerson = i;
        }
    }
    cout << endl
         << "so the last person: " << lastPerson;
}