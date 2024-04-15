package studentdetails;
public class StudentPersonalInfo
{
    String name ,gender,ID,PhoneNumber,Branch,Year;
    int Age;
  public   StudentPersonalInfo(String n,String gn,String id,String pno,String bc,String year,int age)
    {
        name=n;
        gender=gn;
        ID=id;
        PhoneNumber=pno;
        Branch=bc;
        Year=year;
        Age=age;
    }
    public void PDisplay()
    {
        System.out.println("Student name:"+name);
        System.out.println("gender:"+gender);
        System.out.println("Student ID:"+ID);
        System.out.println("Phone Number:"+PhoneNumber);
        System.out.println("Branch:"+Branch);
        System.out.println("academic Year:"+Year);
        System.out.println("Age:"+Age);
    }

}
