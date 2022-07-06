#include <iostream>
using namespace std;

class Activity
{
public:
    int id, startTime, finishTime;
};

// int main()
int main()
{
    Activity activity[10];

    int sizeOfArray;
    cout << "input your array size: ";

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

    cout << "After Sorting: ";
    int i, j, key;
    Activity keyObj;
    for (int j = 1; j < 3; j++)
    {
        // key = activity[j].finishTime;
        keyObj = activity[j];
        i = j - 1;

        while (i >= 0 && activity[i].finishTime > keyObj.finishTime)
        {
            activity[i + 1] = activity[i];
            i = i - 1;
        }
        // activity[i + 1].finishTime = key;
        activity[i + 1] = keyObj;
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "For Work-" << i + 1 << endl;

        cout << "Activity id: " << activity[i].id << endl;
        cout << "Activity start time: " << activity[i].startTime << endl;
        cout << "Activity finish time: " << activity[i].finishTime << endl;
    }

    return 0;
}