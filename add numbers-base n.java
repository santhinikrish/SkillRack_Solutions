/*input:
2 1212 11
output: 13
*/


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String n1=sc.next();
        String n2=sc.next();
        int a=0;
        a=Integer.parseInt(n1,n)+Integer.parseInt(n2,n);
        System.out.print(a);
	}
}
