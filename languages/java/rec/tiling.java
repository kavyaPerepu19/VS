package rec;
// basically fibnum+1
import java.util.*;
public class tiling {
    public static int tiles(int n)
    {
        if(n==0|| n==1)
        {
            return 1;
        }
        else{
            return tiles(n-1)+tiles(n-2);
        }
        
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
       int x=sc.nextInt();
        System.out.println(tiles(x));
        sc.close();
    }

}
