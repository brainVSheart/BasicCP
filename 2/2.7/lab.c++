#include <stdio.h>
int main(void){
    int limit;
    int n;
    int fizz = 0, buzz = 0, fizzbuzz = 0, other = 0;
    if (scanf("%d", &limit) != 1)
        return 1;
    for (n = 1; n <= limit; ++n){
        if (n % 15 == 0){
            fizzbuzz++;
        }else if (n % 3 == 0){
            fizz++;
        }else if (n % 5 == 0){
            buzz++;
        }else{
            other++;
        }
    }
    printf("Count FizzBuzz : %d\n", fizzbuzz);
    printf("Count Fizz     : %d\n", fizz);
    printf("Count Buzz     : %d\n", buzz);
    printf("Count other    : %d\n", other);
    return 0;
}