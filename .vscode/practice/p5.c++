#include<iostream>
using namespace std; // writing program to convert binary no decimal number
int main(){
    int n;
    int pow=1;
    int sum=0;
    int modu;
    cout<<"entet the value of n";
    cin>>n;
    while(n>0){
        modu=n%10;
        sum+=modu*pow;
        pow*=2;
        n=n/10;
    }
    cout<<sum;
    return 0;

}