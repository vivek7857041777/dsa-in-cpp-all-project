#include<iostream>// converting decimal to binary no 
using namespace std;
int main(){
    int n;
    int rem;
    int pow=1;
    
    int sum=0;
    cout<<"enter the value of n";
    cin>>n;
    while(n>0){
        rem=n%2;
        sum+=rem*pow;
        pow*=10;
        n=n/2;

    }
    cout<<sum;
    return 0;


}