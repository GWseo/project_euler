#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/*
1. try from backword palindrome numbers
    1-1 reduce from maximum (require check for palindrome)
    1-2 factorization -> sieve of eratosthenes (stop when make 3-digit num)
*/

int primeCheck(){
    int result = 0;
    
    
    return result;
}

int main(){
    int t;      //# of try
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n;      // maximum  (101101< maximum<=999999)
        int high, rhigh = 0, low;
        scanf("%d",&n);
        //high 3-digit and reverse number    
        high = n/1000;
        rhigh = high/100 + (high % 10) * 100 + (high - ((high/100) + (high%10) * 100));
        
        //compare low 3-digit with reversed high 3-digit number
        low = n%1000;
        if(rhigh >= low){
           //if r-high is bigger or equal then go on
        }else{
           //else r-high is lower then check the high - 1 
        }
    }
    return 0;
}

