import java.io.*;
class Iobank
{
    public static int tot;
    public static int deposit(int depo)
    {
    tot=tot+depo;
    return(tot);
    }
    public static int withraw(int witr)
    {
    tot=tot-witr;
    return(tot);
    }
    public static void display(String nme)
    {
    System.out.println("Name:"+nme);    
    System.out.println("Acc. bal:"+tot);
    }    
    public static void main(String args[])
    {
    try
    {
    InputStreamReader obje =new InputStreamReader(System.in);
    BufferedReader objec=new BufferedReader(obje);
    System.out.println("Enter Name:");     
    String name=objec.readLine();
    DataInputStream obj=new DataInputStream(System.in);
    System.out.println("Enter Amount to be deposited:");
    int dep=Integer.parseInt(obj.readLine());
    System.out.println("Enter Amount to be withrawn:");
    int wit=Integer.parseInt(obj.readLine());
    Iobank object=new Iobank();
    object.display(name);
    object.deposit(dep);
    object.display(name);
    object.withraw(wit);
    object.display(name);
    }
    catch(Exception abc)
    {
    String name="Amartya";
    }
    finally
    {
     System.out.println("..............................................................");    
    }    
    
}}    
