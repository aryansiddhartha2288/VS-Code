import java.util.Scanner;
public class Great
 {
    public static void main(String[] args) 
    {
        System.out.print("Enter three number ");

        Scanner sc=new Scanner(System.in);
        int a= sc.nextInt();
        int b= sc.nextInt();
        int c= sc.nextInt();
        int s=a;
        if(b>a)
        s=b;
        if(c>b)
        s=c;
        System.out.print("greatest number is "+s);

        sc.close();
    }  
}


