//
//  fivenum.c
//  homework1
//
//  Created by Egor Bakanach on 10.02.2022.
//

#include <stdio.h>
int main(){
    int i, current;
    float mean,sum = 0;
    printf("Input numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%i", &current);
        sum += current;
    }
    mean = sum / 5;
    printf("mean =  %.1f\n", mean);

    return 0;
}
