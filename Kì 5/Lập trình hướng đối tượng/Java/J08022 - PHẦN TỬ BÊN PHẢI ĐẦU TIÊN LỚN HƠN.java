package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;



public class Mavenproject2 {
    static void solve(Scanner sc){
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        int[] r = new int[n];
        Stack<Integer> st = new Stack<>();
        for (int i=n-1;i>=0;i--){
            while (!st.empty() && a[st.peek()]<=a[i]) st.pop();
            if (st.empty()) r[i] = -1;
            else r[i] = st.peek();
            st.add(i);
        }
        for (int i=0;i<n;i++){
            if (r[i]<0) System.out.print("-1 ");
            else System.out.print(a[r[i]] + " ");
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
