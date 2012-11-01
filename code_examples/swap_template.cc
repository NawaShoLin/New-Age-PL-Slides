template<class T>
void swap(T& a, T& b){T temp = a; a = b; b = temp;}

int main(){
    int a, b;
    float c, d;
    
    swap(a,b);
    swap(c,d);
}
