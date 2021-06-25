#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b,add,sub,mul,div,test,rem;
	test=20;
	printf("enter a,b values:\n");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	test-=a;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("results of add is=%d\n",add);
	printf("results of sub is=%d\n",sub);
	printf("results of mul is=%d\n",mul);
	printf("results of div is=%d\n",div);
	printf("results of rem is=%d\n",rem);
	printf("resultsof test is=%d\n",test);
	return 0;
}