#include <stdio.h>
#include <string.h>

int main(){
    // 50 people have name and hobby
    char* table[50][2]; int i;
    table[0][0] = "John";
    table[0][1] = "reading";
    table[1][0] = "Hanako";
    table[1][1] = "playing GalGame";
    // ...

    // find Hanako's hobby
    for(i = 0 ; i < 50 ; ++i){
        if(strcmp(table[i][0], "Hanako") == 0)
            printf("%s\n", table[i][1]);
    }
}
