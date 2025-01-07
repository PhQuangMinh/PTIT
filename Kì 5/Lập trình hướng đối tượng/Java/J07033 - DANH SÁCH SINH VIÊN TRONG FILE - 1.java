import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class SV implements Comparable<SV>{
    String masv;
    String hoten;
    String lop;
    String email;

    public SV(String masv, String hoten, String lop, String email) {
        this.masv = masv;
        this.hoten = hoten;
        this.lop = lop;
        this.email = email;
    }

    public String getMasv() {
        return masv;
    }

    public void setMasv(String masv) {
        this.masv = masv;
    }

    public String getHoten() {
        return hoten;
    }

    public void setHoten(String hoten) {
        this.hoten = hoten;
    }

    public String getLop() {
        return lop;
    }

    public void setLop(String lop) {
        this.lop = lop;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    @Override
    public int compareTo(SV o) {
        return this.masv.compareTo(o.masv);
    }

    @Override
    public String toString() {
        return masv + " " + hoten + " " + lop + " " + email;
    }


}

public class J07033 {
    public static String chuanhoa(String s){
        String[] a = s.toLowerCase().trim().split("\\s+");
        StringBuilder ans = new StringBuilder();
        for (int i=0;i<a.length;i++){
            ans.append(Character.toUpperCase(a[i].charAt(0))).append(a[i].substring(1));
            if (i<a.length-1){
                ans.append(" ");
            }
        }
        return ans.toString();
    }

    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(scanner.nextLine());
        ArrayList<SV> list = new ArrayList<>();
        for (int i=0;i<n;i++) {
            String ma = scanner.nextLine();
            String hoten = scanner.nextLine();
            String lop = scanner.nextLine();
            String email = scanner.nextLine();
            SV sv = new SV(ma, chuanhoa(hoten), lop, email);
            list.add(sv);
        }
        Collections.sort(list);
        for (SV sv:list){
            System.out.println(sv);
        }
    }
}