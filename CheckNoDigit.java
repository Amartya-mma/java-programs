class CheckNoDigit
{
    public static void main(int val)
    {
    if(val<10)
    System.out.println(val+" is a one digit no.");
    else if(val<100)
    System.out.println(val+" is a two digit no.");
    else if(val<1000)
    System.out.println(val+" is a three digit no.");
    else if(val<10000)
    System.out.println(val+" is a four digit no.");
    else
    {
    int c;
    for(c=1;val>9;c++)
    {
    val=val/10;
    }
    System.out.println("that was a "+c+" digit no");
    }
}
}