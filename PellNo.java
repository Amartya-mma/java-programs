import java.util.*;
class PellNo
{
    public static int pell(int n)
    {
    int a[]=new int[n];
    a[0]=1;
    a[1]=2;
    for(int z=2;z<n;z++)
    {
     a[z]=(2*(a[z-1]))+(a[z-2]);
    }
    return a[n-1];
    }
    public static void main(String args[])
    {
     System.out.println("Enter the position of which the pell no is to be displayed");
     Scanner obj=new Scanner(System.in);
     int n=obj.nextInt();
     int anspell=pell(n);
     System.out.println("the pell no at "+n+"is:"+anspell);
    }
}

