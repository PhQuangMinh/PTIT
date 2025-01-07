package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

class Pair<T, S>{
    T fi;
    S se;

    public Pair(T first, S second) {
        fi = first;
        se = second;
    }
    
}
public class Mavenproject2 {
    static void solve(Scanner sc){
        int n = sc.nextInt();
        int m = sc.nextInt();
        Queue<Pair<Integer, Integer>> q = new LinkedList<>();
        TreeSet<Integer> st = new TreeSet<>();
         q.add(new Pair(n, 0));
        while (!q.isEmpty()){
            Pair<Integer, Integer> tmp = q.poll();
            if (tmp.fi==m){
                System.out.println(tmp.se);
                return;
            }
            if (tmp.fi-1>0 && !st.contains(tmp.fi-1)){
                q.add(new Pair(tmp.fi-1, tmp.se+1));
                st.add(tmp.fi-1);
            }
            if (tmp.fi<=m && !st.contains(tmp.fi*2)){
                q.add(new Pair(tmp.fi*2, tmp.se+1));
                st.add(tmp.fi*2);
            }
        }
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
