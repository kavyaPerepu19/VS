public class poly{
    static void calculate(A a1)
    {
        System.out.println("calci");
        a1.print();
    }
 
}
abstract class A{
    abstract void print();
    
}
class B  extends A{
     void print()
    {
        System.out.println("hello");
    }
}
class C extends A{
    void print()
    {
        System.out.println("bye");
    }
}
class D extends poly{
    void  calculate()
    {
        System.out.println("this is D");
    }
}
class polyMain{
    public static void main(String[] args) {
        B b=new B();
        
        D.calculate(b);
     }
}