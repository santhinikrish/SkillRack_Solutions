/*input: 3,4,5,2,7,9,8,3,2
output: 52810
expla: the numbers that do not come between 5 and 8 are 3 4 3 2 and their sum is 12
the numbers the come between 5 and 8 are 5 2 7 9 8.after concatenation the number is 52798.
the sum of 12 and 52798 is 52810
*/


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        String sp=sc.nextLine();
        //String[] s=sp.split(",");
        sp=sp.replaceAll(",","");
        int f=sp.indexOf('5');
        int l=sp.indexOf('8');
        int sum=0;
        String x="";
        for(int i=0;i<sp.length();i++)
        {
            if(i>=f && i<=l){
                x+=sp.charAt(i);
            }else{
                sum+=(sp.charAt(i)-'0');
            }
        }
        System.out.print(sum+Long.valueOf(x));
    }
}