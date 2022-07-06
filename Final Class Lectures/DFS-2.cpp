#include<iostream>
using namespace std;


int n, current_time=0;
int g[1000][1000];
int color[1000];
int startTime[1000];
int endTime[1000];
int WHITE = 0, GRAY = 1, BLACK = 2;

void dfs(int u) {
    color[u] = GRAY;
    current_time = current_time + 1;
    startTime[u] = current_time;
    for(int i = 0; i < n; i++) {
        if(g[u][i] == 1) {
            if(color[i]==WHITE) {
                dfs(i);
            }
        }
    }
    color[u] = BLACK;
    current_time = current_time + 1;
    endTime[u] = current_time;
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
    }
    cout<<"Starting"<<endl;
    for(i = 0; i < n; i++) {
        if(color[i] == WHITE) {
            cout<<"Starting DFS from node: "<<i<<endl;
            dfs(i);
        }
    }
    for(i = 0; i < n; i++) {
        cout<<"Node: "<<i<<" color: "<<color[i]<<" startTime: "<<startTime[i]<<" endTime: "<<endTime[i]<<endl;
    }
    return 0;
}

/*
Enter node number:
6
Enter the number of edges:
8
0 1
0 3
3 1
1 4
4 3
2 4
2 5
5 5
Starting
Starting DFS from node: 0
Starting DFS from node: 2
Node: 0 color: 2 startTime: 1 endTime: 8
Node: 1 color: 2 startTime: 2 endTime: 7
Node: 2 color: 2 startTime: 9 endTime: 12
Node: 3 color: 2 startTime: 4 endTime: 5
Node: 4 color: 2 startTime: 3 endTime: 6
Node: 5 color: 2 startTime: 10 endTime: 11
*/
