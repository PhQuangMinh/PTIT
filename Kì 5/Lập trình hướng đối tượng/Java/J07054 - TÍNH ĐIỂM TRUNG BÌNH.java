import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class TSJ54 implements Comparable<TSJ54> {
    String ma, ten;
    double tb;
    TSJ54(String ma, String ten, double db) {
        this.ma = ma;
        this.ten = ten;
        this.tb = db;
    }

    public double getTb(){
        return tb;
    }

    @Override
    public int compareTo(TSJ54 o) {
        return Double.compare(o.getTb(), tb);
    }

    @Override
    public String toString() {
        return String.format("%s %s %.2f", ma, ten, tb);
    }
}
public class J07054 {
    static Scanner scanner = new Scanner(System.in);

    static String chuanTen(String ten){
        StringBuilder sb = new StringBuilder();
        String[] a = ten.trim().toLowerCase().split("\\s+");
        for (int i = 0; i < a.length; i++) {
            sb.append(Character.toUpperCase(a[i].charAt(0))).append(a[i].substring(1));
            if (i<a.length-1) sb.append(' ');
        }
        return sb.toString();
    }

    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<TSJ54> list = new ArrayList<>();
        for (int i=1;i<=n;i++) {
            String ma = String.format("SV%02d", i);
            String ten = chuanTen(scanner.nextLine());
            double tb = (Double.parseDouble(scanner.nextLine())*3 + Double.parseDouble(scanner.nextLine())*3
                    + Double.parseDouble(scanner.nextLine())*2)/8;
            list.add(new TSJ54(ma, ten, tb));
        }
        Collections.sort(list);
        int hang = 1;
        for (int i = 0; i < list.size();i++) {
            System.out.print(list.get(i) + " ");
            if (i>=1 && list.get(i).getTb()==list.get(i-1).getTb()){
                System.out.println(hang);
            } else{
                hang = i+1;
                System.out.println(hang);
            }
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("BANGDIEM.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
