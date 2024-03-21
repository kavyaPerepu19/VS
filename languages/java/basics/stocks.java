public class stocks {
    public static int mProfit(int array[ ])
    {
        int profit =0;
        for(int i=1;i<array.length;i++)
        {
            if(array[i]>array[i-1])
            {
                profit+=array[i]-array[i-1];
            }
        }
        return profit;
    }
    public static void main(String args[])
    {
        int array[]={1,5,3,8,12};
        System.out.println(mProfit(array));
    }   
    
}
