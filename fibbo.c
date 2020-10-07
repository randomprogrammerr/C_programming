#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i1=0,i2=1,fibbo,i;
    clrscr();
    printf("\nEnter a number:");
    scanf("%d",&n);
    printf("\nFibonacci Series\n");
    printf("%d\t%d",i1,i2);
    for(i=3;i<=n;i++)
   {
        fibbo=i1+i2;
        printf("\t%d",fibbo);
        i1=i2;
        i2=fibbo;
    }
    getch();
}