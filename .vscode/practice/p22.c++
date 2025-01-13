#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    string ram;
    cout<<"enter the text which you want to print =  ";
    getline(cin,ram);
    cout<<ram;
    cout<<ram.length();
    reverse(ram.begin(),ram.end());
    cout<<endl;
    cout<<ram;
    return 0;
    
}