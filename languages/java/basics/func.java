import java.util.*;
public class func {
    public static int sum(int a,int b)
    {
        return a+b;
    }
    public static void main(String [] arg)
    {
        Scanner sc= new Scanner(System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        System.out.println(sum(a,b));
        sc.close();

    }
}
