int myAbs(int a){...}
int myAbs(float a){...}

int main(){
    int   n = -10;
    float f = -20.0;

    // both of n and f can use "myABS"
    myAbs(n);
    myAbs(f);
}
