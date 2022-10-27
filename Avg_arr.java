import java.util.*;
class Avg_arr{
	public static void main(String args[]){
		int n,b=0;
		float c;
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the sizeof the array");
		n=sc.nextInt();
		int[] a=new int[n];
		System.out.println("enter the numbers");
		for(int i=0;i<n;i++){
		a[i]=sc.nextInt();
		b=b+a[i];
		}
		c=b/n;
		System.out.println("the avg of this array is"+c);
	}
	
}