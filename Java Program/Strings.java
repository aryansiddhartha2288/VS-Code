import java.util.Scanner;
public class Strings 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter first name ");
        String a=sc.next();
        System.out.println("Enter Second name ");
        String b=sc.next();
        
        String c=a.toLowerCase();
        String d=b.toLowerCase();
        
        String e=a.toUpperCase();
        String f=b.toUpperCase();

        int g=a.length();
        int h=b.length();

        
        System.out.println("Lowercase letter=" +c+ " " +d);
         
        System.out.println("Uppercase letter=" +e+" "+f);

        System.out.println("Length=" +g+ " " +h);

        sc.close();   
    }
    
}
