class ParkingFee
{
    public static void main(int hrs)
    {
    if(hrs<4)
    System.out.println("parking fee is rs 5.00");
    else if((hrs>3)&&(hrs<24))
    System.out.println("parking fee is"+(5+(hrs-3)*1.50));
    else if(hrs==24)
    System.out.println("parking fee is rs 50.00");
    else
    System.out.println("Cannot b parked for more than 24 hrs");
    }
}