import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Stack;

public class J02017 {
    static Scanner scanner = new Scanner(System.in);
    public static void solve(Scanner scanner) {
        Stack<Integer> st = new Stack<>();
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            if (st.isEmpty() || (st.peek() + x)%2==1){
                st.push(x);
            } else{
                st.pop();
            }
        }
        System.out.println(st.size());
    }
    public static void main(String[] args) throws FileNotFoundException {
//        Scanner scanner = new Scanner(new File("data.in"));
        int n = 1;
        for (int i = 0; i < n; i++) {
            solve(scanner);
        }
    }

}
