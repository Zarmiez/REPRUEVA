#include <stdio.h>

int main(int argc, char** argv){
   if(argc < 2){
      return 1;
   }
   FILE input = fopen(argv[1], "r");
   unsigned int sum = 0,
                first = 0,
                current = 0,
                next = 0;
   unsigned short int first_time = 1;
   if(input == NULL){
      return 1;
   }
   while(!feof(input)){
      fscanf(input, "%1u", &next);
      if(first_time){
         first = next;
         current = next;
      }
      else{
         if(next == current){
            sum += next;
         }
         else{
            current = next;
         }
      }
   }
   if(next == first){
      sum += first;
   }
   printf(">> %u\n", sum);
   return 0;
}
