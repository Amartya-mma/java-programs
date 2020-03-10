class KindTriangle
{
    public static void main(int a,int b,int c)
    {
    if ((a==b)&&(b==c))
    System.out.println("when sides are "+a+","+b+","+c+" it is an equilateral triangle");
    else if((a==b)||(b==c)||(c==a))
    System.out.println("when sides are "+a+","+b+","+c+" it is an isoscles triangle");
    else 
    System.out.println("when sides are "+a+","+b+","+c+" it is an scalene triangle");
    }
}    