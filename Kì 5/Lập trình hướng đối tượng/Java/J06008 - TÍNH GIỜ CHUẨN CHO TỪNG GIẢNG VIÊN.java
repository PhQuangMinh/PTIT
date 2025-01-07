import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

class GV{
    String ma, ten;
    List<Mon> m = new ArrayList<>();
    GV(String ma, String ten){
        this.ma = ma;
        this.ten = ten;
    }
}
class Mon{
    String ten;
    Double gio;
    Mon(String ten, double gio){
        this.ten = ten;
        this.gio = gio;
    }

    @Override
    public String toString(){
        return ten + " " + gio;
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws ParseException {
        int n = Integer.parseInt(scanner.nextLine());
        TreeMap<String, String> mp = new TreeMap<>();
        for (int i=1;i<=n;i++){
            String ma = scanner.next();
            String mon = scanner.nextLine().trim();
            mp.put(ma, mon);
        }
        List<GV> l = new ArrayList<>();
        int m = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=m;i++){
            String ma = scanner.next();
            String ten = scanner.nextLine().trim();
            l.add(new GV(ma, ten));
        }
        int k = Integer.parseInt(scanner.nextLine());
        TreeMap<String, Double> g = new TreeMap<>();
        for (int i=1;i<=k;i++){
            String[] a = scanner.nextLine().split("\\s+");
            GV gv = l.stream().filter(e -> e.ma.equals(a[0])).findAny().get();
            gv.m.add(new Mon(mp.get(a[1]), Double.parseDouble(a[2])));
        }
        String magv = scanner.nextLine();
        GV gv = l.stream().filter(e -> e.ma.equals(magv)).findAny().get();
        System.out.println("Giang vien: " + gv.ten);
        double tong = 0;
        for (Mon x:gv.m){
            System.out.println(x);
            tong += x.gio;
        }
        System.out.printf("Tong: %.2f", tong);
    }
    public static void main(String[] args) throws FileNotFoundException, ParseException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}