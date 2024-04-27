import java.util.ArrayList;

class Library {
    static int curr=0;
     ArrayList<Book>books=new ArrayList<Book>(); 
     void add(Book b1)
     {
        books.add(b1);

     }
     void print()
     {
        for(int i=0;i<3;i++)
        {
            Book currentBook = books.get(i);
            System.out.println("Book " + (i + 1) + ":");
            System.out.println("Name: " + currentBook.name);
            System.out.println("Author: " + currentBook.author);
            System.out.println("Issued: " + currentBook.isIssued);
            System.out.println("Returned: " + currentBook.isReturned);
            System.out.println("Issue ID: " + currentBook.issueId);
            System.out.println();
        }
     }
     void issue(Book b1)
     {
        b1.isIssued=true;

     }
     void retun(Book b1)
     {
        b1.isReturned=true;
     }
}
class Book{
    String name;
    String author;
    boolean isIssued;
    boolean isReturned;
    int issueId;
    Book(String name,String author)
    {
        this.name=name;
        this .author=author;
        isIssued=false;
        isReturned=false;
    }

}
class LibMain{
   public static void main(String[] args) {
      Book b1=new Book("b1","chethan bhagath");
      Library l1=new Library();
      System.out.println(b1.name);
      System.out.println(l1);
   }
}