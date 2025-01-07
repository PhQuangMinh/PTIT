import java.io.File;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class J02026 {
    static Scanner scanner = new Scanner(System.in);
    static int[] a = new int[15];
    static void Try(int id, int n, int k, int[] b){
        for (int i=a[id-1] +1 ;i<=n-k+id;i++){
            a[id] = i;
            if (id==k){
                for (int j=1;j<=k;j++){
                    System.out.print(b[a[j]-1] + " ");
                }
                System.out.println();
            } else Try(id+1, n, k, b);
        }
    }
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt(), k = scanner.nextInt();
        int[] b = new int[n];
        for (int i=0;i<n;i++) b[i] = scanner.nextInt();
        Arrays.sort(b);
        Try(1, n, k, b);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}