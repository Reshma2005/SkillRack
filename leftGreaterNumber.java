import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
		Scanner in=new Scanner(System.in);
		int n1=in.nextInt();
		int[] a=new int[n1];
		for(int i=0;i<n1;i++)
		{
		    a[i]=in.nextInt();
		}
		int j=0;
		System.out.print("-1 ");
		for(int i=1;i<n1;i++)
		{
	   for( j=i-1;j>=0;j--)
	   {
	       if(a[j]>a[i])
	       {
	           System.out.print(a[j]+" ");
	           break;
	       }
	   }
	       if(j==-1)
	       {
		       System.out.print("-1 "); 
		    }
        }
	}
}
