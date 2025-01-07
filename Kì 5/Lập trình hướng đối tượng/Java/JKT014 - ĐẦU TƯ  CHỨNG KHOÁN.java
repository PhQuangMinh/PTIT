package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

class Pair<T, S>{
    T first;
    S second;

    public Pair(T first, S second) {
        this.first = first;
        this.second = second;
    }
   
}

public class Mavenproject2 {
    static void solve(Scanner sc){
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        int[] l = new int[n];
        Stack<Integer> st = new Stack<>();
        for (int i=0;i<n;i++){
            while (!st.isEmpty() && a[st.peek()]<=a[i]) st.pop();
            if (st.isEmpty()) l[i] = -1;
            else l[i] = st.peek();
            st.add(i);
        }
        for (int i=0;i<n;i++){
            System.out.print((i-l[i]) + " ");
        }
        System.out.println("");
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
