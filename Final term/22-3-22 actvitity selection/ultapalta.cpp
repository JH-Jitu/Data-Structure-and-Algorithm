#include <iostream>
using namespace std;

// 0 1 0 2 1 2 2 0 2 3 3 3  => Output => 'Yes'
// 0 1 0 2 1 2 2 3  => Output => "No"

int g[1000][1000];
bool vis[1000];
bool visitingStack[1000]; // a stack to store nodes in one path
int n;

// Function to check paths in every node
bool dfs(int singleNode)
{
    vis[singleNode] = true;
    visitingStack[singleNode] = true; // visited node in the stack, path detected

    for (int i = 0; i < n; i++)
    {

        if (g[singleNode][i] == 1) // if path singleNode to i
        {
            if ((!vis[i] && dfs(i)) || visitingStack[i]) // Check Cycle
            {
                return true;
            }
        }
    }

    // else false => no cycle
    visitingStack[singleNode] = false; // this singleNode is not from any cycle, storing false in the stack
    return false;                      // dfs returning false as no cycle
}

// Function to check cycle in path
bool checkCycle()
{
    for (int i = 0; i < n; i++)
    {
        // previous code (first checking visit for the node and then checking boolean value from dfs function)

        if (!vis[i])
        {
            if (dfs(i))
            {
                return true;
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
    int e;
    cin >> e;
    int i, u, v;

    cout << "Write paths from start to end: "; // added instructions to make readability and user friendly
    for (i = 0; i < e; i++)
    {
        cin >> u >> v;
        g[u][v] = 1; // Directed vertex => u to v
    }

    cout << (checkCycle() ? "yes" : "no") << endl;
    return 0;
}
