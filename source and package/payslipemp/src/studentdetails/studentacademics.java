package studentdetails;
import java.util.Scanner;
  public class studentacademics
{
    float percent;
    float Atd[]=new float[10];
    int n;
    public void AcademicInfoI_O()
    {
        Scanner scanner=new Scanner(System.in);
        System.out.println("Enter the Percent achieved in the current semester.");
        percent =scanner.nextFloat();
        System.out.println("Enter your Current sem.");
        n=scanner.nextInt();
        System.out.println("Enter the attendance of the student for each semester.");
        for(int i=1;i<=n;i++)
        {
            Atd[i]=scanner.nextFloat();
        }
        System.out.println("The percentage of the student in the current sem:"+percent);
        for(int i=1;i<=n;i++)
        {
             System.out.println("Attendance in Sem "+i+" is "+Atd[i]);
        }
    }

}
