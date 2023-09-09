    // create  New Class 

import java.util.Scanner;
class Createclass
{
    int roll;
    String name ;
    public void input()
    {
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter roll and name ");
        roll=sc.nextInt();
        name=sc.next();
        
        sc.close();
    }
    public void show()
    {
        System.out.println("Your roll="+roll);
        System.out.println("Your name="+name);
    } 
}
public class Newclass
{
        public static void main(String[] args) 
        {
          Createclass obj=new Createclass();
          obj.input();
          obj.show();  
        }
}