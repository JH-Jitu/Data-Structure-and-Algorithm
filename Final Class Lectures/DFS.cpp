#include<iostream>
using namespace std;



int g[1000][1000];
bool vis[1000];
int n;
int destination;

bool dfs(int u) {
    if(u==destination) return true;
    vis[u] = true;
    for(int i = 0; i < n; i++) {
        if(g[u][i] == 1) {
            if(!vis[i]) {
                if(dfs(i)) return true;
            }
        }
    }
    return false;
}

int main() {
    cout<<"Enter node number: "<<endl;
    cin>>n;
    cout<<"Enter the number of edges: "<<endl;
    int e;
    cin>>e;
    int i, u, v;
    for(i = 0; i < e; i++) {
        cin>>u>>v;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    cout<<"Enter start and destination: ";
    int start;
    cin>>start>>destination;
    cout<<"Is it reachable? " << dfs(start) << endl;
    return 0;
}
