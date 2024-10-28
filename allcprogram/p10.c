// write a program to reverse  of four digit number
#include<stdio.h>
#include<math.h>
 // r is answer of this quetion
 
int main(){
    int a,i,p=0,r=0,t,sum =0;
    
    printf("enter the value of a >> ");
    scanf("%d",&a);
    sum =sum +a;
    
    
       
        while(sum>0){
        sum/=10;
        p =p+1;
        }
    
    
    printf("%d\n",p);
    

     t =pow(10,p);
     printf("%d\n",t);
     t =t/10;
     printf("%d\n",t);

    for(i=0;a>0;i++){
        r = r + t*(a%10);
        t/=10;
        
        a = a/10;
        
    }
    
    printf("reverse of number is   %d",r);
    return 0;
}