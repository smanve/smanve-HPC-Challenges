#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
int bitwise_add(int x, int y) {
    while (y != 0){
        int carry = x & y;
        x = x ^ y; 
        y = carry << 1;
        }
    return x;
}
int bitwise_mul(int x, int y) {
    int res = 0;
    bool positive = false;
    if (x >= 0 && y >=0)
    { 
        positive = true;
    }
    else if (x < 0 && y < 0){
        positive = true;
    }
    x = abs(x);
    y = abs(y);
    int i;
    for (i = 0; i < y; i++){
        res = bitwise_add(res, x);
    }
    if(positive){
        return res;
    }
    else{
        return -res;
    }
}
int main(){
   int a = 56, b = -3;
   printf("The sum of %d and %d using bitwise adding is %d", a, b, bitwise_add(a, b));
   printf("\nThe product of %d and %d using bitwise adding is %d", a, b, bitwise_mul(a, b));
   return 0;
}