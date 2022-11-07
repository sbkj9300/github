#include <stdio.h>
#include <stdlib.h>
//do while, break, continue
int main(void) {
    printf("最初はグー、じゃんけん\n");
    int hand;
    int rivalHand;

    do{ 
        printf("0:グー,1:チョキ,2:パー\n");
        scanf("%d", &hand);
        
        rivalHand = rand() % 3;
        printf("rivalHand,%d\n", rivalHand);

        if(hand == rivalHand) {
            printf("あいこでしょ\n");
        } else {
            printf ("勝負アリ");
            break;
        }
    } while (1);





}