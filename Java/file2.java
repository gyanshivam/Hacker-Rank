import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args){
        int arr[][] = new int[6][6];
        
        Scanner s = new Scanner(System.in);
        for(int i=0; i<6; i++)
        {
            for(int j=0; j<6; j++)
            arr[i][j]=s.nextInt();
        }
        s.close();
        
        int sum_max = Integer.MIN_VALUE;
                
        for(int i=0; i<6; i++)
        {
            for(int j=0; j<6; j++)
            {
                if(i>1 && j>1)
                {
                    int sum = arr[i][j] + arr[i][j-1] + arr[i][j-2]
                    + arr[i-1][j-1]
                    + arr[i-2][j-2] + arr[i-2][j-1] + arr[i-2][j];
                    if(sum>sum_max)
                        sum_max = sum;  
                }
            }
        }
        System.out.println(sum_max);
    }
}
