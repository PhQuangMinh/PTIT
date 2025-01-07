import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class TSJ57 implements Comparable<TSJ57> {
    String ma, ten, tt;
    double tb;
    TSJ57(String ma, String ten, double tb, String tt) {
        this.ma = ma;
        this.ten = ten;
        this.tb = tb;
        this.tt = tt;
    }

    public String getMa() {
        return ma;
    }

    public double getTb() {
        return tb;
    }

    @Override
    public int compareTo(TSJ57 o) {
        if (tb != o.tb) return Double.compare(o.tb, tb);
        return ma.compareTo(o.ma);
    }

    @Override
    public String toString() {
        return String.format("%s %s %.1f %s", ma, ten, tb, tt);
    }
}
public class J07057 {
    static Scanner scanner = new Scanner(System.in);

    static double getUTDT(String s){
        if (s.equals("Kinh")) return 0;
        return 1.5;
    }
    public static double getUT(int kv){
        if (kv == 1) return 1.5;
        if (kv == 2) return 1.0;
        return 0;
    }

    static String chuanTen(String ten){
        StringBuilder sb = new StringBuilder();
        String[] a = ten.trim().toLowerCase().split("\\s+");
        for (int i = 0; i < a.length; i++) {
            sb.append(Character.toUpperCase(a[i].charAt(0))).append(a[i].substring(1));
            if (i<a.length-1) sb.append(' ');
        }
        return sb.toString();
    }

    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<TSJ57> list = new ArrayList<>();
        for (int i=1;i<=n;i++) {
            String ma = String.format("TS%02d", i);
            String ten = scanner.nextLine();
            double diem = Double.parseDouble(scanner.nextLine());
            diem += getUTDT(scanner.nextLine()) + getUT(Integer.parseInt(scanner.nextLine()));
            if (diem>=20.5) list.add(new TSJ57(ma, chuanTen(ten), diem, "Do"));
            else list.add(new TSJ57(ma, chuanTen(ten), diem, "Truot"));
        }
        Collections.sort(list);
        for (TSJ57 TSJ57 : list) {
            System.out.println(TSJ57);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("THISINH.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
