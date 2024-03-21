 import java.util.*;
 class solution {
    public static void main(String[] arg)
    {
        Scanner sc=new Scanner(System.in);
        int x;
        x=sc.nextInt();
        if(x>0)
        {
            System.out.println("+ve");
        }
        else if(x<0)
        {
             System.out.println("-ve");
        }
        else{
             System.out.println("0");
        }
        sc.close();
    }
    
}
