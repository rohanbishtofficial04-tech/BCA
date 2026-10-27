import java.util.Scanner;

public class ScanningFromKeyboard {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in); // Create Scanner object

        System.out.print("Enter first number: ");
        int num1 = s.nextInt(); // Read first integer

        System.out.print("Enter second number: ");
        int num2 = s.nextInt(); // Read second integer

        int sum = num1 + num2; // Calculate sum

        System.out.println("Sum of the two numbers is: " + sum); // Display result

        s.close(); // Close the scanner
    }
}