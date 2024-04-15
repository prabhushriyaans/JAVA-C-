import java.io.*;
import java.util.*;
import java.lang.*;
class F
{
    public static void main(String args[])
    {
        Scanner scanner=new Scanner(System.in);


        File myfile =new File("javaFile.txt");
        File myfile2=new File("storeFile.txt");
        try
        {

            myfile.createNewFile();
            myfile2.createNewFile();
            Scanner sc=new Scanner(myfile);
            FileWriter file=new FileWriter("storeFile.txt");
            System.out.println("Content of file javaFile copied to storeFile");
            while (sc.hasNextLine())
            {
                String line=sc.nextLine();
                file.write("\n"+line);
                System.out.println(line);
            }
            file.close();
            System.out.println();
            System.out.println("Content copied into  storeFile.");
            Scanner sc1=new Scanner(myfile2);
            while (sc1.hasNextLine())
            {
                String Line=sc1.nextLine();
                System.out.println(Line);
            }

        }
        catch (IOException e)
        {
            System.out.println("file not created.");
        }
    }
}
