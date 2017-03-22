#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
    First, try sieve of eratosthenes but, Test Case #4, #5 time out
    Second, run sieve reverse   -> #4, #5 time out
    thrid, check prime odd num only, if even return fasle   -> #5 time out
    last, divide N by divisor
*/

int isPrime(long n){
    //sieve of eratosthenes.
    //check range is sqrt of n
    //if prime, return 1. else 0
    long i = 0;
    int prime = 1;

    if(n % 2 == 0 ) return 0;
    for(i = 3 ; i * i < n ; i+= 2){
        if(n % i == 0){
            prime = 0;
            break;
        }
    }
    return prime;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        long n, origin_n;
		long i = 0;
        scanf("%ld",&n);
        // N must larger then 10 smaller then 10^12
        //remove factor of 2
        while(n % 2 == 0) 
            n /= 2;

        //check only odd number
		for( i = 3 ; i * i <= n; i+= 2){
			if( n % i == 0) {
                n = n/i;
                //remove same factor
                while(n % i == 0){
                    n /= i;
                }
                //check if it is prime
                if(isPrime(n)){
                    break;
                }
			}
		}
        if(n == 1) n = i;
        printf("%ld\n",n);
    }
    return 0;
}
