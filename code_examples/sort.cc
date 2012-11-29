#include <stdio.h>
#include <algorithm>
using std::sort;

int main(){
    int a[] = {1, 3, 2, 4};    
    sort(a, a + 4);

    for(int i = 0 ; i < 4 ; ++i)
        printf("%d ", a[i]);
}
