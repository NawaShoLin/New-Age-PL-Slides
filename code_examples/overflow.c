#include <stdio.h>

int main(){
    int four_pow[100] = {1}, i;
    for(i = 1 ; i < 100 ; ++i)
        four_pow[i] = four_pow[i-1] * 4;

    for(i = 0 ; i < 100 ; ++i)
        printf("4 ^ %d = %d \n", i, four_pow[i]);
}
