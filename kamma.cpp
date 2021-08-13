#include <stdio.h>

int main() {

int  celsius,fahrenheit,num;

printf("choose either,to\n convert to celsius 1\n convert to fahrenheit 2\n");
printf("center 1 0r 2\n");
scanf("%d",&num);
if(num=1){
printf("u choose to convert to celsius");
scanf("%d",&fahrenheit);
celsius=(fahrenheit-32)*5/9;
printf(" %d",celsius);
}
else{
printf("u choose to convert to fahrenheit");
scanf("%d",&celsius);
fahrenheit=(celsius-32)*9/5;
printf("answer is %d",fahrenheit);
}
return 0;
}