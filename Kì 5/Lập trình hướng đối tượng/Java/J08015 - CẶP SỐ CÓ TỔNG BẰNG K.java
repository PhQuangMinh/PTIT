package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeMap;



public class Mavenproject2 {
    static void solve(Scanner sc){
        int n = sc.nextInt();
        long k = sc.nextLong();
        TreeMap<Long, Integer> mp = new TreeMap<>();
        long[] a = new long[n];
        for (int i=0;i<n;i++){
            a[i] = sc.nextInt();
            mp.put(a[i], mp.getOrDefault(a[i], 0)+1);
        }
        long ans = 0;
        for (int i=0;i<n;i++){
            long x = k-a[i];
            if (mp.containsKey(x)){
                if (x==a[i]){
                    int tmp = mp.get(x);
                    ans += (1L*tmp*(tmp-1))/2;
                    mp.remove(x);
                } else{   
                    int tmp1 = mp.get(a[i]);
                    int tmp2 = mp.get(x);
                    ans += 1L*tmp1*tmp2;
                    mp.remove(x);
                    mp.remove(a[i]);
                }
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
