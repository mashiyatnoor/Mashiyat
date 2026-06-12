#include <stdio.h>
int main() {	
   int n;
   printf ("Enter the number:");
   scanf ("%d" ,&n);
   if (n%2==0 && n%9==0){
       printf("The number is divisible by 2 and 9");
   }
   else{
       printf("The number is not divisible by 2 and 9");
   }
    return 0;
}
