#include<bits/stdc++.h>
#include<queue>
#include<conio.h>

using namespace std;

int main(){
    queue <int> q;
    q.push(1);
    q.push(5);
    q.push(10);
    q.push(11);

    while(!q.empty()){
        cout << q.front() << "\t";
        q.pop();
    }

    getch();
}
