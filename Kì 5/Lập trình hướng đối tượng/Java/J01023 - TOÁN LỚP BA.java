import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.*;

public class Main {
    static Scanner scanner = new Scanner(System.in);
    static String s = "+-*/";
    static ArrayList<Integer> pos = new ArrayList<>();
    static StringBuilder ans;
    static boolean check(String s){
        int n1 = Integer.parseInt(s.substring(0, 2));
        int n2 = Integer.parseInt(s.substring(5, 7));
        int n3 = Integer.parseInt(s.substring(10, 12));
        if (s.charAt(3)=='+' && n1+n2==n3) return true;
        if (s.charAt(3)=='-' && n1-n2==n3) return true;
        if (s.charAt(3)=='*' && n1*n2==n3) return true;
        return s.charAt(3) == '/' && n1 / n2 == n3 && n1 % n2 == 0;
    }

    static boolean Try(int index){
        if (index==pos.size()){
            if (check(ans.toString())) return true;
        }
        for (int i=index;i<pos.size();i++){
            if (pos.get(i)==3){
                for (int j=0;j<s.length();j++){
                    ans.setCharAt(3, s.charAt(j));
                    if (Try(index+1)) return true;
                }
            } else{
                char p = '0';
                if (pos.get(i)==0 || pos.get(i)==5 || pos.get(i)==10) p++;
                for (char j=p;j<='9';j++){
                    ans.setCharAt(pos.get(i), j);
                    if (Try(index+1)) return true;
                }
            }
        }
        return false;
    }

    public static void solve(Scanner scanner) throws FileNotFoundException {
        ans = new StringBuilder(scanner.nextLine());
        pos.clear();
        for (int i=0;i<ans.length();i++){
            if (ans.charAt(i)=='?'){
                pos.add(i);
            }
        }
        if (Try(0)) System.out.println(ans);
        else System.out.println("WRONG PROBLEM!");
    }
    public static void main(String[] args) throws FileNotFoundException{
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}