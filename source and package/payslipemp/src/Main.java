import employeepay.Empy;
import java.util.Scanner;
 class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter the following details.");
        System.out.println("Employee name.");
        String name=scanner.nextLine();
        System.out.println("Employee ID.");
        String ID=scanner.nextLine();
        System.out.println("Employee Gender.");
        String gender=scanner.nextLine();
        System.out.println("Employee Basic pay.");
        double BasicPay=scanner.nextDouble();
         Empy e1=new Empy(name,ID,gender,BasicPay);
         e1.compute();
         e1.displayDetails();
    }
}