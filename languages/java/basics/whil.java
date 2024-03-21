import java.util.*;
public class whil
{
    public static  void  main(String[] arg)
    {   float f= 2.3f;
        Scanner sc = new Scanner(System.in);
        int i=sc.nextInt();
        while(i<5)
        {
            System.out.println(i);
            System.out.println(f);
            i++;
        }
        sc.close();
    }
}