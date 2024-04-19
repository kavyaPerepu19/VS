
public class sI {
    public static void main(String[] args)
    {
    child c1=new child();
    System.out.println(child.x); //x is not accessable since it is static
    // c1.display();
    }

}
abstract class parent{
    static int x=0;
    int y=2;
    abstract void display();

}
class child extends parent{
    
    void display()
    {
        int y=2;
    }
    
   
}
class grandchild extends child{
    void display()
    {
        int o=0;
    }
   

}