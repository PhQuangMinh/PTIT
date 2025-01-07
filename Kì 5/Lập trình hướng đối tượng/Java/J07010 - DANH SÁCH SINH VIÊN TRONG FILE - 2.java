import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07010 {
    static Scanner scanner = new Scanner(System.in);
    static String format(String s) {
        StringBuilder sb = new StringBuilder(s);
        if (sb.charAt(1) == '/'){
            sb.insert(0, "0");
        }
        if (sb.charAt(4) == '/'){
            sb.insert(3, "0");
        }
        return sb.toString();
    }

    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=n;i++){
            String ma = String.format("B20DCCN%03d", i);
            System.out.print(ma + " " + scanner.nextLine() + " " + scanner.nextLine() + " " + format(scanner.nextLine()) + " ");
            System.out.printf("%.2f\n", Float.parseFloat(scanner.nextLine()));
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("SV.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}