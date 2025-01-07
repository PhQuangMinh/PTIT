package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;



public class Mavenproject2 {

    public static void main(String[] args) throws FileNotFoundException {
        // Scanner sc = new Scanner(new File("data.in"));
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n+1];
        for (int i=1;i<n;i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            a[x]++;
            a[y]++;
        }
        for (int i=1;i<=n;i++){
            if (a[i]!=1 && a[i] != n-1){
                System.out.println("No");
                return;
            }
        }
        System.out.println("Yes");
    }
}