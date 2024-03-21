package oops;

public class copy {
    public static void main(String[] args) {
        copyHelper c1=new copyHelper("kavya","perepu");
        System.out.println(c1.first+" "+c1.last);

    }
}
class copyHelper{
    public String first;
    public String last;
    copyHelper(String first,String last)
    {
        this.first=first;
        this.last=last;
    }
    copyHelper(copyHelper c1)
    {
        this.first=c1.first;
        this.first=c1.last;

    }
}
