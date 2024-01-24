#include <stdio.h>
#include "NumClass.h"


int power(int base, int exponent){
    int ans = 1;
    for(int i = 0; i< exponent; i++){
        ans = ans*base;
    }
    return ans;
}

int isArmstrong(int n){
    int number = n;
    int numOfDigits = countDigits(number);
    int ans = 0;
    while(number > 0){
        int digit = number%10;
        ans = ans+power(digit, numOfDigits);
        number = number/10;
    }
    if (ans == number){return 1;}
    else{return 0;}
}

int isPalindrome(int n){
    int number = n;
    int revNum = 0;
    int numOfDigits = countDigits(n);
    if(numOfDigits == 1){return 1;}
    while(number > 0){
        int digit = number%10;
        revNum = revNum*10 + digit;
        number = number/10;
    }
    if(n == revNum){
        return 1;
    }
    else{
        return 0;
    }

}


