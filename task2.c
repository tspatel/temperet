#include<stdio.h>
main()
{
	int n,count=1;
	printf("enter the value  =");
	scanf("%d",&n);
		do{
		printf("%d x %d =%d\n",n,count,n*count);
		count++;
	}while(count<=10);
	
}
