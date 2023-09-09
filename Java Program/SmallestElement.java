import java.util.Scanner;
class SmallestElement
{
    public static void main(String[] args) 
    {
        int a[]=new int[5];
        Scanner r=new Scanner(System.in);
        System.out.println("enter 5 elements ");
        for(int i=0;i<5;i++)
        {
            a[i]=r.nextInt();
        }

        r.close();

        System.out.println("printed elements are ");
        for(int i=0;i<5;i++)        
        {
            System.out.print(a[i]+" ");
        }
        int min;
        min=a[0];
        for(int i=1;i<5;i++)
        {
            if(a[i]<min)
            min=a[i];
        }
        System.out.println("\nlargest element is "+min);
    }
}