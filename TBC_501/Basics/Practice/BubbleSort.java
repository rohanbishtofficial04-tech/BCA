import java.util.Scanner;

class BubbleSort {
    public static void main(String[] args){
        int n,temp;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        n=sc.nextInt();
        System.out.println("Enter Elements: ");
        int[] arr=new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }

        System.out.println("Array After Sort: ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        sc.close();
    }
}