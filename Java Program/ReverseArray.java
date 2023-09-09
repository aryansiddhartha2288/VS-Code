import java.util.Scanner;
public class ReverseArray {
    public static void main(String[] args) {
        int array[]=new int [5];
        Scanner obj=new Scanner(System.in);
        System.out.println("enter 5 elements ");
        for(int i=0;i<5;i++)
        {
            array[i]=obj.nextInt();
        }

        obj.close();

        System.out.print("Reverse order of array elemnts ");
        for(int i=4;i>=0;i--)
        {
            System.out.print(array[i]+" ");
        }
    }
}
