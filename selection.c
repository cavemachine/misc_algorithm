#include <stdio.h>

int selection_s(int num[10]) {
    int start_pos = 0;
    int smallest = 0;
    int smallest_pos = 0;
    int tmp;

    while (start_pos < 10) {
        for (int i = start_pos ; i < 10; i++) {
            if ( i == start_pos ) {
                smallest = num[start_pos];
                smallest_pos = start_pos;
            }
            if ( i > start_pos ) {
                if ( num[i] < smallest ) {
                    smallest = num[i];
                    smallest_pos = i;
                }
            }
        }
        if ( smallest < num[start_pos] ) {
            tmp = num[start_pos];
            num[start_pos] = smallest;
            num[smallest_pos] = tmp;
            start_pos++;
        } else {
            start_pos++;
        }
    }
   return 0; 
}

int main() {

    int numbers[10] = {23, 2, 5, 8, 3, 43, 24, 78, 13, 9};
    selection_s(numbers);    
    
    for (int j = 0; j < 10; j++) {
        printf("%i ", numbers[j]);
    }
    printf("\n");
}
