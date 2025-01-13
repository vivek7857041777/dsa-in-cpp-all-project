#include<iostream>
#include<vector>
using namespace std;
int main(){ int i=0;
    vector<int> vec(5);
    for(int i=0;i<5;i++){
        cin>>vec[i];
    }
    vec.push_back(8);
    vec.emplace_back(8);
    for(int ram:vec){
        cout<<ram;
    }
    cout<<endl;
    cout<<vec.capacity();
    return 0;

    
    
}