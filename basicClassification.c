#include <stdio.h>
#include "NumClass.h"


int countDigits(int n){
    int count = 0;
    int number = n;
     if(number == 0){return 1;}
     
     if(number < 0){number = -number;}

    while(number > 0){
        number = number/10;
        count++;
    }
    return count;
}

int factorial(int n){
    if(n == 0 || n == 1){return 1;}
    else{return n * factorial(n-1);}
}

int isPrime(int n){
    if(n==1)
    {
        return 1;
    }
    if(n<1){return 0;}
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {return 0;}
    }
    return 1;
}

int isStrong(int n){
    int ans = 0;
    int number = n;
    while(number>0){
        int digit = number%10;
        ans = ans + factorial(digit);
        number = number/10;
    }
    if (ans == n){return 1;}
    else{return 0;}
}
