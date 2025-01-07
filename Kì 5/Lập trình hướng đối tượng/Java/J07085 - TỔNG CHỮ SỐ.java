import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class J07085 {
    public static void solve() throws IOException, ClassNotFoundException {
        ObjectInputStream in = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> list = (ArrayList<String>)in.readObject();
        for (String s:list){
            StringBuilder sb = new StringBuilder();
            int sum = 0;
            for (int i=0;i<s.length();i++){
                if (s.charAt(i)>='0' && s.charAt(i)<='9'){
                    if (s.charAt(i)=='0' && sb.length()>0 || s.charAt(i)>='1'){
                        sb.append(s.charAt(i));
                        sum += s.charAt(i)-'0';
                    }
                }
            }
            System.out.println(sb + " " + sum);
        }
    }
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve();
        }
    }

}