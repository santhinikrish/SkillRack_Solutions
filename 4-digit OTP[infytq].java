/*input: 345674
output: 1636
expla: 4 6 5 are in even position,square those integers and print 1st 4 digits
*/


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        char c[]=s.toCharArray();
        String b="";
        int p=0;
        for(int i=0;i<c.length;i++){
            int x=Integer.parseInt(String.valueOf(c[i]));
            if(i%2!=0){
                b+=(x*x);
                p=1;
            }
        }
        if(p==0 || b.length()<4){
            System.out.print("-1");
        }else{
            for(int i=0;i<4;i++){
                System.out.print(b.charAt(i));
            }
        }
    }
}
