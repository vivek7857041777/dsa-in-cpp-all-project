#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>  vec={{5,6},{3,4},{6,3},{0,2}};
    vec.push_back({5,6});
    for(pair<int,int> r:vec){
        cout<<r.first<<" "<<r.second<<endl;
    }
    return 0;
}