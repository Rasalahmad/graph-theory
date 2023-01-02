#include<bits/stdc++.h>
#include<conio.h>
#include<stack>

using namespace std;

int main(){
    stack <int> s;
    s.push(5);
    s.push(7);
    s.push(6);
    s.push(54);

    while(!s.empty()){
        cout << s.top() << "\t";
        s.pop();
    }
}
