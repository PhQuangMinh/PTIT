import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class MHJ50 implements Comparable<MHJ50>{
    String ma, ten, nhom;
    double mua, ban;
    MHJ50(String ma, String ten, String nhom, double mua, double ban) {
        this.ma = ma;
        this.ten = ten;
        this.nhom = nhom;
        this.mua = mua;
        this.ban = ban;
    }

    public double getMua() {
        return mua;
    }

    public double getBan() {
        return ban;
    }

    @Override
    public int compareTo(MHJ50 o) {
        return Double.compare(o.getBan() - o.getMua(), ban - mua);
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %.2f", ma, ten, nhom, ban - mua);
    }
}
public class J07050 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        ArrayList<MHJ50> list = new ArrayList<>();
        int n = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=n;i++) {
            String ma = String.format("MH%02d", i);
            String ten = scanner.nextLine();
            String nhom = scanner.nextLine();
            double mua = Double.parseDouble(scanner.nextLine());
            double ban = Double.parseDouble(scanner.nextLine());
            list.add(new MHJ50(ma, ten, nhom, mua, ban));
        }
        Collections.sort(list);
        for (MHJ50 mhj50 : list) {
            System.out.println(mhj50);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("MATHANG.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
