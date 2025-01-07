import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
import java.util.TreeMap;

public class Main {
    static Scanner scanner = new Scanner(System.in);

    public static void solve(Scanner scanner) throws ParseException {
        ArrayList<String> tram = new ArrayList<>();
        int n = Integer.parseInt(scanner.nextLine());
        TreeMap<String, Double> tg = new TreeMap<>();
        TreeMap<String, Integer> mua = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            String tr = scanner.nextLine();
            if (!tram.contains(tr)) tram.add(tr);
            String bd = scanner.nextLine();
            String kt = scanner.nextLine();
            double h = Double.parseDouble(kt.substring(0, 2)) - Double.parseDouble(bd.substring(0, 2));
            double p = Double.parseDouble(kt.substring(3, 5)) - Double.parseDouble(bd.substring(3, 5));
            if (p<0){
                h--;
                p+=60;
            };
            double tmp = h + (p/60);
            tg.put(tr, tg.getOrDefault(tr, 0D)+tmp);
            mua.put(tr, mua.getOrDefault(tr, 0) + Integer.parseInt(scanner.nextLine()));
        }
        int cnt = 0;
        for (String a:tram){
            cnt++;
            String ma = String.format("T%02d", cnt);
            System.out.print(ma + " " + a + " " + String.format("%.2f", mua.get(a)/tg.get(a)) + "\n");
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
