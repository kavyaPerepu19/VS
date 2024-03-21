public class prime {
    public static void main(String [] arg)
    {
        int num = 9;
        for(int i=2;i<num-1;i++)
        {
            if(num%i==0)
            {   System.out.println("not prime");
                break;
            }
            

        }
        
    }
}
