 import java.util.Scanner; 
class Exam { 
private int marks; 
public String getResult() { 
if (marks >= 40) { 
return "pass"; 
} 
return "fail"; 
} 
public int getMarks() { 
return marks; 
} 
public void setMarks(int marks) { 
this.marks = marks; 
} 
} 
public class Hello { 
public static void main(String[] args) { 
Scanner sc = new Scanner(System.in); 
Exam e = new Exam(); 
e.setMarks(sc.nextInt()); 
System.out.println(e.getResult()); 
} 
}