import java.util.Scanner;
public class ReverseString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String original = new String();
        original = sc.nextLine();
        sc.close();
        int slen = original.length();
        String reversed = reverseString(original, slen);
        System.out.println("Original String: " + original);
        System.out.println("Reversed String: " + reversed);
    }

    public static String reverseString(String str, int length) {
        String reversed = new String();
        for (int i = length; i >= 1; i--) {
            reversed = reversed + str.charAt(i - 1);
        }
        return reversed.toString();
    }
}
