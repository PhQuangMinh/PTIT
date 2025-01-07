import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class MonJ58{
    String ma, ten, ht;
    MonJ58(String ma, String ten, String ht){
        this.ma = ma;
        this.ten = ten;
        this.ht = ht;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + ht;
    }
}
public class J07058 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<MonJ58> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            list.add(new MonJ58(scanner.nextLine(), scanner.nextLine(), scanner.nextLine()));
        }
        list.sort(Comparator.comparing(o -> o.ma));
        for (MonJ58 mh : list){
            System.out.println(mh);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("MONHOC.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
