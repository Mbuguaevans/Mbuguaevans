#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b,sum,average;
	printf("enter two numbers:\n");
	scanf("%d\n%d",&a,&b);
	sum=a+b;
	printf("sum is:%d\n",sum);
	average=sum/2;
	printf("average is:%d",average);
	return 0;
}