#include<iostream> // arranging to this in assending order and all zeros ones and twos should be togather
#include<vector>
using namespace std;
int main(){
    vector<int> vec={2,0,2,1,1,0,1,2,0,0};
    for(int i=0;i<9;i++){
        for(int j=i+1;j<10;j++){
            if(vec[j]<vec[j-1]&&vec[j]<vec[i]){
                swap(vec[j],vec[i]);
            }
        }
    }
    for(int k:vec){
        cout<<k<<endl;
    }
    return 0;

    
}