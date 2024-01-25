#include <stdio.h>
#include "NumClass.h"


int power(int base, int exponent){
    int ans = 1;
    for(int i = 0; i< exponent; i++){
        ans = ans*base;
    }
    return ans;
}
int armstrongRec(int num, int numOfDigits){
    if(num == 0){
        return 0;
    }
    else{
        int digit = num%10;
        return power(digit, numOfDigits)+armstrongRec(num/10, numOfDigits);
    }
}

int palindromeRec(int num, int rev){
    if(num == 0){
        return rev;
    }
    else{
        int digit = num%10;
        rev = rev*10 + digit;
        return(palindromeRec(num/10, rev));
    }
}




// int countDigits(int n){
//     int count = 0;
//     int number = n;
//      if(number == 0){return 1;}
     
//      if(number < 0){number = -number;}

//     while(number > 0){
//         number = number/10;
//         count++;
//     }
//     return count;
// }




int isArmstrong(int n){
    
    if(armstrongRec(n ,countDigits(n))==n){
        return 1;
    }
    
    
    return 0;
}

int isPalindrome(int n){
    return (n == palindromeRec(n, 0));
}

