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
*/

int isPrime(long n){
    //sieve of eratosthenes
    //if prime, return 1. else 0
    long i = 0;
    int prime = 1;
    for(i = 2 ; i < n/2+1 ; i++){
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
        long n; 
		long i = 0, largestP = 0;
        scanf("%ld",&n);
        largestP = 1;
		for( i = n/2+1 ; i > largestP ; i--){	//we don't need to check more then half of itself
			if( n % i == 0) {
                if(isPrime(i))
                    largestP = i;
			}
		}
        if(largestP == 1) largestP = n;
        printf("%ld\n",largestP);
    }
    return 0;
}
