#include<iostream> // calculatime hcf of two number
using namespace std;
int main(){
    int a,b,rem;
    cout<<"ente the value of a and b";
    cin>>a;
    cout<<endl;
    cin>>b;
    if(b>a){
        swap(a,b);
    }
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
        
    }
    cout<<"highest commonfactor value will be = ";
    cout<< a;
    return 0;

}