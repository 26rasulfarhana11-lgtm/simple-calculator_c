#include<stdio.h>
int main()
{
char op;
float a,b;
printf("enter the expression:");
scanf("%f %c %f",&a,&op,&b);
switch(op)
{
case'+':
printf("=%.2f\n",a+b);
break;
case'-':
printf("=%.2f\n",a-b);
break;
case'*':
printf("=%2f\n",a*b);
break;
case'/':
if(b!=0)
{
printf("=%.2f\n",a/b);
}
else
{
printf("division by zero!!");
}
break;
default:
printf("invalid operator\n");
}
return 0;
}