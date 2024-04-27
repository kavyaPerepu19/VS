//  interface  A{
//     int a=1;
//     default void print()
//     {
//         System.out.println("hi");
//     }
//     private void x(){
//         System.out.println("hello");
//     }
// }
// interface X{
//     default void print(){
//         System.out.println("boooo");
//     }
// }
// interface B extends A, X{
//     int y=0;
// }
// class defInter implements B {

//     int a=0;
//     public  void print()
//     {
        
//         x1.print();
//     }
// }
// class interMain{
//     public static void main(String[] args) {
//         defInter d= new defInter();
//         d.print();
//     }
// }

