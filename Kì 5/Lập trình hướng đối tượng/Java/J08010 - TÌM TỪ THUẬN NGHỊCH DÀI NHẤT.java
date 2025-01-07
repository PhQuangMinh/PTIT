package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;


public class Mavenproject2 {
    static boolean tn(String s){
        int n = s.length();
        for (int i=0;i<n/2;i++){
            if (s.charAt(i)!=s.charAt(n-i-1)) return false;
        }
        return true;
    }
    static void solve(Scanner sc){
        Map<String, Integer> mp = new LinkedHashMap<>();
        int ans = 0;
        while (sc.hasNext()){
            String[] a = sc.nextLine().split("\\s+");
            for (String st:a){
                if (tn(st)){
                    ans = Math.max(ans, st.length());
                    mp.put(st, mp.getOrDefault(st, 0)+1);
                }
            }
        }
        for (Map.Entry<String, Integer> x:mp.entrySet()){
            if (x.getKey().length()==ans){
                System.out.println(x.getKey() + " " + x.getValue());
            }
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
