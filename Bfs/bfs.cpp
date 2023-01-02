
#include<bits/stdc++.h>
#include<conio.h>
#include<queue>

#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int node;
int edge;
int adj[100][100];
int color[100];
int parent[100];
int dis[100];

void bfs(int startingNode){
    for(int i = 0; i < node; i++){
        color[i] = WHITE;
        dis[i] = INT_MIN;
        parent[i] = -1;
    }
    dis[startingNode] = 0;
    parent[startingNode] = -1;

    queue <int> q;
    q.push(startingNode);

    while(!q.empty()){
        int x;
        x = q.front();
        q.pop();
        color[x] = GRAY;
        cout << x << "\t";
        for(int i = 0; i < node; i++){
            if(adj[x][i] == 1){
                if(color[i] == 1){
                    dis[i] = dis[x] + 1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }

        color[x] = BLACK;
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    scanf("%d %d", &node, &edge);

    int n1,n2;

    for(int i = 0; i < edge; i++){
        scanf("%d %d", &n1, &n2);
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
    cout << "Breth-first traversal for the given graph: ";
    bfs(0);

    getch();
}
