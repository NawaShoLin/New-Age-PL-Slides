void swap(int* a, int* b){ swap t = *a; *a = *b; *b = t; }
void QSort(int* ary, int left, int right){
    int l, r;
    if(left >= right){ return; }
    l = left;
    r = right + 1;
    while(1){
        while(l + 1 < right && ary[++l] < ary[left]);
        while(r - 1 >= left && ary[--r] > ary[left]);
        if(l >= r){ break; }
        swap(&ary[l], &ary[r]);
        ++l; --r;
    }
    swap(&ary[r], &ary[left]);

    Qsort(ary, left, r-1);
    Qsort(ary, r+1, right);
}
