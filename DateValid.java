class DateValid
{
    public static void main(int date,int month,int year)
    {
    if((month>12)||(date<1))
    System.out.println("invalid date  "+date+"."+month+"."+year);
    else if(month<13) 
    {
    if(((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))&&(date<32))
    System.out.println("valid date  "+date+"."+month+"."+year);
    else if(((month==4)||(month==6)||(month==9)||(month==11))&&(date<31))
    System.out.println("valid date  "+date+"."+month+"."+year);
    else
    System.out.println("invalid date  "+date+"."+month+"."+year);
    }
    else if(month==2)
    {
    if((year%4==0)&&(date<30))
    System.out.println("valid date  "+date+"."+month+"."+year);
    else if((year%4!=0)&&(date<29))
    System.out.println("valid date  "+date+"."+month+"."+year);
    else
    System.out.println("invalid date  "+date+"."+month+"."+year);
    }
    else
    System.out.println("invalid date  "+date+"."+month+"."+year);
    }
}
    