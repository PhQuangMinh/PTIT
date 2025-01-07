package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.*;



public class Mavenproject2 {
    static void solve(Scanner sc){
        BigInteger tmp = new BigInteger(sc.next());
        Queue<String> q = new LinkedList<>();
        q.add("9");
        while (!q.isEmpty()){
            String p = q.poll();
            BigInteger t = new BigInteger(p);
            if (t.mod(tmp).equals(BigInteger.ZERO)){
                System.out.println(t);
                return;
            }
            q.add(p+"0");
            q.add(p+"9");
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
