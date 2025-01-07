import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

class LoaiPhong implements Comparable<LoaiPhong>{
    String ma, ten, don, phi;
    LoaiPhong(String input){
        String[] arr = input.split("\\s+");
        ma = arr[0];
        ten = arr[1];
        don = arr[2];
        phi = arr[3];
    }

    public String getTen() {
        return ten;
    }

    @Override
    public int compareTo(LoaiPhong o) {
        return ten.compareTo(o.getTen());
    }

    @Override
    public String toString(){
        return ma + " " + ten + " " + don + " " + phi;
    }
}
public class J07045 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
    }
    public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
    public static void main7900716(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("data.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }

}

