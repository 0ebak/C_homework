//
//  age.c
//  homework1
//
//  Created by Egor Bakanach on 10.02.2022.
//

#include <stdio.h>

int main() {
    int years;
    printf("How old are you?\n");
    scanf("%i", &years);
    printf("You are %i days old.\n", years * 365);
    return 0;
}

