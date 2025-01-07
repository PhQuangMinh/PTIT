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
        Queue<Pair<ArrayList<Integer>, Integer>> q = new LinkedList<>();
        ArrayList<Integer> temp = new ArrayList<>();
        for (int i=0;i<6;i++){
            temp.add(sc.nextInt());
        }
        ArrayList<Integer> des = new ArrayList<>();
        for (int i=0;i<6;i++){
            des.add(sc.nextInt());
        }
        q.add(new Pair(temp, 0));
        while (!q.isEmpty()){
            Pair<ArrayList<Integer>, Integer> tmp = q.poll();
            if (des.equals(tmp.fi)){
                System.out.println(tmp.se);
                return;
            }
            ArrayList<Integer> tmp1 = new ArrayList<>(Arrays.asList(tmp.fi.get(3), tmp.fi.get(0)
                    , tmp.fi.get(2), tmp.fi.get(4), tmp.fi.get(1), tmp.fi.get(5)));
            ArrayList<Integer> tmp2 = new ArrayList<>(Arrays.asList(tmp.fi.get(0), tmp.fi.get(4)
                    , tmp.fi.get(1), tmp.fi.get(3), tmp.fi.get(5), tmp.fi.get(2)));
            q.add(new Pair(tmp1, tmp.se+1));
            q.add(new Pair(tmp2, tmp.se+1));
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
