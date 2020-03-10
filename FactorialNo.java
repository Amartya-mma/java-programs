class FactorialNo
{
    public static void main(int n)
    {
    int fact=1;    
    while(n>0) 
    {
    fact=n*fact;
    n--;
    }
    System.out.println(fact);
    }
}