import java.util.Scanner;
import java.io.*;
class Employee {
    String empId;
    String name;
    double basicPay;

    void getData() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Employee ID: ");
        empId = scanner.nextLine();
//        scanner.nextLine(); // Consume newline
        System.out.print("Enter Employee Name: ");
        name = scanner.nextLine();
        System.out.print("Enter Basic Pay: ");
        basicPay = scanner.nextDouble();
    }
}

class PaySlipCalculator extends Employee {
    File pay=new File("payslip.txt");
    double calculateDA() {
        return 0.34 * basicPay;
    }

    double calculateHRA() {
        double da = calculateDA();
        return 0.18 * (da + basicPay);
    }

    double calculateTA() {
        return 3600 + 0.34 * 3600;
    }

    double calculateGross() {
        double da = calculateDA();
        double hra = calculateHRA();
        double ta = calculateTA();
        return basicPay + da + hra + ta;
    }

    double calculateDeductions() {
        double gross = calculateGross();
        double gpf = 0.10 * gross;
        double tax = 0.20 * gross;
        return gpf + tax;
    }

    double calculateNet() {
        double gross = calculateGross();
        double deductions = calculateDeductions();
        return gross - deductions;
    }

    void generatePaySlip() {
        try
        {
            FileWriter slip=new FileWriter("payslip.txt");
            slip.write("\n|----------- Employee Pay Slip ---------------|");
            System.out.println("\n|----------- Employee Pay Slip ------------|");
            slip.write(" \n Employee ID: " + empId);
            System.out.println("  Employee ID: " + empId );
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write("\n  Employee Name: " + name );
            System.out.println("  Employee Name: " + name );
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write( "\n  Basic Pay: Rs " + basicPay);
            System.out.println("  Basic Pay: Rs " + basicPay);
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write("\n  DA: Rs " + calculateDA());
            System.out.println("  DA: Rs " + calculateDA());
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write("\n  HRA: Rs " + calculateHRA());
            System.out.println("  HRA: Rs " + calculateHRA());
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write("\n  TA: Rs " + calculateTA() );
            System.out.println("  TA: Rs " + calculateTA() );
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write("\n  Gross Pay: Rs " + calculateGross() );
            System.out.println("  Gross Pay: Rs " + calculateGross() );
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write("\n  Deductions (GPF + Tax): Rs " + calculateDeductions());
            System.out.println("  Deductions (GPF + Tax): Rs " + calculateDeductions());
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.write("\n  Net Pay: Rs " + calculateNet());
            System.out.println("  Net Pay: Rs " + calculateNet());
            slip.write("\n|----------------------------------------------|");
            System.out.println("|--------------------------------------------|");
            slip.close();
        }
        catch (IOException e)
        {
            System.out.println("File cannot be created.");
        }
    }

    public static void main(String[] args) {
        PaySlipCalculator paySlip = new PaySlipCalculator();
        paySlip.getData();
        paySlip.generatePaySlip();
    }
}

