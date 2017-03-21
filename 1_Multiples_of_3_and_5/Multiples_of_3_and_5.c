#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

unsigned long long quotient(int n, int divisor){
    int remainder = n % divisor;
    unsigned long long last = (n - remainder)/divisor;
    return ((last * (last + 1))>>1);
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        unsigned long long a3, a5, a15;
        scanf("%d",&n);
        a3 = quotient( n - 1, 3 ) * 3;
        a5 = quotient( n - 1, 5 ) * 5;
        a15 = quotient( n - 1, 15 ) * 15;
        printf("%lld\n",(unsigned long long)(a3 + a5 - a15));
    }
    return 0;
}

