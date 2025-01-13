#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    m["laptop"]=100;
    m["mobiles"]=50;
    m["copies"]=60;
    m["pen"]=64;
    m["eraser"]=55;
    m["boil"]=40;
    m.emplace("camera",40);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;

    }
    cout<<endl;
    cout<<m["boil"];
    
    return 0;
}