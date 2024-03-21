public class sort {
    public static int[] bubble(int [] arr)
    {
        int temp=0;
        for(int i=0;i<arr.length;i++)
        {
            for(int j=1;j<arr.length-i;j++)
            {
                if(arr[j-1]>arr[j])
                {
                    temp=arr[j-1];
                    arr[j-1]=arr[j];
                    arr[j]=temp;
                }
            }

        }
        return arr;
    }
    
    public static int[] selection(int arr[])
    {
        int temp=0;
        for(int i=0;i<arr.length;i++)
        {
            int min=i;
            for(int j=i+1;j<arr.length;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        return arr;
    }
    public static int [] insertion (int arr[])
    {
        for(int i=1;i<arr.length;i++)
        {
            int curr =i;
            int prev = i-1;
            while(prev >0 && arr[prev]>arr[curr])
            {
                arr[prev+1]=arr[prev];
                prev--;
            }
            arr[prev+1]=arr[curr];
        }
        return arr;
    }
    public static void main(String arg[])
    {
        int arr[]={1,2,4,7,8,9,20};
        int sorted[]=insertion(arr);
        for(int i=0;i<sorted.length;i++)
        {
            System.out.println(sorted[i]);
        }
    }
    
}
