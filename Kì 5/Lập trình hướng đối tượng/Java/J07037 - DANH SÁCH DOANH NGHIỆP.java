import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class DN implements Comparable<DN>{
    String ma, ten;
    int tin;
    DN(String ma, String ten, int tin) {
        this.ma = ma;
        this.ten = ten;
        this.tin = tin;
    }

    @Override
    public int compareTo(DN o) {
        return ma.compareTo(o.ma);
    }
}
public class J07037 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<DN> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(new DN(scanner.nextLine(), scanner.nextLine(), Integer.parseInt(scanner.nextLine())));
        }
        Collections.sort(list);
        for (DN DN : list) {
            System.out.println(DN.ma + " " + DN.ten + " " + DN.tin);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DN.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}