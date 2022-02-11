#include <stdio.h>
#include <limits.h>
int main() {
    int i, quantity, current, sum=0, min = INT_MAX;
    printf("Quantity - ");
    scanf("%i", &quantity);
    for (i = 1; i <= quantity; i++) {
        printf("%i num is ", i);
        scanf("%i", &current);
        sum += current;
        if(current<min){
            min = current;
        }
    }
    printf("\nSum is %i\nMin num is %i\n",sum, min);
    return 0;}
