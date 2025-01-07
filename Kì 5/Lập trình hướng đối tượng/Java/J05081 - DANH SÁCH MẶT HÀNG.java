import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class MH implements Comparable<MH> {
    String ma, ten, dv;
    int mua, ban;
    MH(String ma, String ten, String dv, int mua, int ban) {
        this.ma = ma;
        this.ten = ten;
        this.dv = dv;
        this.mua = mua;
        this.ban = ban;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + dv + " " + mua + " " + ban + " " + (ban - mua);
    }

    @Override
    public int compareTo(MH o) {
        return Integer.compare(o.ban-o.mua, ban - mua);
    }
}
public class J05081 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<MH> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String ma = String.format("MH%03d", (i+1));
            list.add(new MH(ma, scanner.nextLine(), scanner.nextLine(), Integer.parseInt(scanner.nextLine()), Integer.parseInt(scanner.nextLine())));
        }
        Collections.sort(list);
        for (MH h : list) {
            System.out.println(h);
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
