#include <stdio.h>

int check_fizz_buzz(int fizz, int buzz, int range){
    int i;
    for (i=1; i<=range; i++) {
        if ((i % fizz == 0) && (i % buzz == 0)) {
            printf("FizzBuzz\n");
        }else if (i % fizz == 0){
            printf("Fizz\n");
        }else if (i % buzz == 0){
            printf("Buzz\n");
        }else
            printf("%d\n", i);
    }
    return 0;
}

int main(){
    // Define the two numbers to be used for fizzing and buzzing
    int fizz = 3;
    int buzz = 5;

    // Define the range of numbers to check
    int range = 100;

    // Call the function, check err status
    if (check_fizz_buzz(fizz, buzz, range) != 0){
        printf("Failed to fizzbuzz\n");
    }
}
