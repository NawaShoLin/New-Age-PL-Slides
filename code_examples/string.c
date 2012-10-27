int strlen(char[] str){
    int i = 0;
    while(str[i] != '\0'){ ++i; }
    return i;
}

int main(){
    char s[]   = "String in C is not a object.";
    int length = strlen(s);
}
