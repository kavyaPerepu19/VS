package oops;

public class hybridI {
    public static void main(String[] args) {
        child1 c1=new child1();
        grandchild g1=new grandchild();
        c1.eat();
        c1.work();
        //-------------------------------------------------------------
        g1.eat();
        g1.sleep();
        g1.study();
    }
}
class parent{
    void eat()
    {
        System.out.println("eating...");
    }
}
class child1 extends parent{
    void work()
    {
        System.out.println("working....");
    }
}
class child2 extends parent{
    void sleep()
    {
        System.out.println("sleeping");
    }
}
class grandchild extends child2{
    void study(){
        System.out.println("studying");
    }
}

