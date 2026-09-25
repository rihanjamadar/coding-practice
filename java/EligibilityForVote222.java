import java.util.Scanner;

public class EligibilityForVote222{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("===== VOTING ELIGIBILITY CHECKER =====");

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        System.out.println("\n----- RESULT -----");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);

        if (age < 0) {
            System.out.println("Invalid age.");
        } else if (age >= 18) {
            System.out.println("You are eligible to vote.");
        } else {
            int yearsLeft = 18 - age;
            System.out.println("You are not eligible to vote.");
            System.out.println("You can vote after " + yearsLeft + " year(s).");
        }

        System.out.println("------------------");
        System.out.println("Thank you for using the program.");

        scanner.close();
    }
}
