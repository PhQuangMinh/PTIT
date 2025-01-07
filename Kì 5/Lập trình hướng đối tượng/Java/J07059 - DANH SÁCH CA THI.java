import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;

class CT{
    String ma, ngay, phong;
    CT(String ma, String ngay, String phong){
        this.ma = ma;
        this.ngay = ngay;
        this.phong = phong;
    }

    @Override
    public String toString() {
        return ma + " " + ngay + " " + phong;
    }
}
public class J07059 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<CT> list = new ArrayList<>();
        for (int i=1;i<=n;i++){
            String ma = String.format("C%03d", i);
            String sb = scanner.nextLine() + " " + scanner.nextLine();
            String phong = scanner.nextLine();
            list.add(new CT(ma, sb, phong));
        }
        list.sort((o1, o2) -> {
            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy HH:mm");
            try {
                Date d1 = sdf.parse(o1.ngay);
                Date d2 = sdf.parse(o2.ngay);
                return d1.compareTo(d2);
            } catch (ParseException e) {
                throw new RuntimeException(e);
            }
        });
        for (CT ct:list){
            System.out.println(ct);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("CATHI.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
