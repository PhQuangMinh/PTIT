import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J07072 {
    static String chuanTen(String ten){
        StringBuilder sb = new StringBuilder();
        String[] a = ten.trim().toLowerCase().split("\\s+");
        for (int i = 0; i < a.length; i++) {
            sb.append(Character.toUpperCase(a[i].charAt(0))).append(a[i].substring(1));
            if (i<a.length-1) sb.append(' ');
        }
        return sb.toString();
    }

    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        ArrayList<String> list = new ArrayList<>();
        while (scanner.hasNext()) {
            list.add(chuanTen(scanner.nextLine()));
        }
        list.sort((o1, o2) -> {
            String t1 = o1.substring(o1.lastIndexOf(" ") + 1);
            String t2 = o2.substring(o2.lastIndexOf(" ") + 1);
            String h1 = o1.substring(0, o1.lastIndexOf(" "));
            String h2 = o2.substring(0, o2.lastIndexOf(" "));
            if (!t1.equals(t2)) return t1.compareTo(t2);
            return h1.compareTo(h2);
        });
        for (String a:list){
            System.out.println(a);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("DANHSACH.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
