import java.util.Scanner;
public class ArrayElementSearch {
    public static void main(String[] args) {
        int array[]=new int[5];
        System.out.println("Enter elements ");
        Scanner obj=new Scanner(System.in);
        for(int i=0;i<5;i++)
        {
            array[i]=obj.nextInt();
        }
        System.out.print("Array elements are ");
        for(int i=0;i<5;i++)
        {
            System.out.print(array[i]+" ");
        }
        System.out.println("\nEnter search elements ");
        int item=obj.nextInt();

        obj.close();

        int count=0;
        for(int i=0;i<5;i++)
        {
            if(array[i]==item)
            {
               count++;
            }
        }
        if(count>0)
            System.out.println("Item found "+count+" times");
        else
            System.out.println("item not found ");
    }
}
