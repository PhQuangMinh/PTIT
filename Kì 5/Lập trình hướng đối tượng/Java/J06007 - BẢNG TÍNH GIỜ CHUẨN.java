import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

class GV{
    String ma, ten;
    GV(String ma, String ten){
        this.ma = ma;
        this.ten = ten;
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
            g.put(a[0], g.getOrDefault(a[0], 0D) + Double.parseDouble(a[2]));
        }
        for (GV gv:l){
            System.out.printf("%s %.2f\n", gv.ten, g.get(gv.ma));
        }
    }
    public static void main(String[] args) throws FileNotFoundException, ParseException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}