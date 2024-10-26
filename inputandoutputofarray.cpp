#include<iostream>
using namespace std;
int main(){
    int arr[8];
    cout<<"enter the array number\n";
    for(int i=0;i<8;i++){
        cin>> arr[i];
    }
    cout<<"our result is >> \n";
    for(int j=0;j<8;j++){
        cout<<arr[j]<<endl;
    }
    return 0;
}