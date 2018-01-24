#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter the numbers");
scanf("%d,%d,%d",&a,&b,&c);
if((a>b)&&(a>b))
printf("\n %d is the greatest number",a);
else
{
if((b>c)&&(b>a))
printf("\n %d is the greatest number",b);
else
printf("\n%d is the greatest number",c);
}
getch();
}
