#include<iostream>
using namespace std;
int main(){
    char l;
    for(int i=0;i<4;i++){
        for(int  j='A'+i;j>=65;j--){
            l=j;
            cout<<l;
        }
        cout<<"\n";
    }
    return 0;
}