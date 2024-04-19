import java.util.LinkedList;
public class ll {
   
    public static void main(String[] args)
    {
        LinkedList<Integer> ll=new LinkedList<>();
        ll.addFirst(1);
        ll.addLast(2);
        ll.addFirst(4);
        ll.add(3);
        System.out.println(ll);
        // ll.removeFirst();
        // ll.removeLast();
        ll.sort(null);
        System.out.println(ll);
    }
}
