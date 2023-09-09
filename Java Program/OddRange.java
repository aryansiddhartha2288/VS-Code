//Print odd number between 1 to N  

import java.util.Scanner;
public class OddRange {
    public static void main(String[] args) {
        System.out.println("Enter any number ");
        Scanner obj=new Scanner(System.in);
        int n =obj.nextInt();

        obj.close();
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            System.out.print(i +" ");
        }
    }    
}
