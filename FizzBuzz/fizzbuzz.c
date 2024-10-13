#include <stdio.h>

int main(){

    int i;

    // fizzbuzz
        // if i is divisible by 3 print "Fizz"
        // if i is divisible by 5 print "Buzz"
        // if i is divisible by both print "FizzBuzz"

    for (i = 1; i < 100; i++){
        if (i % 3 == 0 && i % 5 ==0){
            printf("FizzBuzz\n");
        } else if (i % 5 == 0){
            printf("Buzz\n");
        } else if (i % 3 == 0){
            printf("Fizz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}