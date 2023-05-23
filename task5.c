#include<stdio.h>
main()
{
	int n,i,a=0
	printf("enter the number =");
	scanf("%d",&n);
	i=n;
	while(n>0)
	{
		r=n%10;
		a=r+(a*10);
		n=n/10;
	}
	if(i==a)
	printf("palindrom number");
	else
	printf("not polindrom number");
}
