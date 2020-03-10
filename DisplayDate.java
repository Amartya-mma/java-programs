class DisplayDate
{
    public static String name(int m)
    {
    if(m==1)
    return("January");
    else if(m==2)
    return("february");
    else if(m==3)
    return("march");
    else if(m==4)
    return("april");
    else if(m==5)
    return("may");
    else if(m==6)
    return("June");
    else if(m==7)
    return("July");
    else if(m==8)
    return("august");
    else if(m==9)
    return("september");
    else if(m==10)
    return("october");
    else if(m==11)
    return("november");
    else if(m==12)
    return("december");
    else
    return("invalid month");
    }
    public static void main(int date,int month,int year)    
    {
    String m1=name(month);    
    if((date==1)||(date==21)||(date==31))
    System.out.println(date+"st "+m1+" "+year);
    else if((date==2)||(date==22))
    System.out.print(date+"nd "+m1+" "+year);
    else if((date==3)||(date==23))
    System.out.print(date+"rd "+m1+" "+year);
    else
    System.out.println(date+"th "+m1+" "+year);
    }
}    