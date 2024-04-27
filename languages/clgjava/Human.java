class Human {
    int age;
    String name;
    char gender;
    Human(int age,String name,char gender)
    {
        this.age=age;
        this.name=name;
        this.gender=gender;

    }

}
class Teacher extends Human{
    static int curr=0;
    int Id;
    Teacher(int age,String name,char gender)
    {
        super(age,name,gender);
        Id=curr++;

    }
    boolean MarkAttendence(Student s1)
    {
        s1.isPresent=true;
        s1.isMarked=true;
        System.out.println("attendence marked for "+s1.name+" by teacher "+name);
        return true;
    }
}
class Student extends Human{
    boolean isPresent;
    boolean isMarked;
    Student(int age,String name,char gender)
    {
        super(age,name,gender);
        isPresent=false;
        isMarked=false;

    }
    void checkIfAttendence()
    {
        
        System.out.println("attendence marked is "+isMarked);
    }
}
class Hmain{
    public static void main(String[] args) {
        Teacher t1=new Teacher(35,"t1",'M');
        Student s1=new Student(19,"s1",'F');
        Teacher t2=new Teacher(35, "t2", 'F');
        Student s2=new Student(19,"s2",'M');
        t1.MarkAttendence(s1);
        s1.checkIfAttendence();
        t2.MarkAttendence(s2);
        s2.checkIfAttendence();
    }
}
