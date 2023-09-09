// Matrix Multiplication of 3x3 order 

import java.util.Scanner;
class MatrixMultiplication
{
    public static void main(String[] args) 
    {
        int i,j,k;
        int a[][]=new int[3][3];   
        int b[][]=new int[3][3];   
        int C[][]=new int[3][3];   
        Scanner sc=new Scanner(System.in);
        System.out.println("enter element in first matrix ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("enter element in second matrix ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                b[i][j]=sc.nextInt();
            }
        }
        System.out.println("first matrix are ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("Second Matrix are ");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
               System.out.print(b[i][j]+" ");;
            }
            System.out.println();
        }
        
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                C[i][j]=0;
                for(k=0;k<3;k++)
                {
                    C[i][j]=C[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        System.out.println("Multiplication of matrices are");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
               System.out.print(C[i][j]+" ");;
            }
            System.out.println();
        }
    }
}