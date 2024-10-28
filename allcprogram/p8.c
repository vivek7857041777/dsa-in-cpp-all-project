// write a program to find sum of digit of four digit number
#include<stdio.h> // r is answer of this quetion 
int main(){
    int a,r=0;
    printf("enter the value of a >> ");
    scanf("%d",&a);
    for(int i=0;i<4;i++){
        r +=a%10;
        a = a/10;
        
    }
    printf("sum of digit of four num is  %d",r);
    return 0;
}