class DisplayDate2
{
    public static void main(int val)
    {
    if((val<32)&&(val>0))
    System.out.println("Date:"+val+" january");
    else if((val>31)&&(val<61))
    System.out.println("Date:"+(val-31)+" february");
    else if((val>60)&&(val<92))
    System.out.println("Date:"+(val-60)+" march");
    else if((val>91)&&(val<122))
    System.out.println("Date:"+(val-91)+" april");
    else if((val>121)&&(val<152))
    System.out.println("Date:"+(val-121)+" may");
    else if((val>151)&&(val<183))
    System.out.println("Date:"+(val-152)+" june");
    else if((val>182)&&(val<213))
    System.out.println("Date:"+(val-182)+" july");
    else if((val>212)&&(val<244))
    System.out.println("Date:"+(val-213)+" august");
    else if((val>243)&&(val<275))
    System.out.println("Date:"+(val-244)+" september");
    else if((val>274)&&(val<305))
    System.out.println("Date:"+(val-274)+" october");
    else if((val>304)&&(val<336))
    System.out.println("Date:"+(val-305)+" november");
    else if((val>335)&&(val<367))
    System.out.println("Date:"+(val-335)+" december");
    }
} 
    