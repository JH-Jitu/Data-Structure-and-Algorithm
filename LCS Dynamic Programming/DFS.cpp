#include <iostream>
using namespace std;
int g[100][100];
bool visited[100];
int n;

bool dfs(int u, int destination)
{
    if (u == destination)
        return true;
    visited[u] = true;
    for (int i = 0; i < n; i++)
    {
        if (g[u][i] == 1)
        {
            if (!visited[i])
            {
                dfs(i, destination);
                return true;
            }
        }
    }
    return false;
}

int main()
{

    cout << "Enter the number of nodes: ";
    cin >> n;
    int e;
    cout << "Enter the number of edges: ";
    cin >> e;

    int u, v;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    int source, destination;
    cout << "Enter source and destination node number: ";
    cin >> source >> destination;
    cout << "Is it reachable? " << dfs(source, destination) << endl;

    return 0;
}