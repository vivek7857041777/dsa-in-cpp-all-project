#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(4);
    s.push(3);
    s.push(2);
    while(!s.empty()){
        
        cout<<s.top()<<endl;
        s.pop();

    }
    return 0;
    
    
    
}