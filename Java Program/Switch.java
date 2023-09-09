import java.util.Scanner;
public class Switch {
    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);
        
        int a,b,choice;
        System.out.println("Enter your choice.....1-5");
        System.out.println("1 Addition ");
        System.out.println("2 Subtraction ");
        System.out.println("3 Multiplication");
        System.out.println("4 Division");
        System.out.println("5 Reaminder");
        choice=obj.nextInt();
        System.out.println("enter two number ");
        a=obj.nextInt();
        b=obj.nextInt();

        obj.close();

        switch(choice)
        {
            case 1:System.out.println("Sum="+(a+b));
            break;

            case 2:System.out.println("Subtraction="+(a-b));
            break;

            case 3:System.out.println("Multiplication="+(a*b));
            break;

            case 4:System.out.println("Division="+(a/b));
            break;

            case 5:System.out.println("Remainder="+(a%b));
            break;

            default:System.out.println("Invalid choice ");
        }
    }  
}