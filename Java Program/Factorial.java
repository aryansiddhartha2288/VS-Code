// import java.util.Scanner;
import java.util.*;
public class Factorial 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=sc.nextInt();
        int fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
            System.out.println("The factorial of " +i+ " is " +fact);
        }
        System.out.println();                          //Line change
        System.out.println("Factorial is "+fact);      //print only value of single factorial

        sc.close();
    }
}
