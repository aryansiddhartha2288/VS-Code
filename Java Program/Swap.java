import java.util.Scanner;
public class Swap
{
  public static void main(String[] args) 
  {
    int a,b;
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter two number ");
    a=sc.nextInt();
    b=sc.nextInt();
    System.out.println("BEFORE SWAP");
    System.out.println("a="+a);
    System.out.println("b="+b);
    a=a+b;
    b=a-b;
    a=a-b;
    System.out.println("AFTER SWAP ");
    System.out.println("a="+a);
    System.out.println("b="+b);

    sc.close();
  }
}
