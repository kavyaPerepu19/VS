class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class linkList {
    Node head;

    public void insert(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node current = head;
        while (current.next != null) {
            current = current.next;
        }
        current.next = newNode;
    }
    public void insertAtStart(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }
    public void insertAt(int index, int data) {
        Node newNode = new Node(data);
        if (index == 0) {
            insertAtStart(data);
            return;
        }
        Node current = head;
        for (int i = 0; i < index - 1; i++) {
            current = current.next;
        }
        newNode.next = current.next;
        current.next = newNode;
    }
    public void display() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
        System.out.println();
    }
    public int delete()
    {
        Node temp=head;
        while(temp.next.next!=null)
        {
            temp=temp.next;

        }
        int da=temp.next.data;
        temp.next=null;
        return da;
    }
    public int delAtBeg()
    {
        int da=head.data;
        head=head.next;
        return da;
    }
    public void delAt(int index)
    {
        if(index==0)
        {
            head=head.next;
            return;
        }
        Node temp=head;
        for(int i=0;i<index-1;i++)
        {
            temp=temp.next;
        }
        temp.next=temp.next.next;
    }
    public int search(int data,Node temp)
    {
        if(temp==null)
        {
            return -1;
        }
        if(temp.data==data)
        {
            return 1;
        }
        return search(data,temp.next);
    }
    public int search(int data)
    {
        return search(data,head);
    }
    public void reverse()
    {
        Node prev=null;
        Node curr=head;
        Node next=null;
        while(curr!=null)
        {
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;

        }
        head=prev;
    }
    public void isCycle()
    {
        Node slow=head;
        Node fast =head;
        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
            if(slow==fast)
            {
                System.out.println("Cycle is present");
                return;
            }

        }
    }
    public void removeCycle()
    {
        Node slow=head;
        Node fast =head;
        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
            if(slow==fast)
            {
                break;
            }

        }
        slow=head;
        while(slow.next!=fast.next)
        {
            slow=slow.next;
            fast=fast.next;
        }
        fast.next=null;
    }
}

 class LLmain {
    public static void main(String[] args) {
        linkList ll = new linkList();
        ll.insert(1);
        ll.insert(2);
        ll.insert(3);
        ll.insertAtStart(0);
        ll.insertAt(2, 5);
        ll.display();
        System.out.println("Deleted element is: "+ll.delete());
        ll.display();
        System.out.println("Deleted element is: "+ll.delAtBeg());
        ll.display();
        ll.delAt(1);
        ll.display();
        System.out.println(ll.search(1));
        linkList ll2 = new linkList();
        ll2.insert(1);
        ll2.insert(2);
        ll2.insert(3);
        ll2.insertAtStart(0);
        ll2.display();
        ll2.reverse();
        ll2.display();
    }
}

