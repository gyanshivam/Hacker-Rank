import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int arr[] = new int[n];
        
        for(int i=0; i<n; i++)
            arr[i] = sc.nextInt();
        sc.close();
        
        int count = 0;
        
        for(int j=0; j<n; j++)
        {
            int sum = 0;
            for(int k=j; k<n; k++)
            {
                sum = arr[k]+sum;
                if(sum<0)
                    count++;
            }
        }
        System.out.println(count);
    }
}
