/* input: 3
outpt: 2
series: 1 1 2 3 4 9 8 27 16 81 32 243 64 729 128 2187
256 6561(mixer of 2 series)
*/


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.print((n%2==0)?(int)Math.pow(3,(n-1)/2):(int)Math.pow(2,(n-1)/2));
	}
}