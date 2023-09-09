   // To find average of five number

import java.util.Scanner;
 class Average1
 {
    int roll;
    String name;
    int m1,m2,m3,m4,m5;
    float  avg;
    public void input()
    {
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter roll,name and 5 marks ");
        roll=sc.nextInt();
        name=sc.next();
        m1=sc.nextInt();
        m2=sc.nextInt();
        m3=sc.nextInt();
        m4=sc.nextInt();
        m5=sc.nextInt();
        avg=(m1+m2+m3+m4+m5)/5f;

        sc.close();
    }
    public void show()
    {
        System.out.println("roll="+roll);
        System.out.println("name="+name);
        System.out.println("marks="+m1+" "+m2+" "+m3+" "+m4+" "+m5);
        System.out.println("avg="+avg);
    }
 }
    public class Average
    {
        public static void main(String[] args) 
        {
        Average1 obj=new Average1();              //object is created of class name
        obj.input();
        obj.show();
        }
    }

