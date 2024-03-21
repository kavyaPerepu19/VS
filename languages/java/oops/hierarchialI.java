package oops;

public class hierarchialI {
    public static void main(String[] args) {
        child1 c1=new child1();
        c1.eating();
        c1.breathing();
        c1.playing();//c1.studying error
        child2 c2=new child2();
        c2.eating();
        c2.breathing();
        c2.studying();//c2.playing error
    
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
class child1 extends parent{
        
        void playing()
        {
            System.out.println("playing...");
        }
}
class child2 extends parent{
        
        void studying()
        {
            System.out.println("studying...");
        }
}
