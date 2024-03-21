public class sub {
    public static void main(String [] arg)
    {
        int arr[]={2,4,5,6,7};
        for(int i=0;i< arr.length;i++)
        {
            for(int j=i;j<arr.length;j++){
                for(int k=i;k<=j;k++)
                {
                    System.out.print(arr[k]+" ");

                }
                System.out.println();

            }
            System.out.println();
        }
        System.out.println("heelllo");
    }
}
