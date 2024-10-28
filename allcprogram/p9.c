// write a program to reverse  of four digit number
#include<stdio.h> // r is answer of this quetion 
int main(){
    int a,i,r=0,t=1;
    printf("enter the value of a >> ");
    scanf("%d",&a);
    for( i=0;i<4;i++){
        r = r + (t)*(a%10);
        t *=10;
        a = a/10;
        
        
    }
    printf("reverse of number is   %d",r);
    return 0;
}