import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J02023 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = scanner.nextInt(), s = scanner.nextInt();
        int[] a = new int[n];
        int[] b = new int[n];
        if (n*9<s || s == 0 && n>1){
            System.out.println("-1 -1");
            return;
        }
        int snn = s-1;
        for (int i=n-1;i>=0;i--){
            for (int j=9;j>=1;j--){
                if (snn>=j){
                    a[i] = j;
                    snn -= j;
                    break;
                }
            }
            if (a[i]==0){
                break;
            }
        }
        a[0] = a[0]+1;
        for (int i=0;i<n;i++){
            for (int j=9;j>=1;j--){
                if (s>=j){
                    b[i] = j;
                    s -= j;
                    break;
                }
            }
        }
        for (int i=0;i<n;i++){
            System.out.printf("%d", a[i]);
        }
        System.out.print(" ");
        for (int j=0;j<n;j++){
            System.out.printf("%d", b[j]);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}