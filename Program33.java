//Approach 1
import java.util.Scanner;
class Program33
{
    public static void main(String A[])
    {
        Scanner scanner=null;
        int iValue1=0,iValue2=0,iResult=0;
        scanner=new Scanner(System.in);

        System.out.println("Enter the First Number:");
        iValue1=scanner.nextInt();

        System.out.println("Enter the Second Number:");
        iValue2=scanner.nextInt();

        iResult=iValue1+iValue2;                                 //Business logic

        System.out.println("The Addition is:"+iResult);


        

        
     }
}