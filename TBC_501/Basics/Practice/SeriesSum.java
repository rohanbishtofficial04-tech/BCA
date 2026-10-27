import java.util.Scanner;

public class SeriesSum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of terms: ");
        int n = sc.nextInt();

        int totalSum = 0;

        for(int i=1;i<=n;i++){
            int termSum = 0;
            for(int j=1;j<=i;j++){
                termSum=termSum+j;
            }
            totalSum=totalSum+termSum;
        }

        System.out.println("Sum of the series: " + totalSum);

        sc.close();
    }
}
