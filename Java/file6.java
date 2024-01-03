import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        sc.close();
        
        System.out.println(A.equals(new StringBuilder(A).reverse().toString())?"Yes":"No");
        
    }
}



