#include <stdio.h>

int main () {
   int numbers[10] = {4, 9, 2, 8, 12, 15, 5, 1, 20, 17};

   int init_c_pos = 1;
   int c_pos = 1;
   int tmp;

   while (init_c_pos < 10) {
       c_pos = init_c_pos;
       while ( (c_pos > 0) && (numbers[c_pos] < numbers[c_pos - 1]) ) {
           // swap begin
           tmp = numbers[c_pos];
           numbers[c_pos] = numbers[c_pos - 1];
           numbers[c_pos - 1] = tmp;
           // swap end

           c_pos--;
       }
       init_c_pos++;
   }
   for (int i = 0; i < 10; i++) {
       printf("%d ", numbers[i]);
   }
   printf("\n");
}
