#include <stdio.h>

int main()
{
swap_with_2_variables();
swap_with_3_variables();
return 0;
}
//swapping with three number
void swap_with_2_variables(int a,int b)
{
printf("Enter the Value of a:");
scanf("%d",&a);
printf("Enter the Value of b:");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a:%d\nb:%d\n",a,b);
}
//swapping with three number
void swap_with_3_variables(int a,int b,int temp)
{
printf("Enter the Value of a:");
scanf("%d",&a);
printf("Enter the Value of b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("a:%d\n b:%d\n temp:%d",a,b,temp);
}
