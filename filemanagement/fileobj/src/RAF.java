import java.io.*;
import java.util.*;
 class RAF
{
    public static void main(String args[])
    {
        File randomAccess=new File("RandomAccessFile.txt");
        try
        {
            randomAccess.createNewFile();
            RandomAccessFile RAF=new RandomAccessFile(randomAccess,"r");
//            RAF.writeBytes("Hey Hello How are you?");
//            RAF.writeChar('A');
//            RAF.writeInt(1500);
//            RAF.writeLong(4000000);
//            RAF.writeDouble(2500.345);
//            RAF.writeBoolean(true);
            RAF.seek(3);
            System.out.println(RAF.readLine());
            System.out.println(RAF.readChar());
            System.out.println(RAF.readInt());
            System.out.println(RAF.readLong());
            System.out.println(RAF.readDouble());
            System.out.println(RAF.readBoolean());
            RAF.close();
        }
        catch (IOException e)
        {
            System.out.println("File not created.");
        }
    }
}
