import java.util.Scanner;
public class ArrayLength {
 public static void main(String[] args) {
        int array[]=new int[5];
        Scanner obj=new Scanner(System.in);
        System.out.println("enter elements ");
        for(int i=0;i<5;i++)
        {
            array[i]=obj.nextInt();
        }

        obj.close();

        for(int i=0;i<5;i++)
        {
           System.out.print(array[i] +" ");
        }
        System.out.println("array length="+array.length);
    }   
}
