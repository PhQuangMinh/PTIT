import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J07053 {
    static Scanner scanner = new Scanner(System.in);

    public static double getUT(Double th, Double lt){
        if (th>=8 && lt>=8) return 1;
        if (th>=7.5 && lt>=7.5) return 0.5;
        return 0;
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

    static String getLoai(long diem){
        if (diem>=9) return "Xuat sac";
        if (diem>=8) return "Gioi";
        if (diem>=7) return "Kha";
        if (diem>=5) return "Trung binh";
        return "Truot";
    }

    public static void solve(Scanner scanner) {
        int n = Integer.parseInt(scanner.nextLine());
        for (int i=1;i<=n;i++) {
            String ma = String.format("PH%02d", i);
            String ten = chuanTen(scanner.nextLine());
            String ns = scanner.nextLine();
            int id = ns.lastIndexOf('/');
            int tuoi = 2021 - Integer.parseInt(ns.substring(id+1));
            Double lt = Double.parseDouble(scanner.nextLine());
            Double th = Double.parseDouble(scanner.nextLine());
            long diem = Math.round((lt+th)/2 + getUT(th, lt));
            if (diem>10) diem = 10;
            System.out.print(ma + " " + ten + " " + tuoi + " " + diem + " " + getLoai(diem) + "\n");
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("XETTUYEN.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}