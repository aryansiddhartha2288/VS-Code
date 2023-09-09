import java.util.Scanner;
class abc
{
    public abc(String name, int roll)
    {
        System.out.println("Constructor of the clas abc is automatically called");
        System.out.println("Name of the student: "+name);
        System.out.println("Roll of the student: "+roll);
    }
}
public class ParaConstructor 
{
    public static void main(String[] args)      
    {
        Scanner sc=new Scanner(System.in);
        String name;    
        int roll;   
        System.out.println("Please enter your name and roll");  
        name=sc.nextLine();   
        roll=sc.nextInt();  
        abc obj=new abc(name,roll);
        
        sc.close();   
    }   
}