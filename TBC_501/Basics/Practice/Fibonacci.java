import java.util.Scanner;
public class Fibonacci{
    public static void main(String[] args){
        int a=0,b=1,c=0,n;
        Scanner sc =new Scanner(System.in);
        System.out.println("Enter Number: ");
        n=sc.nextInt();
        if(n==1){
            System.out.println(n+"th "+"position value: "+a);
        }
        else if(n==2){
            System.out.println(n+"th "+"position value: "+b);
        }
        else{
        for(int i=2;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        System.out.println(n+"th "+"position value: "+c);
        sc.close();
    }
    }
}