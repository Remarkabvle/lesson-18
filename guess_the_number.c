

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int gues, attamps = 0;


    do {
        scanf("%d", &gues);
        attamps++;
        if(gues > number){
            printf("Kiritgan soningiz katta\n");
        } else if (gues < number){
            printf("Kiritgan soningiz kichkina\n");

        }else {
            printf("Yutdingiz");

        }

    } while (number != gues);
    return 0;
}