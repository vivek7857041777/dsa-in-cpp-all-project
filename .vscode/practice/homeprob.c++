#include<iostream>  // taking matrix of 3: 3 print to it and print its transpose
using namespace std;
int main(){
    int mat[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }

    for(int l=0;l<3;l++){
        for(int m=0;m<3;m++){
            cout<< mat[l][m]<<" ";
        }
        cout<<endl;
    }

    for(int k=0;k<3;k++){
        for(int p=k;p<3;p++){
            swap(mat[k][p],mat[p][k]);

        }
    }
    for(int l=0;l<3;l++){
        for(int m=0;m<3;m++){
            cout<< mat[l][m]<<" ";
        }
        cout<<endl;
    }

}