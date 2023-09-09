import java.util.Arrays;

class ArrayClassMethod
{
    public static void main(String[] args) 
    {
        String arrays[]={"Name", "Aryan", "Siddhartha",};
        System.out.println(Arrays.toString(arrays));

        System.out.println(Arrays.asList(arrays));
        
        int arr[][]={ {10,20}, {30,40 }};
        System.out.println(Arrays.deepToString(arr));
    }
}
