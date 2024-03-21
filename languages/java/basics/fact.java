class fact {
    public static int fac (int n)
    {
        int f=1;
        for (int i=n;i>=1;i--)
        {
            f=f*i;
        }
        return f;

    }
    public static void main(String args [])
    {
        int n=5;
        System.out.println(fac(n));

    }
    
}
