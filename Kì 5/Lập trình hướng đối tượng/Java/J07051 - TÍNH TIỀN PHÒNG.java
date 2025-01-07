import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Scanner;

class KS implements Comparable<KS>{
    String ma, ten, sp;
    long tien, sn;
    KS(String ma, String ten, String sp, long sn, long tien) {
        this.ma = ma;
        this.ten = ten;
        this.sp = sp;
        this.sn = sn;
        this.tien = tien;
    }

    public long getTien(){
        return tien;
    }
    @Override
    public String toString(){
        return ma + " " + ten + " " + sp + " " + sn + " " + tien;
    }
    @Override
    public int compareTo(KS o) {
        return Long.compare(o.getTien(), tien);
    }
}
public class J07051 {
    static Scanner scanner = new Scanner(System.in);
    static String format(String date){
        StringBuilder sb = new StringBuilder(date);
        if (sb.charAt(1)=='/') sb.insert(0, '0');
        if (sb.charAt(4)=='/') sb.insert(3, '0');
        return sb.toString();
    }
    static String chuanTen(String ten){
        StringBuilder sb = new StringBuilder();
        String[] a = ten.trim().toLowerCase().split("\\s+");
        for (int i = 0; i < a.length; i++) {
            sb.append(Character.toUpperCase(a[i].charAt(0))).append(a[i].substring(1));
            if (i<a.length-1) sb.append(' ');
        }
        return sb.toString();
    }

    public static int getPhi(char c){
        if (c=='1') return 25;
        if (c=='2') return 34;
        if (c=='3') return 50;
        return 80;
    }
    public static void solve(Scanner scanner) throws ParseException {
        ArrayList<KS> list = new ArrayList<>();
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            String ma = String.format("KH%02d", i+1);
            String ten = scanner.nextLine();
            String p = scanner.nextLine();
            Date den = sdf.parse(format(scanner.nextLine()));
            Date di = sdf.parse(format(scanner.nextLine()));
            int phi = Integer.parseInt(scanner.nextLine());
            long ngay = (di.getTime() - den.getTime())/(1000*24*60*60)+1;
            long gia = ngay * getPhi(p.charAt(0)) + phi;
            list.add(new KS(ma, chuanTen(ten), p, ngay, gia));
        }
        Collections.sort(list);
        for (KS ks:list){
            System.out.println(ks);
        }
    }
    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner scanner = new Scanner(new File("KHACHHANG.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
