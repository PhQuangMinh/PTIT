import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07021 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        while (scanner.hasNext()) {
            String s = scanner.nextLine();
            if (s.equals("END")){
                return;
            }
            String[] a = s.trim().toLowerCase().split("\\s+");
            for (String x:a){
                System.out.print(Character.toUpperCase(x.charAt(0)) + x.substring(1) + " ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DATA.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}