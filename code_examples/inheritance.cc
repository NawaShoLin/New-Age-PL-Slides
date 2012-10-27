#include <stdio.h>
struct Square{
    int side;
    int area(){ return side * side; }
};

struct Cube : public Square{
    int volume(){ return area() * side; }
};

int main(){
    Cube c;
    c.side = 2;
    printf("%d %d", c.area(), c.volume());
    // output: 4 8
}
