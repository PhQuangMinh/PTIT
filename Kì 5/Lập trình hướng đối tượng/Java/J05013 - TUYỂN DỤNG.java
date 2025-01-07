import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

class Cla{
    String ma, ten, xl;
    double tb;
    public Cla(String ma, String ten, double tb, String xl) {
        this.ma = ma;
        this.ten = ten;
        this.tb = tb;
        this.xl = xl;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + String.format("%.2f", tb) + " " + xl;
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    static String xl(Double xl){
        if (xl>9.5) return "XUAT SAC";
        if (xl>=8) return "DAT";
        if (xl>=5) return "CAN NHAC";
        return "TRUOT";
    }
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<Cla> list = new ArrayList<>();
        for (int i=1;i<=n;i++){
            String ma = String.format("TS%02d", i);
            String ten = scanner.nextLine();
            double lt = Double.parseDouble(scanner.nextLine());
            double th = Double.parseDouble(scanner.nextLine());
            if (lt>10) lt/=10;
            if (th>10) th/=10;
            list.add(new Cla(ma, ten, (lt+th)/2, xl((lt+th)/2)));
        }
        list.sort((o1, o2) -> Double.compare(o2.tb, o1.tb));
        for (Cla cla: list) {
            System.out.println(cla);
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
