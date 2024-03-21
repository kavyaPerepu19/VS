package oops;

public class supr {
    
}
class parent{
    int age;
    parent()
    {
        System.out.println("parent class constructor");
    }
    void eat()
    {
        System.out.println("eating...");
    }
}
class child1 extends parent{
   
    child1()
    {
        super();
        super.age=10;
        System.out.println("child1class constructor");
    }
    void work()
    {
        System.out.println("working....");
    }
}