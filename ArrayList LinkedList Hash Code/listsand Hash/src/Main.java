 import  java.util.ArrayList;
class ArList
{
    public static void main(String args[])
    {
        int i=0;
        ArrayList<String> Pro_Languages=new ArrayList<>();
        Pro_Languages.add("JAVA");
        Pro_Languages.add("C++");
        Pro_Languages.add("C");
        Pro_Languages.add("JAVASCRIPT");
        Pro_Languages.add("PYTHON");
        Pro_Languages.add("HTML");
        Pro_Languages.add("CSS");
        Pro_Languages.add("C#");
        System.out.println("Return Size of the ArrayList:"+Pro_Languages.size());
        System.out.println("Different Programming Languages.");
        for(String Pl:Pro_Languages)
        {
            System.out.print(Pro_Languages.get(i)+"  ");
            i++;
        }
    }
}