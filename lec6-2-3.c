#include<stdio.h>

void main(){
    int n,i=2;
   
    printf("Enter a Value: ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        n+=2;
    }while(i>=n);
    n+=2;
 
}
