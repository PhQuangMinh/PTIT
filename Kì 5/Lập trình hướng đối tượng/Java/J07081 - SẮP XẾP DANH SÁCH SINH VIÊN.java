import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class SVJ81 implements Comparable<SVJ81> {
    String ma, ten, sdt, dc;
    SVJ81(String ma, String ten, String sdt, String dc) {
        this.ma = ma;
        this.ten = ten;
        this.sdt = sdt;
        this.dc = dc;
    }

    @Override
    public int compareTo(SVJ81 o) {
        String ten1 = ten.substring(ten.lastIndexOf(" ")+1);
        String ten2 = o.ten.substring(o.ten.lastIndexOf(" ")+1);
        String ho1 = ten.substring(0, ten.indexOf(" "));
        String ho2 = o.ten.substring(0, o.ten.indexOf(" "));
        String dem1 = ten.substring(ten.indexOf(" ")+1, ten.lastIndexOf(" "));
        String dem2 = o.ten.substring(o.ten.indexOf(" ")+1, o.ten.lastIndexOf(" "));
        if (!ten1.equals(ten2)) return ten1.compareTo(ten2);
        if (!ho1.equals(ho2)) return ho1.compareTo(ho2);
        if (!dem1.equals(dem2)) return dem1.compareTo(dem2);
        return ma.compareTo(o.ma);
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %s", ma, ten, sdt, dc);
    }
}
public class J07081 {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<SVJ81> list = new ArrayList<>();
        for (int i=1;i<=n;i++) {
            String ma = scanner.nextLine();
            String ten = scanner.nextLine();
            String sdt = scanner.nextLine();
            String dc = scanner.nextLine();
            list.add(new SVJ81(ma, ten, sdt, dc));
        }
        Collections.sort(list);
        for (SVJ81 sv:list){
            System.out.println(sv);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("SINHVIEN.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}