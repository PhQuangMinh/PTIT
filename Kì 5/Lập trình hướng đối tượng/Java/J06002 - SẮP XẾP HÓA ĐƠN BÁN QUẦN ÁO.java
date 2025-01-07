import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

class Cla{
    String ten;
    int g1, g2;
    Cla(String ten, int g1, int g2){
        this.ten = ten;
        this.g1 = g1;
        this.g2 = g2;
    }
}
class Cl{
    String ma, ten;
    double giam, tra;
    Cl(String ma, String ten, double gia, double tra){
        this.ma = ma;
        this.ten = ten;
        this.giam = gia;
        this.tra = tra;
    }

    @Override
    public String toString(){
        return String.format("%s %s %.0f %.0f", ma, ten, giam, tra);
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws ParseException {
        int n = Integer.parseInt(scanner.nextLine());
        TreeMap<String, Cla> mp = new TreeMap<>();
        for (int i=1;i<=n;i++) {
            String ma = scanner.nextLine();
            String ten = scanner.nextLine();
            int g1 = Integer.parseInt(scanner.nextLine());
            int g2 = Integer.parseInt(scanner.nextLine());
            mp.put(ma, new Cla(ten, g1, g2));
        }
        int m = Integer.parseInt(scanner.nextLine());
        ArrayList<Cl> ans = new ArrayList<>();
        for (int i=1;i<=m;i++){
            String ma = scanner.next();
            int sl = Integer.parseInt(scanner.next());
            int l = Integer.parseInt(String.valueOf(ma.charAt(2)));
            int gia;
            if (l==1){
                gia = sl*mp.get(ma.substring(0, 2)).g1;
            } else{
                gia = sl*mp.get(ma.substring(0, 2)).g2;
            }
            double giam = 0;
            if (sl >= 150) giam = gia * 0.5;
            else if (sl >= 100) giam = gia * 0.3;
            else if (sl >= 50) giam = gia * 0.15;

            double total = gia - giam;
            ans.add(new Cl(String.format("%s-%03d", ma, i), mp.get(ma.substring(0, 2)).ten, giam, total));
        }
        ans.sort((o1, o2) -> Double.compare(o2.tra, o1.tra));
        for (Cl l:ans){
            System.out.println(l);
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