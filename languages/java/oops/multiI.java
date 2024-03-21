package oops;

public class multiI {
    public static void main(String[] args) {
        grandchild g=new grandchild();
        g.eating();
        g.breathing();
        g.playing();
        g.studying();
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
class grandchild extends child{ //grandchild inherits from child
    void studying()
    {
        System.out.println("studying...");
    }
}