import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class MHJ73{
    String ma, ten, tin, lt, th;
    MHJ73(String ma, String ten, String tin, String lt, String th){
        this.ma = ma;
        this.ten = ten;
        this.tin = tin;
        this.lt = lt;
        this.th = th;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + tin + " " + lt + " " + th;
    }
}
public class J07073 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<MHJ73> list = new ArrayList<>();
        for (int i=1;i<=n;i++){
            String ma = scanner.nextLine();
            String ten = scanner.nextLine();
            String tin = scanner.nextLine();
            String lt = scanner.nextLine();
            String th = scanner.nextLine();
            if (!th.equals("Truc tiep")) list.add(new MHJ73(ma, ten, tin, lt, th));
        }
        list.sort(Comparator.comparing(o -> o.ma));
        for (MHJ73 mhj73 : list) System.out.println(mhj73);
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("MONHOC.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
