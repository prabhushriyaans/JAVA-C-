import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.File;
class StreamReader {
    public static void main(String args[]) throws IOException
    {
        int b;
        File ByteData=new File("BD.txt");
        try
        {
            ByteData.createNewFile();
            FileInputStream In=new FileInputStream("storeFile.txt");
            FileOutputStream out=new FileOutputStream("BD.txt");
            while((b=In.read())!=-1)
            {
                out.write(b);
            }
            In.close();
            out.close();
        }
        catch (FileNotFoundException e)
        {
            System.out.println("File not found.");
        }
        catch (IOException e)
        {
            System.out.println("File not created.");
        }
    }
}