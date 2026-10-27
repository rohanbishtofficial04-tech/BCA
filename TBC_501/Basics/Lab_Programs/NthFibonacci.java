import java.util.Scanner;

public class NthFibonacci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n = sc.nextInt();

        if (n <= 0) {
            System.out.println("Please enter a positive integer.");
        } else {
            int a = 0, b = 1, fib = 0;
            if (n == 1) {
                fib = a;
            } else if (n == 2) {
                fib = b;
            } 
            else {
                for (int i = 3; i <= n; i++) {
                    fib = a + b;
                    a = b;
                    b = fib;
                }
            }
            System.out.println("The " + n + "th Fibonacci number is: " + fib);
        }
        sc.close();
    }
}
