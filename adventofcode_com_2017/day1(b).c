#include <stdio.h>

int main(int argc, char** argv){
   if(argc < 2){
      return 1;
   }
   FILE* input = fopen(argv[1], "r");
   unsigned int sum = 0;
   unsigned short int first = 0,
                      current = 0,
                      next = 0;
   if(input == NULL){
      return 2;
   }
   while(fscanf(input, "%1hu", &next) != EOF){
      if(current == 0){
         first = next;
         current = next;
      }
      else{
         if(next == current){
            sum += current;
         }
         current = next;
      }
   }
   if(current == first){
      sum += first;
   }
   printf(">> %u\n", sum);
   return 0;
}
