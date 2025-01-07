import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class TS implements Comparable<TS> {
    String ma, ten;
    double dut, dxt;
    TS(String ma, String ten, double dut, double dxt) {
        this.ma = ma;
        this.ten = ten;
        this.dut = dut;
        this.dxt = dxt;
    }

    public double getDxt(){
        return dxt;
    }

    @Override
    public int compareTo(TS o) {
        if (dxt != o.dxt) return Double.compare(o.dxt, dxt);
        return ma.compareTo(o.ma);
    }

    @Override
    public String toString() {
        if (dut!=(int)dut){
            if (dxt!=(int)dxt) return String.format("%s %s %.1f %.1f", ma, ten, dut, dxt);
            else return String.format("%s %s %.1f %d", ma, ten, dut, (int)dxt);
        }
        if (dxt!=(int)dxt) return String.format("%s %s %d %.1f", ma, ten, (int)dut, dxt);
        return String.format("%s %s %d %d", ma, ten, (int)dut, (int)dxt);
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static double getUT(String s){
        if (s.equals("KV1")) return 0.5;
        if (s.equals("KV2")) return 1.0;
        return 2.5;
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
        ArrayList<TS> list = new ArrayList<>();
        for (int i=1;i<=n;i++) {
            String ma = scanner.nextLine();
            String ten = scanner.nextLine();
            double ut = getUT(ma.substring(0, 3));
            double tong = ut + Double.parseDouble(scanner.nextLine())*2
                    + Double.parseDouble(scanner.nextLine()) + Double.parseDouble(scanner.nextLine());
            list.add(new TS(ma, chuanTen(ten), ut, tong));
        }
        int ct = Integer.parseInt(scanner.nextLine());
        Collections.sort(list);
        System.out.printf("%.1f\n", list.get(ct-1).getDxt());
        for (TS ts : list) {
            System.out.print(ts);
            if (ts.getDxt()>=list.get(ct-1).getDxt()){
                System.out.println(" TRUNG TUYEN");
            } else System.out.println(" TRUOT");
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}