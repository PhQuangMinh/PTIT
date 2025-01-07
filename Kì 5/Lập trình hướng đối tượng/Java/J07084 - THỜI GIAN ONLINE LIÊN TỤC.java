import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;

class SVJ84{
    String ten;
    long tg;
    SVJ84(String ten, long tg){
        this.ten = ten;
        this.tg = tg;
    }

    @Override
    public String toString() {
        return ten + " " + tg;
    }
}
public class J07084 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) throws ParseException {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<SVJ84> list = new ArrayList<>();
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
        for (int i = 0; i < n; i++) {
            String ten = scanner.nextLine();
            Date di = sdf.parse(scanner.nextLine());
            Date den = sdf.parse(scanner.nextLine());
            long tg = (den.getTime() - di.getTime())/(1000*60);
            list.add(new SVJ84(ten, tg));
        }
        list.sort((o1, o2) -> Long.compare(o2.tg, o1.tg));
        for (SVJ84 svj84:list){
            System.out.println(svj84);
        }
    }
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner scanner = new Scanner(new File("ONLINE.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}