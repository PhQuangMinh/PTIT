import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class Mon implements Comparable<Mon>{
    String ma, ten;
    int tin;
    Mon(String ma, String ten, int tin) {
        this.ma = ma;
        this.ten = ten;
        this.tin = tin;
    }

    @Override
    public int compareTo(Mon o) {
        return ten.compareTo(o.ten);
    }
}
public class J07034 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<Mon> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(new Mon(scanner.nextLine(), scanner.nextLine(), Integer.parseInt(scanner.nextLine())));
        }
        Collections.sort(list);
        for (Mon mon : list) {
            System.out.println(mon.ma + " " + mon.ten + " " + mon.tin);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("MONHOC.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
