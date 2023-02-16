#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter Amount of each subcriptions:");
	scanf("%d ",&a);
	printf("\nEnter Total amount paid :\n");
	scanf("%d ",&b);
	printf("\nThe Number channels sucripted are %d",b%a);
}
