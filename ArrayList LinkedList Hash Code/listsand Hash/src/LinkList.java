import java.util.LinkedList;
class LinkList {
    public static void main(String args[])
    {
        int i=0;
        LinkedList<Integer> INT=new LinkedList<>();
        INT.add(10);
        INT.add(-20);
        INT.add(30);
        INT.add(890);
        INT.add(12);
        INT.add(101);
        INT.add(122);
        INT.add(40);
        INT.add(50);
        INT.add(210);
        INT.add(130);
        INT.add(100);
        INT.add(90);
        INT.add(-214);
        System.out.println("Size Of the LinkedList:"+INT.size());
        System.out.println("Random Integers.");
        for(int I:INT)
        {
            System.out.print(INT.get(i)+"  ");
            i++;
        }
    }
}
