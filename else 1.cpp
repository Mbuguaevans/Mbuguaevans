#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b;
	printf("enter a,b:\n");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
	return 0;
}