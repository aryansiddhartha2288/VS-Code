import java.util.Scanner;
public class ArrayElementsDescending {
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
        int temp;
        for(int i=0;i<5;i++)                      //Elements select 
        {
            for(int j=i+1;j<5;j++)
            {
                if(array[i]<array[j])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        } 
        System.out.print("\nElements arranged in ascending order : ");
        for(int i=0;i<5;i++)
        {
            System.out.print(array[i]+" ");
        }
    }
}
