package oops;

public class singleI {
    public static void main(String[] args) {
        child c=new child();
        c.eating();
        c.breathing();
        c.playing();
    }
    
}
class parent{
    void eating()
    {
        System.out.println("eating...");
    }
    void breathing()
    {
        System.out.println("breathing...");
    }
}
class child extends parent{//child inherits from parent
    
    void playing()
    {
        System.out.println("playing...");
    }

}

