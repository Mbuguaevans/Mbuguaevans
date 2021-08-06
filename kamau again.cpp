#include <stdio.h>
int main(int argc, char** argv)
{
	int i,k,sum;
	printf("enter two numbers\n");
	scanf("%d\n%d",&i,&k);
	if(i!=k){
		sum=i+k;
		printf("sum is normal:%d",sum);
	}
else if(i=k){
		sum=k*3;
		printf("sum is not normal%d",sum);
	}
	return 0;
}