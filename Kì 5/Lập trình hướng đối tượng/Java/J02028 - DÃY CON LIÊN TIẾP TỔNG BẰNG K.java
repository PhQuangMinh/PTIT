import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws FileNotFoundException {
        int n = scanner.nextInt();
        long k = scanner.nextLong();
        long[] a = new long[n];
        for (int i=0;i<n;i++){
            a[i] = scanner.nextLong();
        }
        long sum = 0;
        int j = 0;
        for (int i=0;i<n;i++){
            sum += a[i];
            if (sum>k){
                while (sum>k && j<i){
                    sum -= a[j];
                    j++;
                }
            }
            if (sum==k){
                System.out.println("YES");
                return;
            }
        }
        System.out.println("NO");
    }
    public static void main(String[] args) throws FileNotFoundException{
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}