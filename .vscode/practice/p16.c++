#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> li(5);
    for(auto it=li.begin();it!=li.end();it++){
        cin>>*it;
    }
    li.push_front(6);
    for(auto it=li.begin();it!=li.end();it++){
        cout<<*it;
    }
    cout<<endl;
    cout<<
    return 0;
}

