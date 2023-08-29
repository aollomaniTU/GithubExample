#include <stdio.h>

//Initilize functions
unsigned long long calculateFactorial(int n){
    if (n==0 || n==1){
        return 1;
    }else{
        return n * calculateFactorial(n-1);
    }
}
void printSqaure(int n){
    int res = n * n;
    printf("The sqaure of %d is %d.\n", n, res);
}




