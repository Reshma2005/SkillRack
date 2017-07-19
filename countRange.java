import java.util.*;
public class Hello {

    public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int n = sc.nextInt();
	    int[] a = new int[n];
	    for(int i=0;i<n;i++)
	    
	    {
	        a[i] = sc.nextInt();
	        
	    }
	    
	    Arrays.sort(a);
	    
	    int flag =1;
	    int count =0;
	    
	    int num = a[0];
	    for(int i=1;i<n;i++)
	    {
	        if(a[i] == num+1)
	        {
	            if(flag == 1)
	            {
	                count++;
	                flag = 0;
	            }
	        }
	        else{
	            flag = 1;
	        }
	        num = a[i];
	    }
	    System.out.println(count+"");
	    
	    

	}
}
