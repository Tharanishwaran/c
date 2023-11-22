#include <stdio.h>

int main(){


int n;

printf("Enter an integer : ");

scanf("%d",&n);

int a = 0,b = 1,count = 2;

while (count <= n)
{

int temp = b;

b = b+a;

a = temp;

count++;



}


printf("%d",b);

return 0;






}