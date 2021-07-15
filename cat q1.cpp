#include <stdio.h>
int main(int argc, char** argv)
{
	int radius,height,PI,volume;
	PI=3.142;
	printf("enter radius and height\n");
	scanf("%d\n%d",&radius,&height);
	volume=radius*radius*height*PI;
	printf("The volumeis:%d\n",volume);
	return 0;
}