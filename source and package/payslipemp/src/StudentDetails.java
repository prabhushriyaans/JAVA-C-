import studentdetails.StudentPersonalInfo;
import studentdetails.studentacademics;
import java.util.Scanner;
public class StudentDetails
{
      public static void main(String args[])
      {
          Scanner scanner=new Scanner(System.in);
          System.out.println("Enter the student name.");
          String name=scanner.nextLine();
          System.out.println("Enter the student gender.");
          String gender=scanner.nextLine();
          System.out.println("Enter the student ID.");
          String ID=scanner.nextLine();
          System.out.println("Enter the student Phone Number.");
          String PhoneNumber=scanner.nextLine();
          System.out.println("Enter the student Branch.");
          String Branch=scanner.nextLine();
          System.out.println("Enter the student's academic Year.");
          String Year=scanner.nextLine();
          System.out.println("Enter the student Age.");
          int Age=scanner.nextInt();
          StudentPersonalInfo SPI=new StudentPersonalInfo(name,gender,ID,PhoneNumber,Branch,Year,Age);
          studentacademics SAC=new studentacademics();
          SPI.PDisplay();
          SAC.AcademicInfoI_O();
      }
}
