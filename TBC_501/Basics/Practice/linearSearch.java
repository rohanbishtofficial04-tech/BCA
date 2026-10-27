import java.util.Scanner;

class linearSearch {
    public static void main(String[] args){
        int n,key;
        boolean found=false;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        n=sc.nextInt();
        System.out.println("Enter Elements: ");
        int[] arr=new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter Key: ");
        key=sc.nextInt();
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                found=true;
                break;
            }
        }
        if(found){
            System.out.println("Found");
        }
                else{
            System.out.println("Not Found");
        }
        sc.close();
    }
}