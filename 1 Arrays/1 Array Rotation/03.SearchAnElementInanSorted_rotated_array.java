import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n-->0)
		{
		    int flag=0;
		    int a=sc.nextInt();
		    int[] arr=new int[a];
		    for(int i=0;i<a;i++)
		        arr[i]=sc.nextInt();
		    int m=sc.nextInt();
		    for(int i=0;i<arr.length;i++)
		    {
		        if(arr[i]==m)
		        {
		            System.out.println(i);
		            flag=1;
		            break;
		        }
		        
		    }
		    if(flag==0)
		        System.out.println(-1);
		}
	}
}
