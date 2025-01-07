import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;

class Cla{
    String ma, ten, mon, kq;
    double td;
    Cla(String ma, String ten, String mon, double td, String kq){
        this.ma = ma;
        this.ten = ten;
        this.mon = mon;
        this.kq = kq;
        this.td = td;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + mon + " " + String.format("%.1f", td) + " " + kq;
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    static double ut(char c){
        if (c=='1') return 2.0;
        if (c=='2') return 1.5;
        if (c=='3') return 1.0;
        return 0;
    }

    static String mon(char c){
        if (c=='A') return "TOAN";
        if (c=='B') return "LY";
        return "HOA";
    }
    static String tt(double c){
        if (c>=18) return "TRUNG TUYEN";
        return "LOAI";
    }
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<Cla> list = new ArrayList<>();
        for (int i=1;i<=n;i++){
            String ma = String.format("GV%02d", i);
            String ten = scanner.nextLine();
            String maMon = scanner.nextLine();
            double tin = Double.parseDouble(scanner.nextLine());
            double cm = Double.parseDouble(scanner.nextLine());
            list.add(new Cla(ma, ten, mon(maMon.charAt(0)), tin*2+cm+ut(maMon.charAt(1))
                    , tt(tin*2+cm+ut(maMon.charAt(1)))));
        }
        list.sort((o1, o2) -> Double.compare(o2.td, o1.td));
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
