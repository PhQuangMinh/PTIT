import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class J03013 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        BigInteger a = scanner.nextBigInteger();
        BigInteger b = scanner.nextBigInteger();
        if (a.compareTo(b)<0){
            BigInteger tmp = a;
            a = b;
            b = tmp;
        }
        BigInteger ans = a.subtract(b);
        if (ans.toString().length()<a.toString().length()){
            System.out.print(0);
        }
        System.out.println(ans);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}