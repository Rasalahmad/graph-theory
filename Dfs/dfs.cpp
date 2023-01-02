#include<bits/stdc++.h>
#include<conio.h>

#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int node;
int edge;
int adj[100][100];
int color[100];

void dfsVisit(int x){
    color[x] = GRAY;

    for(int i = 0; i < node; i++){
       if(adj[x][i] == 1){
        if(color[x] == WHITE){
            dfsVisit(x);
        }
       }
    }

    color[x] = BLACK;
    cout << x << "\t";
}

void dfs(){
    for(int i = 0; i < node; i++){
        color[i] = WHITE;
    }
    for(int i = 0; i < node; i++){
        if(color[i] == WHITE){
            dfsVisit(i);
        }
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
    cout << "Depth-first traversal for the given graph: ";
    dfs();

    getch();
}
