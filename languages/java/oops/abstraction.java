package oops;

public class abstraction {
    public static void main(String[] args) {
        child1 c1=new child1();
        c1.eat();
        c1.work();
        child2 c2=new child2();
        c2.eat();
        c2.work();
        c2.sleep();
    }
    
}
abstract class parent{
    parent()
    {
        System.out.println("parent class constructor");
    }
    void eat()
    {
        System.out.println("eating...");
    }
    abstract void work();
}
class child1 extends parent{
    child1()
    {
        System.out.println("child1class constructor");
    }
    void work()
    {
        System.out.println("working.... morning");
    }


}
class child2 extends parent{
    child2()
    {
        System.out.println("child2 class constructor");
    }
    void work()
    {
        System.out.println("working.... evening");
    }

    void sleep()
    {
        System.out.println("sleeping");
    }
}