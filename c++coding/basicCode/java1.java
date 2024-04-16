import java.util.*;
public class Input{
    public static void main(String[] args){
            Scanner sc = new Scanner (System.in);
            System.out.println("Enter the data : ");
            String name = sc.nextLine();
            int age = sc.nextInt();
            float marks = sc.nextFloat();
            System.out.println("Displaying Data");
            System.out.println(name);
            System.out.println(age);
            System.out.println(marks);
            sc.close();
    }
}

