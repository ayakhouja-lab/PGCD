#include<stdio.h>
#include<stdlib.h>
int main()
{int a;
int b;
int r;
printf("donner la valeur de premier nombre :");
scanf ("%d",&a);
printf("donner de dexieme nombre :");
scanf("%d",&b);
r=a%b;
while (r!=0){
    a=b;
    b=r;
    r=a%b;
}
  printf("le PGCD des deux nombre est:%d",b);
}

