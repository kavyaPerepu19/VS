package oops;

public class stu {
    public static void main(String[] args) {
        student s1=new student("kavya",1);
        s1.display();
    }
    
}


 class student {
    String name;
    int Id;
    public student(String name,int Id)
    {
        this.name=name;
        this.Id=Id;
    }
    void display()
    {
        System.out.println(name);
        System.out.println(Id);
    }

}
