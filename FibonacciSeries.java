class FibonacciSeries
{
    public static void main(String args[])
    {
    int a=0,b=1,sum=0;
    while(sum<100)
    {
    sum=a+b;    
    System.out.println(sum);
    a=b;
    b=sum;
    sum=a+b;
   }
   }
}   
    