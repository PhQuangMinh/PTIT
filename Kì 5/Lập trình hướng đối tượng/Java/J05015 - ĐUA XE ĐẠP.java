import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

class Cla{
    String ma, ten, dv, tg;
    long vt;
    Cla(String ma, String ten, String dv, long vt, String tg){
        this.ma = ma;
        this.ten = ten;
        this.dv = dv;
        this.vt = vt;
        this.tg = tg;
    }

    public String getTG(){
        return tg;
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + dv + " " + vt + " Km/h";
    }
}
public class Main {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<Cla> list = new ArrayList<>();
        for (int i=1;i<=n;i++){
            String ten = scanner.nextLine();
            String dv = scanner.nextLine();
            String tg = scanner.nextLine();
            StringBuilder sb = new StringBuilder();
            for (int j=0;j<dv.length();j++){
                if (j == 0 || dv.charAt(j - 1) == ' '){
                    sb.append(Character.toUpperCase(dv.charAt(j)));
                }
            }
            for (int j=0;j<ten.length();j++){
                if (j == 0 || ten.charAt(j - 1) == ' '){
                    sb.append(Character.toUpperCase(ten.charAt(j)));
                }
            }
            long vt = Math.round(120/(Double.parseDouble(tg.substring(0, tg.lastIndexOf(':')))-6
                    + Double.parseDouble(tg.substring(tg.lastIndexOf(':')+1))/60));
            list.add(new Cla(sb.toString(), ten, dv, vt, tg));
        }
        list.sort(Comparator.comparing(o -> o.tg));
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