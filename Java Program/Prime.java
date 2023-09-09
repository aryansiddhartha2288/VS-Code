import java.util.Scanner;
public class Prime
{
    public static void main(String[] args) 
    {
        int i;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter any number ");
        int a=sc.nextInt();

        sc.close();

        for(i=2;i<=a-1;i++)
        {
            if(a%i==0)
            break;
        }
        if(a==i)
        System.out.println("Prime number");
        else
        System.out.println("Not prime ");
    }
}