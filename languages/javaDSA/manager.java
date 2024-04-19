import java.util.*;

public class manager {
    static int a = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter 1 for Savings account");
        System.out.println("Enter 2 for Current account");
        int ch = sc.nextInt();
        if (ch == 1) {
            Savings s1 = new Savings(a, 0);
            a++;

            boolean continueMenu = true;
            while (continueMenu) {
                s1.menu();
                int option = sc.nextInt();

                switch (option) {
                    case 1:
                        System.out.println("Please enter deposit amount");
                        double amount1 = sc.nextDouble();
                        s1.deposit(amount1);
                        break;
                    case 2:
                        System.out.println("Please enter withdraw amount");
                        double amount2 = sc.nextDouble();
                        s1.withdraw(amount2);
                        break;
                    case 3:
                        s1.display();
                        break;
                    default:
                        System.out.println("Invalid input");
                }

                System.out.println("Do you want to perform another operation? (yes/no)");
                String response = sc.next();
                if (!(response.equalsIgnoreCase("yes") || response.equalsIgnoreCase("y"))) {
                    continueMenu = false;
                }
            }
        } else if (ch == 2) {
            Current c1 = new Current(a, 0);
            a++;
            boolean continueMenu = true;
            while (continueMenu) {
                c1.menu();
                int option = sc.nextInt();

                switch (option) {
                    case 1:
                        System.out.println("Please enter deposit amount");
                        double amount1 = sc.nextDouble();
                        c1.deposit(amount1);
                        break;
                    case 2:
                        System.out.println("Please enter withdraw amount");
                        double amount2 = sc.nextDouble();
                        c1.withdraw(amount2);
                        break;
                    case 3:
                        c1.display();
                        break;
                    default:
                        System.out.println("Invalid input");
                }

                System.out.println("Do you want to perform another operation? (yes/no)");
                String response = sc.next();
                if (!(response.equalsIgnoreCase("yes") || response.equalsIgnoreCase("y"))) {
                    continueMenu = false;
                }
            }
        } else {
            System.out.println("Enter valid");
        }
    }
}

abstract class Account {
    int accnum;
    double balance;

    Account(int accnum, double balance) {
        this.accnum = accnum;
        this.balance = balance;
    }

    abstract void deposit(double amount);

    abstract void withdraw(double amount);

    public double getBalance() {
        return balance;
    }

    public void display() {
        System.out.println("Account Number: " + accnum);
        System.out.println("Balance: " + balance);
    }

    public void menu() {
        System.out.println("Enter 1 for deposit");
        System.out.println("Enter 2 for withdraw");
        System.out.println("Enter 3 to display account details");
    }
}

class Savings extends Account {
    Savings(int accnum, double balance) {
        super(accnum, balance);
    }

    static int max = 3;
    static int curr = 0;

    void deposit(double amount) {
        if (curr < max) {
            balance += amount;
            System.out.println("Amount deposited");
            curr++;
        } else {
            System.out.println("exceeded limit");
        }
    }

    void withdraw(double amount) {
        if (curr < max) {
            if (balance - 1200 >= amount) {
                balance -= amount;
                curr++;
            } else {
                System.out.println("Insufficient balance");
            }
        } else {
            System.out.println("exceeded limit");
        }
    }
}

class Current extends Account {
    Current(int accnum, double balance) {
        super(accnum, balance);
    }

    void deposit(double amount) {

        balance += amount;
        System.out.println("Amount desposited");

    }

    void withdraw(double amount) {
        if (balance - 1200 >= amount) {
            balance -= amount;
        } else {
            System.out.println("Insufficient balance");
        }
    }
}
