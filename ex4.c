#include <stdio.h>
#include <stdlib.h>

int main(){
   int i,num,heads=0,tails=0;
   
   char str[8];
   printf("Who are you? ");
   scanf("%s", str);
   printf("Hello, %s\n", str);
   printf("Tossing a coin...\n");

   for(i=0;i<3;i++){
      num = rand();
      if(num%2==0){
        printf("Round %d: Head\n",i+1);
        heads++;
      } else {
        printf("Round %d: Tail\n",i+1);
        tails++;
      }
   }

   printf("Heads: %d, Tails: %d\n", heads, tails);
   
   if(heads>tails){
     printf("%s won!\n", str);
   } else {
     printf("%s lost!\n", str);
   }

   return 0;
}
