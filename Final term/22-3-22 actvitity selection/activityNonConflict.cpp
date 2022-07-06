#include <iostream>
using namespace std;

class Activity
{
public:
    int id, startTime, finishTime;
};

// void swap(Activity *index1, Activity *index2)
// {
//     Activity temp;
//     temp = *index1;
//     *index1 = *index2;
//     *index2 = temp;
// }

// int main()
int main()
{
    Activity activity[10];

    int sizeOfArray;
    cout << "input your array size: ";

    Activity nonConflictActivity[10];

    cin >> sizeOfArray;

    int id, startTime, finishTime;

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "For Work-" << i + 1 << endl;

        cout << "input your id: ";
        cin >> id;

        cout << "input your start Time: ";
        cin >> startTime;

        cout << "input your Finish Time: ";
        cin >> finishTime;

        activity[i].id = id;
        activity[i].startTime = startTime;
        activity[i].finishTime = finishTime;
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "For Work-" << i + 1 << endl;

        cout << "Activity id: " << activity[i].id << endl;
        cout << "Activity start time: " << activity[i].startTime << endl;
        cout << "Activity finish time: " << activity[i].finishTime << endl;
    }

    cout
        << "After Sorting: ";
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = 1; i < sizeOfArray; i++)
        {
            if (activity[i - 1].finishTime > activity[i].finishTime)
            {
                swap(activity[i - 1], activity[i]);
                swapped = true;
            }

            for (int j = 0; j < sizeOfArray; j++)
            {
                if (activity[j].finishTime < activity[i].startTime)
                {
                    nonConflictActivity[j] = activity[i];
                }
            }
        }
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "For Work-" << i + 1 << endl;

        cout << "Activity id: " << activity[i].id << endl;
        cout << "Activity start time: " << activity[i].startTime << endl;
        cout << "Activity finish time: " << activity[i].finishTime << endl;
    }

    // For Non Conflict

    cout << "Non-Conflict Terms: " << endl;
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "For Work-" << i + 1 << endl;

        cout << "Activity id: " << nonConflictActivity[i].id << endl;
        cout << "Activity start time: " << nonConflictActivity[i].startTime << endl;
        cout << "Activity finish time: " << nonConflictActivity[i].finishTime << endl;
    }

    return 0;
}