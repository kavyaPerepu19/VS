
class Restraunt {
    String restName;
    float stars;
    MenuItem menu[];
    Restraunt(String restName,float stars,MenuItem menu[])
    {
        
        this.restName=restName;
        this.stars=stars;
        this.menu=menu;
    }
        public boolean order(MenuItem menu[])
    {

        System.out.println("recieved");
        return true;
    }
    public float bill(MenuItem[]i)
    {
        float amt=0;
        for(int j=0;j<i.length;j++)
        {
            amt+=i[j].price;
        }
        return amt;
    }


    
}
class MenuItem{
    String name;
    int price;

}
class Rmain
{
    public static void main(String[] args) {
        MenuItem menu[]= new  MenuItem[3];
        for(int i=0;i<3;i++)
        {
            menu[i]=new MenuItem();
        }
        
        Restraunt r1=new Restraunt("kmit",0.5f,menu);
        System.out.println(r1.order(menu));
    }
}