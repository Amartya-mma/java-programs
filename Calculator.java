import java.io.DataInputStream;
import java.io.IOException;
class Calculator
{
    public static void main(char x)throws IOException
    {
    DataInputStream obj=new DataInputStream(System.in);
    System.out.println("Enter val");
    int a=Integer.parseInt(obj.readLine());
    System.out.println("Enter val");
    int b=Integer.parseInt(obj.readLine());
    switch(x)
    {
    case '+':
    System.out.println(a+b);
    break;
    case '-':
    System.out.println(a-b);
    break;    
    case '*':
    System.out.println(a*b);
    break;
    case '/':
    System.out.println(a/b);
    break;   
    case '%':
    System.out.println(a%b);
    break;
    default:
    System.out.print("pk hai k??");
    }
    }
}