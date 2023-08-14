//Print a program
// 11 12
// 21 22

#include<stdio.h>
int main()
{
 int r,c;
 for(r=1;r<=2;r++)
 {
 c=1;
 while(c<=2)
 { printf("%d%d\t",r,c);
 c++;
 }
 printf("\n");
 }
 return 0;
}
