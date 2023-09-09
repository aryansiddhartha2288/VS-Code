import java.util.Scanner;
public class ArrayElementsSum {
    public static void main(String[] args) {
        int array[]=new int[5];
        System.out.println("enter elements ");
        Scanner obj=new Scanner(System.in);
        for(int i=0;i<5;i++)                           // Enter array elements
        {
            array[i]=obj.nextInt();
        }
        
        obj.close();

        System.out.println("elements are ");
        for(int i=0;i<5;i++)                       //Print array elements
        {
            System.out.print(array[i]+" ");
        }
        int sum=0;
        for(int i=0;i<5;i++)
        {
           sum=sum+array[i];
        }
        System.out.println("\nSum of array elements are "+sum);   //print sum
    }
    
}
