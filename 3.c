//WAP by designing a recursive function to calculate the sumof the digits of any given integer.
#include<stdio.h>
int sumOfDigits(int);
int main(){
    printf("Enter a number : ");
    int n;
    scanf("%d",&n);
    printf("Sum of the digits of %d = %d",n,sumOfDigits(n));
    return 0;
}

int sumOfDigits(int n){
    if (n == 0)
        return 0;
    else 
        return n%10 + sumOfDigits(n/10);
}