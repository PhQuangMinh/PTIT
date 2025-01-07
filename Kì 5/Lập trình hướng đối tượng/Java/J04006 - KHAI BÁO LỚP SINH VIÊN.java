import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J04006 {
    static Scanner scanner = new Scanner(System.in);
    public static String format(String s) {
        StringBuilder sb = new StringBuilder(s);
        if (sb.charAt(1) == '/'){
            sb.insert(0, "0");
        }
        if (sb.charAt(4) == '/'){
            sb.insert(3, "0");
        }
        while (sb.length()<10){
            sb.insert(6, '0');
        }
        return sb.toString();
    }
    public static void solve(Scanner scanner) {
        System.out.printf("B20DCCN001 %s %s %s %.2f", scanner.nextLine(), scanner.nextLine(), format(scanner.nextLine()), scanner.nextDouble());
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}