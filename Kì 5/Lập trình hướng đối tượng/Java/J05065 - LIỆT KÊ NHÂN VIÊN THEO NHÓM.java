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
            list.add(new Cla(cv, hsl, ten, manv));
        }
        int m = Integer.parseInt(scanner.nextLine());
        ArrayList<Cla> gd = (ArrayList<Cla>) list.stream().filter(cla -> cla.cv.equals("GD"))
                .limit(1)
                .collect(Collectors.toList());
        list.removeAll(gd);
        ArrayList<Cla> tp = (ArrayList<Cla>) list.stream().filter(cla -> cla.cv.equals("TP"))
                .limit(3)
                .collect(Collectors.toList());
        list.removeAll(tp);
        ArrayList<Cla> pp = (ArrayList<Cla>) list.stream().filter(cla -> cla.cv.equals("PP"))
                .limit(3)
                .collect(Collectors.toList());
        list.removeAll(pp);
        for (int i=1;i<=m;i++) {
            String cv = scanner.nextLine();
            if (cv.equals("GD")) {
                Collections.sort(gd);
                for (Cla l : gd) {
                    System.out.println(l);
                }
            } else if (cv.equals("TP")) {
                Collections.sort(tp);
                for (Cla l : tp) {
                    System.out.println(l);
                }
            } else if (cv.equals("PP")) {
                Collections.sort(pp);
                for (Cla l : pp) {
                    System.out.println(l);
                }
            } else {
                Collections.sort(list);
                for (Cla l : list) {
                    System.out.print(l.ten + " NV " + l.ma + " " + l.hsl + "\n");
                }
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