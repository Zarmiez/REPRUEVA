#include<stdio.h>

typedef unsigned char digit;

int main(){
   unsigned int sum = 0,
                i = 0,
                size = 0,
                first = 0,
                current = 0,
                next = 0;
   scanf("%u", &size);
   printf("%u digitos\n", size);
   for(i = 0; i < size; ++i){
      scanf("%u", &next);
      if(i == 0){
         first = next;
         current = next;
      }
      else{
         if(next == current){
            sum += next;
         }
         if(i + 1 == size && next == first){
            sum += first;
         }
         current = next;
      }
   }
   printf(">>%u\n", sum);
   return 0;
}
