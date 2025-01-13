#include<iostream>
using namespace std;
int main(){
    // this is for check any number is power of two or not
    int n;
    cout<<"enter the value of n";
    cin>>n;
    if((n&n-1)==0){
        cout<<"it means n is power of two";
    }
    else{
        cout<<"it means no is not power of two";
    }
    return 0;
}