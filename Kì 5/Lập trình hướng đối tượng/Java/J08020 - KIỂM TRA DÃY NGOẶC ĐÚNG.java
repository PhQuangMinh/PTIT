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
        Stack<Character> st = new Stack<>();
        int n = s.length();
        for (int i=0;i<n;i++){
            if (mo(s.charAt(i))){
                st.add(s.charAt(i));
            } else{
                if (s.charAt(i)==')'){
                    if (st.empty() || st.peek()!='('){
                        System.out.println("NO");
                        return;
                    } else st.pop();
                }
                if (s.charAt(i)==']'){
                    if (st.empty() || st.peek()!='['){
                        System.out.println("NO");
                        return;
                    } else st.pop();
                }
                if (s.charAt(i)=='}'){
                    if (st.empty() || st.peek()!='{'){
                        System.out.println("NO");
                        return;
                    } else st.pop();
                }
            }
        }
        if (!st.empty()){
            System.out.println("NO");
        } else System.out.println("YES");
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