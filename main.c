#include <stdio.h>

int main(void) {
    int anno;
    printf("inserisciun anno: ");
    scanf("%d", &anno);
    if((anno%4==0&&anno%100!=0)|| (anno%400==0)) {
        printf("%d e' un anno bisestile\n",anno);
    }else {
        printf("%d non e' un anno bisestile\n",anno);
    }
}
