class A
{
    static int b=20; // static variable
    int c=30;         //Instance variable
    public static void main(String[] args)
     {
        int a=10;//Local variable
        A ref=new A();
        System.out.println(a);
        System.out.println(A.b);
        System.out.println(ref.c);

    }
}
