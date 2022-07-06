#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string X;
    string Y;

    X = " BDCABA";
    Y = " ABCBDAB";

    int m = 6, n = 7;
    int table[m + 1][n + 1];
    string lcs_print[m + 1][n + 1];

    for (int i = 0; i <= m; i++)
        table[i][0] = 0;

    for (int j = 0; j <= n; j++)
        table[0][j] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i] == Y[j])
            {
                table[i][j] = table[i - 1][j - 1] + 1;
                lcs_print[i][j] = "copy";
            }

            else if (table[i - 1][j] >= table[i][j - 1])
            {
                table[i][j] = table[i - 1][j];
                lcs_print[i][j] = "skipX";
            }

            else
            {
                table[i][j] = table[i][j - 1];
                lcs_print[i][j] = "skipY";
            }
        }
    }

    int i = m, j = n;
    string result = "";

    bool lcs = true;

    while (lcs)
    {
        if (i == 0 || j == 0)
        {
            lcs = false;
        }

        else if (lcs_print[i][j] == "copy")
        {
            result = result + X[i];
            i--;
            j--;
        }

        else if (lcs_print[i][j] == "skipX")
        {
            i--;
        }

        else
        {
            j--;
        }
    }

    // Without reverse
    cout << endl
         << "Reverse of LCS (from down to top): " << result << endl
         << endl;

    // Reversing
    reverse(result.begin(), result.end());
    cout << "LCS: " << result << endl
         << endl;

    // Length of LCS
    cout << "LCS length is: " << table[m][n] << endl
         << endl;
    return 0;
}