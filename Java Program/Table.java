import java.util.Scanner;
public class Table
 {
    public static void main(String[] args)
     {
        int n,i;
        Scanner sc=new Scanner(System.in);
        System.out.println(" Enter number of table ");
        n=sc.nextInt();

        sc.close();

        for(i=1;i<=10;i++)
        {
            System.out.println(n+""+"*"+i+""+""+"="+(n*i));
        }
    }
}