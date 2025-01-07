import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Scanner;

class KH implements Comparable<KH>{
    String makh, ten, map;
    long sl;
    KH(String makh, String ten, String map, long sl ){
        this.makh = makh;
        this.ten = ten;
        this.map = map;
        this.sl = sl;
    }


    @Override
    public int compareTo(KH o) {
        return Long.compare(o.sl, sl);
    }

    @Override
    public String toString() {
        return makh + " " + ten + " " + map + " " + sl;
    }
}
public class J07046 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) throws ParseException {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<KH> list = new ArrayList<>();
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        for (int i = 0; i < n; i++) {
            String ma = String.format("KH%02d", (i+1));
            String ten = scanner.nextLine();
            String map = scanner.nextLine();
            Date bd = sdf.parse(scanner.nextLine());
            Date kt = sdf.parse(scanner.nextLine());
            long sl = (kt.getTime() - bd.getTime())/(1000*24*60*60);
            list.add(new KH(ma, ten, map, sl));
        }
        Collections.sort(list);
        for (KH kh: list){
            System.out.println(kh);
        }
    }
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner scanner = new Scanner(new File("KHACH.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}