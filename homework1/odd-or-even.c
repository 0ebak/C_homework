//
//  odd-or-even.c
//  homework1
//
//  Created by Egor Bakanach on 10.02.2022.
//

#include <stdio.h>

int main() {
    int num;
    printf("Input a number:\n");
    scanf("%i", &num);
    if (num % 2 == 0) {
        printf("%i is even.\n", num);}
    else {
        printf("%i is odd.\n", num);}

    return 0;
}
