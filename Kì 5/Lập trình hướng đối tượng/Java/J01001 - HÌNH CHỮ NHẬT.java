import java.io.*;
import java.util.Scanner;

public class J01001 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int chieuDai = Integer.parseInt(scanner.next());
        int chieuRong = Integer.parseInt(scanner.next());
        if (chieuDai <= 0 || chieuRong <= 0){
            System.out.println("0");
        }
        else{
            System.out.printf("%d %d", 2*(chieuDai + chieuRong), chieuRong*chieuDai);
        }
    }
}
