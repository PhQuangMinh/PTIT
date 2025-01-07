package com.mycompany.mavenproject2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;
import java.util.stream.Collectors;

class SV{
    String ma, ten, lop, diem;
    SV(String ma, String ten, String lop, String diem){
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.diem = diem;
    }
    @Override
    public String toString(){
        return ma + " " + ten + lop + " ";
    }
}

class BD{
    String maSV, maMon, diem;
    BD(String a, String b, String c){
        maSV = a;
        maMon = b;
        diem = c;
    }
}

public class Mavenproject2 {
    static String forTen(String s){
        StringBuilder sb = new StringBuilder();
        String[] a = s.toLowerCase().trim().split("\\s+");
        for (String x:a){
            sb.append(Character.toUpperCase(x.charAt(0))).append(x.substring(1)).append(" ");
        }
        return sb.toString();
    }
    static void solve()throws FileNotFoundException{
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int n = Integer.parseInt(sc.nextLine());
        ArrayList<SV> sv = new ArrayList<>();
        for (int i=0;i<n;i++){
            String ma = sc.nextLine();
            String ten = forTen(sc.nextLine());
            String lop = sc.nextLine();
            String email = sc.nextLine();
            sv.add(new SV(ma, ten, lop, email));
        }
        TreeMap<String, String> mp = new TreeMap();
        sc = new Scanner(new File("MONHOC.in"));
        int m = Integer.parseInt(sc.nextLine());
        for (int i=0;i<m;i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String tin = sc.nextLine();
            mp.put(ma, ten);
        }
        sc = new Scanner(new File("BANGDIEM.in"));
        int k = Integer.parseInt(sc.nextLine());
        ArrayList<BD> bd = new ArrayList<>();
        for (int i=0;i<k;i++){
            String[] a = sc.nextLine().split("\\s+");
            bd.add(new BD(a[0], a[1], a[2]));
        }
        int sl = Integer.parseInt(sc.nextLine());
        for (int i=0;i<sl;i++){
            String ma = sc.nextLine();
            List<BD> filter = bd.stream()
                    .filter(e -> e.maMon.equals(ma))
                    .collect(Collectors.toList());
            System.out.println("BANG DIEM MON " + mp.get(ma) + ":");
            Collections.sort(filter, new Comparator<BD>(){
                @Override
                public int compare(BD o1, BD o2){
                    double d1 = Double.parseDouble(o1.diem);
                    double d2 = Double.parseDouble(o2.diem);
                    if (d1!=d2) return Double.compare(d2, d1);
                    return o1.maSV.compareTo(o2.maSV);
                }
            });
            for (BD x:filter){
                SV sv1 = sv.stream().filter(e -> e.ma.equals(x.maSV)).findFirst().get();
                if (sv1!=null){
                    System.out.print(sv1 + x.diem);
                    System.out.println("");
                }
            }
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        int n = 1;
        for (int i=1;i<=n;i++){
            solve();
        }
    }
}