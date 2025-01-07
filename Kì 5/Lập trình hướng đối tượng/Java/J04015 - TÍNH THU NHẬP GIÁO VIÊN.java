import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J04015 {
    static Scanner scanner = new Scanner(System.in);
    public static int pc(String s){
        if (s.equals("HT")) return 2000000;
        if (s.equals("HP")) return 900000;
        return 500000;
    }
    public static void solve(Scanner scanner) {
        String ma = scanner.nextLine();
        String ten = scanner.nextLine();
        int lcb = scanner.nextInt();
        int hs = (ma.charAt(2)-'0')*10 + (ma.charAt(3)-'0');
        int luong = hs*lcb;
        int pc = pc(ma.substring(0, 2));
        System.out.printf("%s %s %d %d %d", ma, ten, hs, pc, luong + pc);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
//        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
