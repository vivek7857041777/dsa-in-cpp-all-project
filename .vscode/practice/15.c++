#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector<int> vec(5);
    // for(int i=0;i<5;i++){
    //     cin>>vec[i];
    // }
vector<int> :: reverse_iterator it;
     
    int i;
    for( auto it =vec.begin();it!=vec.end();it++){
        cin>>*it;
        
    }
    for( it =vec.rbegin();it!=vec.rend();it++){
        cout<<*(it);
    }
    return 0;
}
