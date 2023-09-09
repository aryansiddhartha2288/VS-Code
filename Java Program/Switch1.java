import java.util.Scanner;
public class Switch1 {
    public static void main(String[] args) 
    {
        int choice;
        Scanner sc=new Scanner(System.in);

        while(true)
        {
                System.out.println("1 Addition ");
                System.out.println("2 Subtraction ");
                System.out.println("3 Multiplication ");
                System.out.println("4 Division ");
                System.out.println("5 Remainder ");
                System.err.println("6 exit ");
                System.out.println("Enter your choice 1-6...");
                choice=sc.nextInt();

                switch(choice)
                {
                case 1: System.out.println("Enter two number ");
                        int a=sc.nextInt();
                        int b=sc.nextInt();
                        System.out.println("Addition=" +(a+b));
                break;

                case 2: System.out.println("Enter two number ");
                        int c=sc.nextInt();
                        int d=sc.nextInt();
                        System.out.println("Subraction=" +(c-d));
                break;

                case 3: System.out.println("Enter two number ");
                        int e=sc.nextInt();
                        int f=sc.nextInt();
                        System.out.println("Multiplication=" +(e*f));
                break;

                case 4: System.out.println("Enter two number ");
                        int g=sc.nextInt();
                        int h=sc.nextInt();
                        System.out.println("Division=" +(g/h));
                break;

                case 5: System.out.println("Enter two number ");
                int i=sc.nextInt();
                int j=sc.nextInt();
                System.out.println("sum=" +(i/j));
                break;

                case 6:
                System.exit(1);

                default:System.out.println("invalid choice ");
                break;       
                }
                 
                sc.close();
        }
    }  
}