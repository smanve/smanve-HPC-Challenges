#include <stdio.h>
int bitwise_add(int x, int y) {
    while (y != 0){
        int carry = x & y;
        x = x ^ y; 
        y = carry << 1;
        }
    return x;
}
int main(){
   int a = 100, b = 100;
   printf("The sum of %d and %d using bitwise adding is %d", a, b, bitwise_add(a, b));
   return 0;
}