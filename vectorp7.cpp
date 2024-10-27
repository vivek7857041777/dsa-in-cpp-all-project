// this is for add some index or delete some index push and pop is used 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(45);
    vec.push_back(48);
    vec.push_back(58);
    // vec.pop_back();
    cout<< vec.front()<<endl;
    cout<<vec.back()<<endl;



    cout<<"size of vetor"<< vec.size()<<"\n";
    // for(int j: vec){
    //     cout<< j<<endl;
    // }
    return 0;
}
