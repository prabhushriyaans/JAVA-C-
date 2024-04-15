package employeepay;

public class Empy
{
    public
    String name,empId,gender;
    double basicPay;
    double da,hra,ta,grossPay,deductions,netPay;
    public   Empy(String n,String ep,String gn,double BsPay)
    {
        name=n;
        empId=ep;
        gender=gn;
        basicPay=BsPay;
    }
    public void compute() {
        // Assuming DA is 10% of basic pay
        da = 0.10 * basicPay;
        hra = 0.20 * basicPay;
        ta = 0.05 * basicPay;
        grossPay = basicPay + da + hra + ta;
        deductions = 0.10 * grossPay;
        netPay = grossPay - deductions;
    }

    // Method to compute HRA


    // Method to display details
    public void displayDetails() {
        System.out.println("|-------------------------|");
        System.out.println("Name: " + name);
        System.out.println("|-------------------------|");
        System.out.println("Employee ID: " + empId);
        System.out.println("|-------------------------|");
        System.out.println("Gender: " + gender);
        System.out.println("|-------------------------|");
        System.out.println("Basic Pay: " + basicPay);
        System.out.println("|-------------------------|");
        System.out.println("DA: " + da);
        System.out.println("|-------------------------|");
        System.out.println("HRA: " + hra);
        System.out.println("|-------------------------|");
        System.out.println("TA: " + ta);
        System.out.println("|-------------------------|");
        System.out.println("Gross Pay: " + grossPay);
        System.out.println("|-------------------------|");
        System.out.println("Deductions: " + deductions);
        System.out.println("|-------------------------|");
        System.out.println("Net Pay: " + netPay);
        System.out.println("|-------------------------|");
    }
}
