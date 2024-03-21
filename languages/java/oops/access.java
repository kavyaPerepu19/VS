package oops;
class access{
    //now accessing password here will lead to an error sooo we use getters and setters like set password 
    //and get password
    public static void main(String[] args) {
        accessHelper a=new accessHelper("kavya","pkks");
        System.out.println(a.Id);
        //System.out.println(a.password);    this line is error as password is private
        System.out.println(a.getPass());
    }
    
}
class accessHelper {
    public String Id;
    private String password;
    accessHelper(String Id,String pass)
    {
        this.Id=Id;
        this.password=pass;
    }   
    String getPass()
    {
        return password;
    }
    String setPass(String pass)
    {
        this.password=pass;
        return password;

    }
    
}

