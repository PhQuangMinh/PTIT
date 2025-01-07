package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;



public class Mavenproject2 {
    static boolean mo(char c){
        return c == '(' || c == '[' || c == '{';
    }
    static void solve(Scanner sc){
        String s = sc.nextLine();
        Stack<Integer> st = new Stack<>();
        st.add(-1);
        int n = s.length();
        int ans = 0;
        for (int i=0;i<n;i++){
            if (s.charAt(i)=='('){
                st.push(i);
            } else{
                if (!st.empty()) st.pop();
                if (!st.empty()) ans = Math.max(ans, i-st.peek());
                else st.add(i);
            }
        }
        System.out.println(ans);
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("data.in"));
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        for (int i=1;i<=n;i++){
            solve(sc);
        }
    }
}
