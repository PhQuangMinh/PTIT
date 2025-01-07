import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02021 {
    static Scanner scanner = new Scanner(System.in);
    static int[] a = new int[10];
    static int cnt = 0;
    static void Try(int id, int n, int k){
        for (int i=a[id-1] +1 ;i<=n-k+id;i++){
            a[id] = i;
            if (id==k){
                cnt++;
                for (int j=1;j<=k;j++){
                    System.out.printf("%d", a[j]);
                }
                System.out.print(" ");
            } else Try(id+1, n, k);
        }
    }
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt(), k = scanner.nextInt();
        Try(1, n, k);
        System.out.println("\nTong cong co " + cnt + " to hop");
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
