import java.util.*;
class StringSeparator
{
    public static void main(String args[])
    {
    Scanner obj=new Scanner(System.in);
    String a[]=new String[10];
    System.out.println("Enter a String");
    for(int z=0;z<10;z++)
    {
     a[z]=obj.next();
     System.out.println((z+1)+"."+a[z]);
    }
    }
}