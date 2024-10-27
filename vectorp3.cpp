#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={1,2,8,4};
    for(int i: vec){
        cout<<i;
    }
    return 0;
}