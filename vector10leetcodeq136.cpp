// i am going to solve by using nested loop and my noral logic
//in this question we have to print whose duplicacy is not avaliable
#include<iostream>
using namespace std;
int main(){
    int nums[5]={8,5,2,5,2};
    int s=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                continue;
            }
            if(nums[i]==nums[j]){
                nums[i]=-nums[i];

            }
        }
    }
    for(int k=0;k<5;k++){
        s+=nums[k];
    }
    cout<<"final answer is "<< s;
    return 0;
}
