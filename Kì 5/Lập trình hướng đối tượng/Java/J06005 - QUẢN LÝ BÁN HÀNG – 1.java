import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

class KH{
    String ten, gt, ns, que;
    KH(String ten, String gt, String ns, String que){
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.que = que;
    }
}
class MH{
    String ten, dv;
    int mua, ban;
    MH(String ten, String dv, int mua, int ban){
        this.ten = ten;
        this.dv = dv;
        this.mua = mua;
        this.ban = ban;
    }
}
class HD{
    String ma, ten, dc, tenmh, dv;
    int mua, ban, sl, tien;
    HD(String ma, String ten, String dc, String tenmh, String dv, int mua, int ban, int sl, int tien){
        this.ma = ma;
        this.ten = ten;
        this.dc = dc;
        this.tenmh = tenmh;
        this.dv = dv;
        this.mua = mua;
        this.ban = ban;
        this.sl = sl;
        this.tien = tien;
    }

    @Override
    public String toString(){
        return ma + " " + ten + " " + dc + " " + tenmh + " " + dv + " " + mua + " " + ban + " " + sl + " " + tien;
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws ParseException {
        int n = Integer.parseInt(scanner.nextLine());
        TreeMap<String, KH> mp = new TreeMap<>();
        for (int i=1;i<=n;i++){
            String ma = String.format("KH%03d", i);
            String ten = scanner.nextLine();
            String gt = scanner.nextLine();
            String ns = scanner.nextLine();
            String que = scanner.nextLine();
            mp.put(ma, new KH(ten, gt, ns, que));
        }
        int m = Integer.parseInt(scanner.nextLine());
        TreeMap<String, MH> mp2 = new TreeMap<>();
        for (int i=1;i<=m;i++){
            String ma = String.format("MH%03d", i);
            String ten = scanner.nextLine();
            String dv = scanner.nextLine();
            int mua = Integer.parseInt(scanner.nextLine());
            int ban = Integer.parseInt(scanner.nextLine());
            mp2.put(ma, new MH(ten, dv, mua, ban));
        }
        int k = Integer.parseInt(scanner.nextLine());
        List<HD> list = new ArrayList<>();
        for (int i=1;i<=k;i++){
            String maHD = String.format("HD%03d", i);
            String makh = scanner.next();
            String mamh = scanner.next();
            int sl = Integer.parseInt(scanner.next());
            KH kh = mp.get(makh);
            MH mh = mp2.get(mamh);
            list.add(new HD(maHD, kh.ten, kh.que, mh.ten, mh.dv, mh.mua, mh.ban, sl, sl*mh.ban));
        }
        for (HD hd : list){
            System.out.println(hd);
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