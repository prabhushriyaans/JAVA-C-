import java.io.*;
import java.util.*;
class IOStream
{
    public static void main(String args[])
    {
        String infile="storeFile.txt";
        String Outfile="store2.txt";
        try
        {

            String l;

            InputStreamReader in=new InputStreamReader(new FileInputStream(infile));
            OutputStreamWriter Out=new OutputStreamWriter(new FileOutputStream(Outfile));
            BufferedReader red=new BufferedReader(in);

            while((l=red.readLine())!=null)
            {

                System.out.println(l);
                Out.write(l);
            }
            Out.close();
            in.close();

        }
        catch (IOException e)
        {
            System.out.println("File never used");
        }
    }
}

