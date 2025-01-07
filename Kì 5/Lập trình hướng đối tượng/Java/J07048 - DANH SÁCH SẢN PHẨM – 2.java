import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Scanner;

class SP implements Comparable<SP>{
    String makh, ten;
    int gia, bh;

    SP(String makh, String ten, int gia, int bh){
        this.makh = makh;
        this.ten = ten;
        this.gia = gia;
        this.bh = bh;
    }

    public int getGia(){
        return gia;
    }

    public String getMaKH(){
        return makh;
    }


    @Override
    public int compareTo(SP o) {
        if (gia>o.getGia()) return -1;
        if (gia<o.getGia()) return 1;
        return makh.compareTo(o.getMaKH());
    }

    @Override
    public String toString() {
        return makh + " " + ten + " " + gia + " " + bh;
    }
}
public class J07048 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) throws ParseException {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<SP> list = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String ma = scanner.nextLine();
            String ten = scanner.nextLine();
            int gia = Integer.parseInt(scanner.nextLine());
            int bh = Integer.parseInt(scanner.nextLine());
            list.add(new SP(ma, ten, gia, bh));
        }
        Collections.sort(list);
        for (SP kh: list){
            System.out.println(kh);
        }
    }
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner scanner = new Scanner(new File("SANPHAM.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}