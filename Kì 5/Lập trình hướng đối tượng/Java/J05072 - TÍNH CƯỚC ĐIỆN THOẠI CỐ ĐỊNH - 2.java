import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.util.stream.Collectors;

class Cla{
    String tinh;
    int cuoc;

    Cla(String tinh, int cuoc){
        this.tinh = tinh;
        this.cuoc = cuoc;
    }
}
class Cl{
    String sdt, tinh;
    long phut, tien;
    Cl(String sdt, String tinh, long phut, long tien){
        this.sdt = sdt;
        this.tinh = tinh;
        this.tien = tien;
        this.phut = phut;
    }

    @Override
    public String toString(){
        return sdt + " " + tinh + " " + phut + " " + tien;
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws ParseException {
        int n = Integer.parseInt(scanner.nextLine());
        TreeMap<String, Cla> mp = new TreeMap<>();
        for (int i=1;i<=n;i++) {
            String ma = scanner.nextLine();
            String tinh = scanner.nextLine();
            int cuoc = Integer.parseInt(scanner.nextLine());
            mp.put(ma, new Cla(tinh, cuoc));
        }
        int m = Integer.parseInt(scanner.nextLine());
        SimpleDateFormat sdf = new SimpleDateFormat("HH:mm");
        ArrayList<Cl> l = new ArrayList<>();
        for (int i=1;i<=m;i++) {
            String sdt = scanner.next();
            Date di = sdf.parse(scanner.next());
            Date den = sdf.parse(scanner.next());
            long phut = (den.getTime()-di.getTime())/(1000*60);
            if (sdt.charAt(0) == '0'){
                String ma = sdt.substring(1, 3);
                int phi = mp.get(ma).cuoc;
                String tinh = mp.get(ma).tinh;
                l.add(new Cl(sdt, tinh, phut, phut*phi));
            } else{
                int tmp = (int) Math.ceil((double) phut/3);
                l.add(new Cl(sdt, "Noi mang", tmp, tmp* 800L));
            }
        }
        l.sort((o1, o2) -> Long.compare(o2.tien, o1.tien));
        for (Cl cl:l) {
            System.out.println(cl);
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