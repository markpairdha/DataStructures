import java.util.*;

class SmallestDifference {
    
    static int findmin(int arr[],int brr[],int a,int b)
    {
        Arrays.sort(arr);
        Arrays.sort(brr);
        int m=0,n=0,result = Integer.MAX_VALUE;
        while(m < a && n < b)
        {
            if(Math.abs(arr[m]-brr[n]) < result)
              result = Math.abs(arr[m]-brr[n]);
            if(arr[m] < arr[n])
              m++;
            else
              n++;
             
        }
        return result;
    }
    public static void main (String[] args) {
        int arr[] = {1,2,5,11};
        int brr[] = {4,12,19,23,127,235};
        int a = arr.length,b = brr.length;
        System.out.println(findmin(arr,brr,a,b));
    }
}
