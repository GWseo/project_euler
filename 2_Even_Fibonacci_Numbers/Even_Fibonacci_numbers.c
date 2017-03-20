#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n; 
        unsigned long long sum = 2, p1 = 2, p2 = 3, tmp;
         
        scanf("%ld",&n);
        for(long i = 0 ;  ; i ++){
            tmp = p1 + p2;
            if( tmp > n) break;
            if(tmp % 2 == 0)    sum += tmp;
            p1 = p2;
            p2 = tmp;
        }
        printf("%lld\n", sum);
        
    }
    return 0;
}

