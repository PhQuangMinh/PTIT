import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class KS implements Comparable<KS>{
    String ma, ten;
    long tien;
    KS(String ma, String ten,long tien) {
        this.ma = ma;
        this.ten = ten;
        this.tien = tien;
    }

    public long getTien(){
        return tien;
    }
    @Override
    public String toString(){
        return ma + " " + ten + " " + tien;
    }
    @Override
    public int compareTo(KS o) {
        return Long.compare(o.getTien(), tien);
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static long getPhi(int a){
        if (a<=50){
            return Math.round(a*100*1.02);
        }
        if (a<=100){
            return Math.round(((a-50)*150 + 5000)*1.03);
        }
        return Math.round((5000 + 7500 + (a-100)*200)*1.05);
    }
    public static void solve(Scanner scanner) throws ParseException {
        ArrayList<KS> list = new ArrayList<>();
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            String ma = String.format("KH%02d", i+1);
            String ten = scanner.nextLine();
            int cu = Integer.parseInt(scanner.nextLine());
            int moi = Integer.parseInt(scanner.nextLine());
            list.add(new KS(ma, ten, getPhi(moi-cu)));
        }
        Collections.sort(list);
        for (KS ks:list){
            System.out.println(ks);
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
