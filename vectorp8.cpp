// to check diff between size of vector and capacity 
// here we should know static allocation stored in stac memory but dynamic allocation happen in heap memory 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(45);
    vec.push_back(48);
    vec.push_back(58);
    
    


    cout<<"size of vetor"<< vec.size()<<"\n";
    cout<<"capicity of vector"<< vec.capacity();
   
    return 0;
}
