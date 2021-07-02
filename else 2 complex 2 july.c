#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b,c,average,marks;
	printf("enter marks for kiswahili:\n");
	printf("enter marks for english:\n");
	printf("enter marks for history:\n");
	scanf("%d%d%d",&a,&b,&c);
	average=(a+b+c);
	printf("averageis:%d\n",average);
	marks=(average/3);
	printf("marks:%d\n",marks);
	
	if(marks>=70){
		printf("GRADE A");
	}
	else if(marks>=60)
	{
		printf("grade b");
	}
	else if(marks>=50)
	{
	printf("grade c");	
	}
	else if(marks>=40)
	{
	printf("grade d");	
	}
	else
	{
		printf("failed");
	}
	return 0;
}
