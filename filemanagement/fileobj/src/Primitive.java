import java.io.*;
 class Primitive
{
     public static void main(String args[])
     {
         File txtChar =new File("TxtChar.txt");
         try
         {
             txtChar.createNewFile();
             FileOutputStream Out= new FileOutputStream("TxtChar.txt");
             DataOutputStream Writer=new DataOutputStream(Out);
             Writer.writeInt(1200);
             Writer.writeChar('O');
             Writer.writeDouble(1101100);
             Writer.writeLong(250000);
             Writer.writeBytes("Shriyaans Prabhu");
             Out.close();
             Writer.close();
             FileInputStream In=new FileInputStream("TxtChar.txt");
             DataInputStream Reader=new DataInputStream(In);
//             InputStreamReader ins=new InputStreamReader(new FileInputStream("TxtChar.txt"));
//             BufferedReader Read=new BufferedReader(ins);
//             int l;
//             String s;
////             while((l=Reader.read())!=-1)
////             {
////                 System.out.print("\n"+l);
////             }
////             In.close();
////             Reader.close();
//             while ((s=Read.readLine())!=null)
//             {
//                 System.out.println(" "+s);
//             }
//             ins.close();
//             Read.close();
             System.out.println(Reader.readInt());
             System.out.println(Reader.readChar());
             System.out.println(Reader.readDouble());
             System.out.println(Reader.readLong());
             System.out.println(Reader.readLine());
             In.close();
             Reader.close();
         }
         catch (IOException e)
         {
             System.out.println("File not Created.");
         }
     }
}
