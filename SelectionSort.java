import java.io.*;
class SelectionSort
{   
    public static void main(String args[])throws IOException
    {
    DataInputStream obj=new DataInputStream(System.in);
    int a[]=new int[8];
    System.out.println("enter array elements");
    for(int b=0;b<8;b++)
    a[b]=Integer.parseInt(obj.readLine());
   for(int d=0;d<8;d++)
   {
   int min=a[d];
    for(int f=d+1;f<8;f++)   //this 
    {                        //is
    if(min>a[f])             //to
   {                         //find 
   min=a[f];                 //min no
   int q=a[d];               
   a[d]=min;  
   a[f]=q;           
   }
   }
   }
   System.out.println("vals after sorting in ascending order");
   for(int e=0;e<8;e++)
   System.out.println(a[e]);
}
}