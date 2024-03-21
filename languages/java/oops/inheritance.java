package oops;

public class inheritance {
    public static void main(String[] args) {
        Dog d=new Dog();
        d.bark();
        d.eat();//inherited methods from animal
        d.breathe();
    }
}
class Animal
{
    String color;
   
    void eat()
    {
        System.out.println("eating...");
    }
    void breathe()
    {
        System.out.println("breathing...");
    }

}
class Dog extends Animal{
    String breed;
    void bark()
    {
        System.out.println("barking...");
    }
}
