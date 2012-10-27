class Cat{...};

int main(){
    Cat* cat = new Cat();
    delete cat;

    for(int i = 0 ; i < 1000 ; ++i){
        Cat* neko = new Cat();
        // ... forget to delete
    }
    
    // there are 1000 Cats in ur memory..
}
