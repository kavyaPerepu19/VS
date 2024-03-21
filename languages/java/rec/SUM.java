package rec;
public class SUM {
    int sum(int n) {
        if (n == 0) {
            return 0; 
        } else {
            return n + sum(n - 1);  
        }
    }

    public static void main(String[] args) {
        SUM x = new SUM();
        System.out.println(x.sum(5));
    }
}
