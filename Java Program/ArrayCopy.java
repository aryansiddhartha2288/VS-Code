import java.util.Scanner;
public class ArrayCopy {
    public static void main(String[] args) {
        int array[]=new int[5];
        System.out.println("Enter elements ");
        Scanner obj=new Scanner(System.in);
        for(int i=0;i<5;i++)
        {
           array[i]=obj.nextInt(); 
        }

        obj.close();

        System.out.print("Elemnts in first array are ");
        for(int i=0;i<5;i++)
        {
           System.out.print(array[i]+" ");  
        }

        int array1[]=new int[5];
        for(int i=0;i<5;i++)
        {
            array1[i]=array[i];
        }
        System.out.print("\nElements in second array are ");
        for(int i=0;i<5;i++)
        {
            System.out.print(array1[i]+" ");
        }
    }
}
