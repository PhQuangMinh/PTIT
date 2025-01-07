import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02019 {
    static Scanner scanner = new Scanner(System.in);
    static int[] a = new int[1000001];
    public static void solve(Scanner scanner) {
        for (int i=1;i<=1000000;i++) {
            for (int j=i;j<=1000000;j+=i) {
                a[j] += i;
            }
        }
        int n= scanner.nextInt(), m = scanner.nextInt();
        int ans = 0;
        for (int i = n;i<=m;i++) {
            if (a[i]>2*i){
                ans += 1;
            }
        }
        System.out.println(ans);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
