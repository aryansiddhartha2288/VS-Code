import java.util.Scanner;

public class Typecast
{
     public static void main(String[] args) 
    {
        System.out.println("Enter any number");
        Scanner obj=new Scanner(System.in);
        int a=obj.nextInt();
        System.out.println("int a="+a);
        double b=a;                                    //implicit typecast    i.e Convert Small to big data_type
        System.out.println("double b="+b);
        
        int c= (int)b;                                //Explicit typecast     i.e Convert Big to Small data_type
        System.out.println("int c="+c);

        obj.close();
    }
}
    
