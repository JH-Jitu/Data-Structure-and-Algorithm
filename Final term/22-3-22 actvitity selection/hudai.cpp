#include <iostream>
using namespace std;

int g[1000][1000];
bool vis[1000];
int n;
int destination;

// bool dfs(int u)
// {
//     if (u == destination)
//     {
//         return true;
//     }
//     vis[u] = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (g[u][i] == 1)
//         {
//             if (!vis[i])
//             {
//                 if (dfs(i))
//                 {
//                     return true;
//                 }
//             }
//         }
//     }
//     return false;
// }

bool isCyclicUtil(int i, bool *visited, bool *recStack)
{
    if (recStack[i])
    {
        return true;
    }

    if (visited[i])
    {
        return false;
    }

    visited[i] = true;
    recStack[i] = true;

    // int c[]
    int length = sizeof(g) / sizeof(g[0]);

    for (int c = 0; c < length; c++)
    {
        if (!visited[c] && isCyclicUtil(c, visited, recStack))
            return true;
        else if (recStack[c])
            return true;
    }
    recStack[i] = false;
    return false;
}

bool isCyclic()
{
    bool visitied[n];
    bool recStact[n];

    for (int i = 0; i < n; i++)
    {
        visitied[i] = false;
        recStact[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visitied[i] && isCyclicUtil(i, visitied, recStact))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cout << "Enter node number: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    int e;
    cin >> e;
    int i, u, v;

    cout << "Write destination: ";
    for (i = 0; i < e; i++)
    {
        cin >> u;
        // g[u] = 1;
        g[u][v] = 1;
    }
    // cout << "Enter start and destination: ";
    // int start;
    // cin >> start >> destination;
    cout << "Is it reachable? " << (isCyclic() ? "yes" : "no") << endl;
    return 0;
}

// 0 1 0 2 1 2 2 0 2 3 3 3

// 0 1 0 2 1 2 2 3