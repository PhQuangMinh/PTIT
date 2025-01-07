package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;


public class Mavenproject2 {
    static void solve(Scanner sc){
        String s = sc.nextLine();
        int n = s.length();
        Stack<Character> st = new Stack<>();
        Stack<Character> st2 = new Stack<>();
        for (int i=0;i<n;i++){
            if (s.charAt(i)=='<'){
                if (!st.isEmpty()){
                    st2.add(st.pop());
                }
            } else if (s.charAt(i)=='>'){
                if (!st2.isEmpty()){
                    st.add(st2.pop());
                }
            } else if (s.charAt(i)=='-'){
                if (!st.isEmpty()){
                    st.pop();
                }
            } else st.add(s.charAt(i));
        }
        ArrayList<Character> l = new ArrayList<>();
        while (!st.isEmpty()){
            l.add(st.pop());
        }
        for (int i=l.size()-1;i>=0;i--){
            System.out.print(l.get(i));
        }
        while (!st2.isEmpty()){
            System.out.print(st2.pop());
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("data.in"));
        Scanner sc = new Scanner(System.in);
//        int n = Integer.parseInt(sc.nextLine());
        int n = 1;
        for (int i=1;i<=n;i++){
            solve(sc);
        }
    }
}