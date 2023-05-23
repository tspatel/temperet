#include<stdio.h>
main()
{
	int i,n,sum=0,fd,ld;
	printf("enter the number =");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;
	printf("sum=ld+fd =%d",sum);
}
