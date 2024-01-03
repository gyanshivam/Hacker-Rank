import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        BigInteger A = scanner.nextBigInteger();
        scanner.close();
        Boolean a = A.isProbablePrime (2);
        
        if(a == true)
            System.out.println("prime");
        else
            System.out.println("not prime");
    }
}
