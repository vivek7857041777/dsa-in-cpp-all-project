#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vec={5,6,4,3};
    for(int val:vec){
        cout<<val<<endl;
    }
    sort(vec.begin(),vec.end(),greater<int>());
    for(int ra:vec){
        cout<<ra<<endl;
    }
    return 0;

}