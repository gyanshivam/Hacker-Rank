import java.io.*;
import java.util.*; 
import java.text.*; 
import java.math.*; 
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
       /* BigInteger A = s.nextBigInteger();
        BigInteger B = s.nextBigInteger();*/
        BigInteger A = new BigInteger(s.next());
        BigInteger B = new BigInteger(s.next());
        s.close();
        
        BigInteger C = A.add(B);
        BigInteger D = A.multiply(B);
        
        System.out.println(C);
        System.out.println(D);      
      }
}
