public class Garbage{
    class Cat{ ... }
    
    public static main(String args[]){
        for(int i = 0 ; i < 1000 ; ++i){
            Cat neko = new Cat();
            // do not need to delete
        }
        // no Cats here
    }
}