#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        sum += i;
    }
    cout << sum;

    // int sum = 0;
    // int i = 0;
    // while (i < 3) // ekhane i<3 dte hobe.. karon loop e prothome i=0, then i=1, then i=2, then i=3 hocche.. jodi i<4 di tobe loop er vitor i++ hoe i=4 hoi jawar por loop break korbe.. but jodi i<3 di, tobe i=3 howar por por ei loop braek korbe...
    // {
    //     i++;

    //     if (i % 3 == 0)
    //     {
    //         continue;
    //     }

    //     sum += i;
    // }

    // cout << sum;
}