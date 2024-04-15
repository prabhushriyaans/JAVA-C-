 import java.time.*;
class TIME
{
    public static void main(String args[])
    {

        LocalDateTime T= LocalDateTime.now();
//        LocalDateTime TI=T;
        String TI = String.valueOf(T);
        System.out.println(" "+TI);
    }
}