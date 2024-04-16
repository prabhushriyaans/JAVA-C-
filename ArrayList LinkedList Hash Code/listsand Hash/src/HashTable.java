import java.util.Hashtable;
class HashTable {
    public static void main(String args[])
    {
        Hashtable<String ,Integer> Student=new Hashtable<>();
        Student.put("Devershee",89);
        Student.put("Saiesh",89);
        Student.put("Areen",96);
        Student.put("Aditya",88);
        Student.put("Vignesh",98);
        Student.put("Medhaj",88);
        System.out.println("Number of Students:"+Student.size());
        System.out.println("Students and their 10th Board percentage.");
        System.out.println(Student);
        Student.put("Shriyaans",86);
        System.out.println("Modified student's HashTable");
        System.out.println(Student);
    }
}
