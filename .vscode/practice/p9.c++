#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={5,6,4,43};
    for(int k:vec){
        cout<<k;
    }
    
    cout<<endl;
    vec.pop_back();
    for(int val:vec){
        cout<<val;
    }
    cout<<endl;
    cout<<vec.at(2);
   
    
    return 0;
}