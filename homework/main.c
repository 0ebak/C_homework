#include <stdio.h>
#include <math.h>


int distance(double x1, double y1, double x2, double y2){
    double distance;
    distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    printf("%f\n",distance);
    return 0;
}


int gcd(int a,int b){
    int current;
    if (a > b) {
        current=b;}
    else{current=a;
        
    }
    while((a%current!=0) || (b%current!=0)){
        current--;
    }
    printf("%i\n",current);
    return current;
}

int reverse(int a){
    int b=0;
    while (a){
        b= b*10 + a%10;
        a /=10;
    }
    printf("%i\n",b);
    return 0 ;
    
}

int primeQ(int num){
    int cur= num-1;
    while (num%cur!=0){
        cur--;
    }
    if (cur==1){
        printf("%i\n",1);
    }else{
        printf("%i\n",0);
}
    
    return 0;
}

int min(double a, double b, double c){
    if ((a<=b && b<=c)||(a<=c && c<=b)){
        printf("%f\n", a);
    }
        else {
            if((b<=a && a<=c )||(b<=c&&c<=a)){
            printf("%f\n", b);
            }
            else{
                printf("%f\n", c);
}
        }
        
    
    
    return 0;
}

int rec(int a, int s){
    if (a!=1){
        s *= a;
        a--;
        printf("s=%i\n",s);
        rec(a,s);}
    return 0;
}

int main() {
    rec(7,1);
    return 0;
}
