class Salaries
{
    public static void main(int exp_level,int age)
    {
    int salary=(exp_level>5)?((age>35)?50000:((age>28)?45000:35000)):20000;
    System.out.println("experience level= "+exp_level+" age= "+age);
    System.out.println("salary= "+salary);
    }
}

