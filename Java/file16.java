import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s = new Scanner(System.in);
        
        int i=1;
        
        while(s.hasNext())
        {
            String str = s.nextLine();
            System.out.println(i+" "+str);
            i++;
        }
        
        s.close();
    }
}
