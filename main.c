#include <stdio.h>
#include <sys/uio.h>
#include <float.h>
#include <stdlib.h>
#include <limits.h>


void sum_and_count() {
    double num, sum = 0;
    int i = 0;
    char flag = 0;
    while (1) {
        printf("Enter a number to put in sequence: ");
        if (scanf("%lf", &num) == 1) {
            i++;
            sum += num;
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
    }
    printf("Quantity: %d\n", i);
    printf("\nSum is %lf\n", sum);
}


void more(double k) {
    double a;
    int i = 0;
    for (;;) {
        printf("Enter a number: ");
        i++;
        if (scanf("%lf", &a) == 1) {
            if (a > k) {
            printf("%lf > k\nIt's %i number\n", a, i);
            break;
            }
        } else {
            printf("Not an allowed type!\n");
            break;
        }
    }
}

void is_increasing() {
    double num, last = DBL_MIN;
    int flag = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%lf", &num) == 1) {
            if (num > last) {
                last = num;
            } else {
                printf("Your sequence isn't increasing sequence!");
                break;
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!");
                break;
            } else {
                printf("Your sequence is increasing!");
                break;
            }
        }
        printf("*if u want to end the program -- enter a char*\n");
    }
}

void less_than_left_neigh() {
    double *a;
    int i;
    int size;
    printf("Enter the size of sequence: ");
    scanf("%d", &size);
    a = (double*)malloc(size * sizeof(double));
    for (i = 0; i<size; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    printf("Indexes of numbers less than it's left neighbour: ");
    for (i = 1; i<size; i++) {
        if (a[i] < a[i-1]) {
            printf("%d ", i);
        }
    }
}

void before_min() {
    double *a;
    int i, size,c = 0;
    double m = DBL_MAX;
    printf("Enter the size of sequence: ");
    scanf("%d", &size);
    a = (double*)malloc(size * sizeof(double));
    for (i = 0; i<size; i++) {
        printf("a[%d] = ", i);
        scanf("%lf", &a[i]);
    }
    for (i = 0; i<size; i++) {
        if (a[i] < m) {
            m = a[i];
            c = i;
        }
    }
    printf("Amount of numbers before first minimal: %d", c);
}

void max_even() {
    int num;
    int c = 0;
    int max_even = 0;
    int flag = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            if (num%2 == 0) {
                c++;
            } else {
                if (c > max_even) {
                max_even = c;
                c = 0;
            }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
        printf("*if u want to end the program -- enter a char*\n");
    }
    if (c > max_even) {
        max_even = c;
        c = 0;
    }
    printf("Max number of even numbers: %d", max_even);
}

void lengths_of_even_odd() {
    int num;
    int len_even = 0;
    int len_odd = 0;
    int *len_evens;
    int *len_odds;
    int i_e = 0;
    int i_o = 0;
    int i;
    int flag = 0;
    len_evens = (int*)malloc(20 * sizeof(int));
    len_odds = (int*)malloc(20 * sizeof(int));
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            if (num%2 == 1) {
                len_odd++;
                if (len_even > 0) {
                    len_evens[i_e] = len_even;
                    len_even = 0;
                    i_e++;
                }
            }
            if (num%2 == 0) {
                len_even++;
                if (len_odd > 0) {
                    len_odds[i_o] = len_odd;
                    len_odd = 0;
                    i_o++;
                }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
        printf("*if u want to end the program -- enter a char*\n");
    }
    if (len_even > 0) {
        len_evens[i_e] = len_even;
        len_even = 0;
        i_e++;
    }
    if (len_odd > 0) {
        len_odds[i_o] = len_odd;
        len_odd = 0;
        i_o++;
    }
    printf("Lengths of even series: ");
    for (i = 0; i < i_e; i++) {
        printf("%d ", len_evens[i]);
    }
    printf("Lengths of odd series: ");
    for (i = 0; i < i_o; i++) {
        printf("%d ", len_odds[i]);
    }
}


void amount_increasing() {
    int num;
    int m = INT_MIN;
    int flag = 0;
    int n = 0;
    int c = 0;
    int array[10];
    int i = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%d", &num) == 1) {
            if (num > m) {
               m = num;
               n++;
            } else {
                if (n > 1) {
                    c++;
                    array[i] = n;
                    i++;
                    if (num == m) {
                        m = INT_MIN;
                    } else {
                        m = num;
                    }
                    n = 1;
                }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
    }
    if (n > 1) {
        c++;
        array[i] = n;
    }
    printf("Amount of increasing places in sequence: %d\n", c);
    printf("Lengths of increasing places: \n");
    for (int j = 0; j < i + 1; j++) {
        printf("%d \n", array[j]);
    }
}


void more_similar() {
    int i = -1;
    int max_i = 0;
    int c = 0;
    int max_c = 0;
    double num;
    int last;
    int flag = 0;
    for (;;) {
        printf("Enter a number: ");
        if (scanf("%lf", &num) == 1) {
            if (max_c == 0) {
                c++;
                max_c = 1;
                last = num;
                i++;
            } else {
                if (num == last) {
                    c++;
                    last = num;
                    i++;
                } else {
                    if (c > max_c) {
                        max_c = c;
                        max_i = i - c + 1;
                    }
                    c = 1;
                    last = num;
                    i++;
                }
            }
            flag = 1;
        } else {
            if (flag == 0) {
                printf("Not an allowed type!\n");
            }
            break;
        }
    }
    if (c > max_c) {
        max_c = c;
        max_i = i - c + 1;
    }
    printf("Index of element, beginning the longest sequence of similar numbers: %d\n", max_i);
    printf("Amount of numbers in this sequence: %d\n", max_c);
}


int main() {
    more_similar();
    return 0;
}
