// Write a program to print simple interest SI = (PNR)/100 in C language
#include<stdio.h>
#include<conio.h>
void main(){
    int p,n,r;
    float SI;
    printf("Enter the values of the P N R ");
    scanf("%d%d%d",&p,&r,&n);
    SI=(p*n*r)/100;
    printf("The value of simple Intrest is %0.2f",SI);

}
