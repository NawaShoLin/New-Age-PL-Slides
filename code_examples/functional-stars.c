void StarLine(int n){
    if(n > 0){
        printf("*");
        StarLine(n-1);
    }
}

void Stars(int n, int end){
    if(n <= end){
        StarLine(n);
        printf("\n");
        Stars(n+1 , end);
    }
}
