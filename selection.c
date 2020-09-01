#include <stdio.h>

int main() {
    int numbers[10] = {23, 2, 5, 8, 3, 43, 24, 78, 13, 9};
    int start_pos = 0;
    int smallest = 0;
    int smallest_pos = 0;
    int tmp;

    while (start_pos < 10) {
        for (int i = start_pos ; i < 10; i++) {
            if ( i == start_pos ) {
                smallest = numbers[start_pos];
                smallest_pos = start_pos;
            }
            if ( i > start_pos ) {
                if ( numbers[i] < smallest ) {
                    smallest = numbers[i];
                    smallest_pos = i;
                }
            }
        }
        if ( smallest < numbers[start_pos] ) {
            tmp = numbers[start_pos];
            numbers[start_pos] = smallest;
            numbers[smallest_pos] = tmp;
            start_pos++;
        } else {
            start_pos++;
        }
    }
    for (int j = 0; j < 10; j++) {
        printf("%i ", numbers[j]);
    }
    printf("\n");
}
