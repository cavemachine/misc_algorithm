#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define sz 30
// comment
// comment
int main() {
    
    srand(time(NULL));

    int numbers[sz];
    for (int i = 0 ; i < sz ; i++) {
        numbers[i] = rand() % 200;
    }
    int len = sizeof(numbers) / sizeof(int);
    int cursor = len - 1;
    bool changed = false;
    int tmp;

    while ( cursor >= 0 ) {
        if (cursor == 0) {
            if ( changed == true ) {
                cursor = len - 1;
                changed = false;
            } else {
                printf("Fim\n");
                break;
            }
        }
        if ( numbers[cursor] < numbers[cursor - 1] ) {
            tmp = numbers[cursor - 1];
            numbers[cursor - 1] = numbers[cursor];
            numbers[cursor] = tmp;
            cursor--;
            changed = true;
        } else {
            cursor--;
        }
    }
    cursor = 0;
    while ( cursor < sz ) {
        printf("%i ", numbers[cursor]);
        cursor++;
    }
    printf("\n");
}
