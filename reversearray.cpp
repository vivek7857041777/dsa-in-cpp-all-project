#include<iostream>
using namespace std;
int main(){
    int num[5]={12,54,65,89,14};
    int first =0 , last =4;
    while(first<last){
        swap(num[first],num[last]);
        first++;
        last--;
    }
    for(int i=0;i<5;i++){
        cout<< num[i]<<"\t";
    }
    return 0;

}