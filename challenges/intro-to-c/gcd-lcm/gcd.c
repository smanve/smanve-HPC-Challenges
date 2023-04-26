/// Implementation
#include<stdio.h>

int main(){

    // using one, two to store input
    // using a, b to calculate on
    int one, two, a, b;
    printf("Enter first postive integer ");
    scanf("%d", &one);
    printf("Enter second positive integer ");
    scanf("%d", &two);
    a = one;
    b = two;

    // making sure a > b
    if (b > a){
        int temp = b;
        b = a;
        a = temp;
    }

    // while loop to calculate gcd
    while(a != b) {
        if(a > b){
            a = a - b;
        }
        else if(b > a){
            b = b - a;
        }
    }
    
    // getting lcm from gcd using lcm(a,b) = |a*b|/gcd(a,b)
    int lcm = (one * two)/b;

    //printing gcd and lcm
    printf("gcd(%d, %d) = %d \n", one, two, b);
    printf("lcm(%d, %d) = %d", one, two, lcm);
    return 0;
    
}
