#include <stdio.h>
int main() {
    int i, quantity, current, sum=0;
    printf("Quantity - ");
    scanf("%i", &quantity);
    for (i = 1; i <= quantity; i++) {
        printf("%i num is ", i);
        scanf("%i", &current);
        sum += current; }
    printf("\nSum is %i\n",sum);
    return 0;}
