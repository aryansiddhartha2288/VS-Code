import java.util.Scanner;
class IfElse
{
    public static void main(String[] args) {
        System.out.println("Enter age");
        Scanner obj=new Scanner(System.in);
        int age=obj.nextInt();
        if(age>=18)
        System.out.println("Eligible for vote");
        else
        System.out.println("Not for eligible ");

        obj.close();
    }  
}

