package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;



public class Mavenproject2 {
    static void solve(Scanner sc){
        int n = Integer.parseInt(sc.nextLine());
        Queue<String> q = new LinkedList<>();
        q.add("8");
        q.add("6");
        List<String> ans = new ArrayList<>();
        while (!q.isEmpty()){
            String p = q.poll();
            if (p.length()>n) break;
            ans.add(p);
            q.add(p+"8");
            q.add(p+"6");
        }
        System.out.println(ans.size());
        Collections.sort(ans, (String o1, String o2) -> {
            if (o1.length()!=o2.length()){
                if (o1.length()>o2.length()) return -1;
                return 1;
            }
            return o2.compareTo(o1);
        });
        for (String st:ans){
            System.out.print(st + " ");
        }
        System.out.println();
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