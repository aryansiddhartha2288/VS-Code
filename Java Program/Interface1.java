interface Ab
{
   void show();           //public+abstract
} 
interface Cd
{
    void disp();
}
class Interface1 implements Ab,Cd
{
    public void show()     
    {
        System.out.println("Interface A and B");
    }
    public void disp()     
    {
        System.out.println("Interface C and D");
    }
    public static void main(String[] args) 
    {
        Interface1 r=new Interface1();
        r.show();
        r.disp();
    }
}