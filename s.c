#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
printf("The numbers before swapping are:%d\n%d\n",a,b);
c=a;
a=b;
b=c;
printf("The numbers after swapping are:%d\n%d\n",a,b);
}
