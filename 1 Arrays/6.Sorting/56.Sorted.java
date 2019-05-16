public class Sorted {
    
    public static boolean arraysorted(int arr[],int n)
   {
       if(n == 1 || n == 0)
         return true;
       if(arr[n-1] < arr[n-2])
         return false;
      return arraysorted(arr,n-1);        
     
   }
     public static void main (String[] args) {
        int arr[] = {1,2,3,4,5};
        int n = arr.length;
        if(arraysorted(arr,n))
           System.out.println("Yes");
        else
          System.out.println("No");
    }
}
