#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> vec(5);
    for(int i=0;i<5;i++){
        cin>>vec[i];

    }
    vec.insert(vec.begin()+2,50);
    vec.push_back(5);
    
    if(vec.empty()){
        cout<<"ture";
    }
   

    for(int ram:vec){
        cout<<ram;
    }
    return 0;
}
