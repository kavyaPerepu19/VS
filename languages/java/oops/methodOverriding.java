package oops;

public class methodOverriding {
    public static void main(String[] args) {
        deer d1=new deer();
        d1.eat();
    }
}
class animal{
    void eat()
    {
        System.out.println("eats anything");
    }
}
class deer{
    void eat()
    {
        System.out.println("eats grass");
    }
}