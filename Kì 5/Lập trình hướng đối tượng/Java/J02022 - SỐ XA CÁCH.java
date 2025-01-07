import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02022 {
    static Scanner scanner = new Scanner(System.in);
    static int[] a = new int[11];

    static void Try(int id, int n, int[] vs){
        if (id>n){
            boolean ok = true;
            for (int j=2;j<=n;j++){
                if (Math.abs(a[j]-a[j-1])==1){
                    ok = false;
                    break;
                }
            }
            if (ok) {
                for (int j = 1; j <= n; j++) {
                    System.out.printf("%d", a[j]);
                }
                System.out.println();
            }
            return;
        }
        for (int i=1;i<=n;i++){
            if (vs[i]==0){
                vs[i] = 1;
                a[id] = i;
                Try(id+1, n, vs);
                vs[i] = 0;
            }
        }
    }

    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int[] vs = new int[n+1];
        Try(1, n, vs);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            solve(scanner);
            System.out.println();
        }
    }

}
