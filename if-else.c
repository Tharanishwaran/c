#include <stdio.h>

int main() {

    int a,b,c;


   printf("Enter an first integer: ");

    scanf("%d", &a); 

    
   printf("Enter an second integer: ");

    scanf("%d", &b); 


   printf("Enter an third integer: ");

    scanf("%d", &c); 


           
           int max = a;

    if (b > max) {


        max=b;

    }

    if(c > max) {

         max = c;

    }


     printf("%d",max);

    return 0;

}

