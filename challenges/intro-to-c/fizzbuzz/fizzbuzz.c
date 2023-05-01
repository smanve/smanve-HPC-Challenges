/// Implementation
#include<stdio.h>

int main(){
int i;
    
    for (i = 0; i <= 100; i++)
    {
        if(i%3 == 0 && i%5 == 0){
            printf("Fizzbuzz\n");
            continue;
        }
        else if(i%3 == 0){
            printf("Fizz\n");
            continue;
        }
        else if(i%5 == 0){
            printf("Buzz\n");
            continue;
        }
        else{
            printf("%d\n", i);
            continue;
        }
    }
}