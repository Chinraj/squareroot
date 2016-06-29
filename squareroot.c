#include<stdio.h>
#include<conio.h>
void main()
{
int x1,y1,x2,y2,z;
printf("enter x and y values :\n");
scanf("%d\n%d\n%d\n%d",&x1,&x2,&y1,&y2);
z=((x1+x2)*(x1+x2))+((y1+y2)*(y1+y2));
printf("Square root value is :%d\n",z);
getch();
}
