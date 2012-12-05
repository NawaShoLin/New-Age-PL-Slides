#include <stdio.h>
#include <limits.h>

// to count N's cool-number less than 40000000
// Eg. cool number of '2' is: 2, 4, 16, 256, 65536 ...

int main(){
    int i, j, count;
    for(i = 2 ; i < 100 ; ++i){
        count = 0;
        for(j = i ; j <= 40000000 ; j *= j){
            ++count;
        }
        printf("%d : %d \n", i, count);
    }
}
