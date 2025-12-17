#include<stdio.h>
#include<stdlib.h>
int main()
{int a;
int b;
int r;
 /*le saisie de deux nombre entier */
printf("donner la valeur de premier nombre :");
scanf ("%d",&a);
printf("donner de dexieme nombre :");
scanf("%d",&b);
 /*la détermination de pgcd par la boucle while*/
while (b!=0){
  r=a%b   ;
 printf ("a=%d,b=%d,r=a%%b=%d\n",a,b,r);
    a=b;;/*en remplaçe a par b*/
    b=r;/*en remplaçe b par r */
}
  printf("le PGCD des deux nombre est:%d",a);
if (a==1){
printf ("les deux nombres sont premier entre eux \n");
}
 return  0;
}







