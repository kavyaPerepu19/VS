public class Account {
    int accNum=0;
    String accHolder;
    private double balance;
    int tc=0;
    Account(int acc,String name,double bal )
    {
        accNum=acc;
        accHolder=name;
        balance=bal;
    
    }
    
    void withdraw(double amount)
    {
        if(balance>=amount)
        {
            balance=balance-amount;
            System.out.println("Amount withdrawning successfully");
            tc++;
        }
        else
        {
            System.out.println("Insufficient balance");
        }
    }
    void deposit(double amount)
    {
        balance=balance+amount;
        tc++;
        System.out.println("Amount deposited successfully");
    }
    void setBalance(double bal)
    {
        balance=bal;
    }
    double getBalance()
    {
        return balance;
    }
    void getTc()
    {
        System.out.println(tc);
    }
    void display()
    {
        System.out.println(accHolder);
        System.out.println(accNum);
        System.out.println(balance);
    }
}