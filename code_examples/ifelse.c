#include <stdio.h>

int main(){
    int a = 4;
    if(a >= 0)
        a++;
        if(a <= 4)
            a = 4;
    else
        a = 0;
        
    printf("%d\n", a);
}
