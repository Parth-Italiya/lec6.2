#include<stdio.h>
main(){
	int n;
	int i=1;

	printf("Enter a Number: ");
	scanf("%d",&n);
	do{
		printf("%d\n",i);
		i++;
	}while(i<=n);
}
