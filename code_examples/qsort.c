#include <stdlib.h>

int compare(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int main(){
    int ary[4] = {1, 3, 2, 4};

    qsort(ary, 4, sizeof(int), compare);
}
