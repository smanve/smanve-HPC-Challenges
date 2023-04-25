/// Implementation
#include<stdio.h>

int main(){
    int count = 5;
    int one = 0;
    int two = 1;
    for (size_t i = 0; i < count; i++)
    {
        printf("%d,", one);
        printf("%d,", two);
        one = two + one;
        two = two + one;    
    }
    return 0;
}