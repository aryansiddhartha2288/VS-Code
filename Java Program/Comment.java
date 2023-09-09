                    /*Java varibale  */ 
                    
class Comment 
{
    int a=10;          //Instance variable   called by object
    static int b =20;   //static variable     called without object
    
    public static void main(String[] args) 
    {
        int c=30;          //Local variable
        final int D=40;   //Final variable
        
        Comment n=new Comment();    //Object creation

        System.out.println(n.a);
        System.out.println(Comment.b);

        System.out.println(c);
        System.out.println(D);
    }    
}
