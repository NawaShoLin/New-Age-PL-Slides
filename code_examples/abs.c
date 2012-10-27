// in <stdlib.h>
int abs(int a){
    if(a < 0) return -a;
    else return a;
}
// in <math.h>
int fabs(float a){
    if(a < 0) return -a;
    else return a;
}

int main(){
    int   n = -1;
    float f = -10.0;
    abs(n); // get 1 
    abs(f); // error!

    fabs(f);// get 10.0
}
