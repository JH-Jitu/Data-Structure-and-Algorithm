#include <iostream>
using namespace std;

int g[1000][1000];
bool vis[1000];
int n;
int destination;

int e;

bool dfs()
{
    // if (startingNode == destination)
    // {
    //     return false;
    //     // If Starting Node and Destination is same, it cannot make cycle.
    //     // So, I am returning false if these are same
    // }
    vis[startingNode] = true;
    for (int i = 0; i < n; i++)
    {
        if (g[startingNode][i] == 1)
        {
            if (!vis[i])
            {
                if (dfs(i))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    cout << "Enter node number: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> e;
    int i, u, v;

    cout << endl
         << "Write the edges: ";
    for (i = 0; i < e; i++)
    {
        cin >> u >> v;
        g[u][v] = 1;
        // g[v][u] = 1;
    }
    cout << "starting node: " << g[0][1];
    cout << "Enter start and destination: ";
    // int start;
    // cin >> start >> destination;
    cout << "Is it reachable? " << (dfs() ? "yes" : "no") << endl;
    return 0;
}

// 0 1 0 2 1 2 2 0 2 3 3 3

// 0 1 0 2 1 2 2 3