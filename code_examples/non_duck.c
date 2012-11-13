#include <stdio.h>

typedef struct{ int foot_num; } Duck;
typedef struct{ int foot_num; } Human;

void DuckWalk(Duck duck){
    printf("I walk with %d feet!\n", duck.foot_num);
}
