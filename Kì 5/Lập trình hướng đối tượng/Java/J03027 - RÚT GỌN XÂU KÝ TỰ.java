import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

public class J03027 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        String s = scanner.nextLine();
        Stack<Integer> st = new Stack<>();
        int n = s.length();
        for (int i=0;i<n;i++){
            if (!st.empty() && s.charAt(st.peek()) == s.charAt(i)){
                st.pop();
            } else st.push(i);
        }
        if (st.empty()){
            System.out.println("Empty String");
            return;
        }
        StringBuilder sb = new StringBuilder();
        while (!st.empty()){
            sb.append(s.charAt(st.pop()));
        }
        sb.reverse();
        System.out.println(sb);
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
//        n = Integer.parseInt(scanner.nextLine());
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
