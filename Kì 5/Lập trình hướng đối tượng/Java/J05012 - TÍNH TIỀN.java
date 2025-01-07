import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

class HD{
    String ma, ten;
    long sl, dg, ck, tt;
    public HD(String ma, String ten, long sl, long dg, long ck, long tt){
        this.ma = ma;
        this.ten = ten;
        this.sl = sl;
        this.dg = dg;
        this.ck = ck;
        this.tt = tt;
    }

    @Override
    public String toString(){
        return ma + " " + ten + " " + sl + " " + dg + " " + ck + " " + tt;
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<HD> list = new ArrayList<>();
        for (int i=1;i<=n;i++){
            String ma = scanner.nextLine();
            String ten = scanner.nextLine();
            long sl = Long.parseLong(scanner.nextLine());
            long dg = Long.parseLong(scanner.nextLine());
            long ck = Long.parseLong(scanner.nextLine());
            list.add(new HD(ma, ten, sl, dg, ck, sl*dg-ck));
        }
        list.sort((o1, o2) -> Long.compare(o2.tt, o1.tt));
        for (HD hd : list) {
            System.out.println(hd);
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
