import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class TSJ55 implements Comparable<TSJ55> {
    String ma, ten;
    double tb;
    TSJ55(String ma, String ten, double db) {
        this.ma = ma;
        this.ten = ten;
        this.tb = db;
    }

    public double getTb(){
        return tb;
    }

    @Override
    public int compareTo(TSJ55 o) {
        return Double.compare(o.getTb(), tb);
    }

    @Override
    public String toString() {
        return String.format("%s %s %.2f", ma, ten, tb);
    }
}
public class J07055 {
    static Scanner scanner = new Scanner(System.in);

    static String getLoai(double diem){
        if (diem>=8) return "GIOI";
        if (diem>=6.5) return "KHA";
        if (diem>=5) return "TRUNG BINH";
        return "KEM";
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
        ArrayList<TSJ55> list = new ArrayList<>();
        for (int i=1;i<=n;i++) {
            String ma = String.format("SV%02d", i);
            String ten = chuanTen(scanner.nextLine());
            double tb = Double.parseDouble(scanner.nextLine())*0.25
                    + Double.parseDouble(scanner.nextLine())*0.35
                    + Double.parseDouble(scanner.nextLine())*0.4;
            list.add(new TSJ55(ma, ten, tb));
        }
        Collections.sort(list);
        int hang = 1;
        for (int i = 0; i < list.size();i++) {
            System.out.print(list.get(i) + " ");
            System.out.println(getLoai(list.get(i).getTb()));
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("BANGDIEM.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}