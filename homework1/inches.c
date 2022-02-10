//
//  inches.c
//  homework1
//
//  Created by Egor Bakanach on 10.02.2022.
//

#include <stdio.h>

int main() {
    float inches;
    printf("What height are you?(in inches)\n");
    scanf("%f", &inches);
    printf("Wow! It's %3.0f%s\n",inches * 2.54," cm");
    return 0;
}
