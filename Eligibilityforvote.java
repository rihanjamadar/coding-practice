import java.util.Scanner;
public class Eligibilityforvote{
    public static void main(String []args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your Name");
        String name = scanner.nextLine();
        System.out.println("Enter your Age");
        int age= scanner.nextInt();
        System.out.println("Hello "+name+"Your Age is: "+age+"years old");
        if(age >=18)
        {
            System.out.println("You are eligible for voting");
        }
        else
        {
            System.out.println("Sorry You are not Eligible");
        }
    }
}