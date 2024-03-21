public class ispalindrome {
    public static boolean isP(int n)
    {
       int  rev=0;
       int temp = n;
       while(temp > 0)
       {
        int dig=temp%10;
        temp=temp/10;
        rev=rev*10+dig;


       }
       return rev==n;
    }
    
    public static void main(String[] arg)
    {
        System.out.println(isP(0));
    }
}
