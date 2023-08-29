#include <stdio.h>
#include "math.h" 
//Use "" for custom .h files and <> for normal .h files

int main(int argc, char const *argv[]){
    int f3 = calculateFactorial(3); 
    printf("factorial(3) = %d\n", f3);
    printf("PI = %f\n", PI);
    return 0;
}

/*
Compile by doing:
gcc -c math.c -Wall -Werror
gcc -o main main.c math.o -Wall -Werror

OR
gcc -o main main.c math.c -Wall -Werror
*/