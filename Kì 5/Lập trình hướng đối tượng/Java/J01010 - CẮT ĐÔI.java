import java.util.Scanner;

public class J01010 {
    static Scanner scanner = new Scanner(System.in);
    public static Boolean checkValid(String n){
        for (int i=0; i<n.length(); i++){
            if (n.charAt(i)!='0' && n.charAt(i)!='1' && n.charAt(i)!='8' && n.charAt(i)!='9'){
                return false;
            }
        }
        return true;
    }
    public static void solve(){
        String n = scanner.nextLine();
        if (!checkValid(n)){
            System.out.println("INVALID");
            return;
        }
        StringBuilder str = new StringBuilder();
        boolean ok = false;
        int d = 0;
        while (d < n.length() && n.charAt(d)!='1') d++;
        if (d==n.length()){
            System.out.println("INVALID");
            return;
        }
        for (int i=d; i<n.length(); i++){
            if (n.charAt(i)=='0') str.append("0");
            else if (n.charAt(i)=='1'){
                str.append("1");
                ok = true;
            }
            else if (n.charAt(i)=='8') str.append("0");
            else if (n.charAt(i)=='9') str.append("0");
        }
        if (!ok) System.out.println("INVALID");
        else {
            System.out.println(str);
        }
    }
    public static void main(String[] args) {
        int n = Integer.parseInt(scanner.nextLine());
        for (int i=1; i<=n; i++){
            solve();
        }
    }
}
