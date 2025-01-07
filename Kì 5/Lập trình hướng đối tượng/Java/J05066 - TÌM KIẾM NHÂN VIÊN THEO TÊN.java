import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

class Cla implements Comparable<Cla> {
    String cv, hsl, ten, ma;
    Cla(String cv, String hsl, String ten, String ma){
        this.cv = cv;
        this.hsl = hsl;
        this.ten = ten;
        this.ma = ma;
    }

    @Override
    public int compareTo(Cla o) {
        if (!hsl.equals(o.hsl)) return o.hsl.compareTo(hsl);
        return ma.compareTo(o.ma);
    }

    @Override
    public String toString() {
        return ten + " " + cv + " " + ma + " " + hsl;
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<Cla> list = new ArrayList<>();
        for (int i=1;i<=n;i++) {
            String ma = scanner.next();
            String ten = scanner.nextLine().trim();
            String cv = ma.substring(0, 2);
            String hsl = ma.substring(2, 4);
            String manv = ma.substring(4, 7);
            StringBuilder sb = new StringBuilder();
            int tmp = Integer.parseInt(manv);
            if (cv.equals("GD")){
                if (tmp==1) sb.append("GD");
                else sb.append("NV");
            } else if (cv.equals("TP")){
                if (tmp<=3) sb.append("TP");
                else sb.append("NV");
            } else if (cv.equals("PP")){
                if (tmp<=3) sb.append("PP");
                else sb.append("NV");
            } else {
                sb.append("NV");
            }
            list.add(new Cla(sb.toString(), hsl, ten, manv));
        }
        int m = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=m;i++) {
            String cv = scanner.nextLine();
            List<Cla> l = list.stream().filter(cl -> cl.ten.toLowerCase().contains(cv.toLowerCase())).collect(Collectors.toList());
            Collections.sort(l);
            for (Cla cl:l) {
                System.out.println(cl);
            }
            System.out.println();
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