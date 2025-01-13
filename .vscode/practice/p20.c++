#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,greater<int>> q;
    q.push(2);
    q.push(1);
    q.push(9);
    q.push(4);
    while(!q.empty()){
     cout<<q.top();
     q.pop();
    }
    return 0;
}