import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07002 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        long sum = 0;
        while (scanner.hasNext()) {
            String li = scanner.nextLine();
            String[] line = li.split("\\s+");
            for (String s : line) {
                try {
                    sum += Integer.parseInt(s);
                } catch (Exception _) {

                }
            }
        }
        System.out.println(sum);
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DATA.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
