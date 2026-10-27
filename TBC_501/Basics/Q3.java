import java.util.*;
class Q3 {
    static int fact(int n){
        int f=1; for(int i=1;i<=n;i++) f*=i;
        return f;
    }
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(); double sum=0;
        for(int i=1;i<=n;i++) sum+= (double)i/fact(i);
        System.out.println(sum);
    }
}
