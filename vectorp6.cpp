#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec={'a','b','c','d'};// for printing alphabates
    cout<< "size of vec"<< vec.size()<<endl;
    for(char j: vec ){
        cout<< j<<endl;
    }
    return 0;


}
