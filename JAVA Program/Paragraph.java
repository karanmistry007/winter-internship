package stringSample;

import java.util.Scanner;

public class Paragraph {

	public static void main(String[] args) {
		String para;
		int count=0;
		Scanner obj=new Scanner(System.in);
		System.out.println("Enter The Paragraph: ");
		para=obj.nextLine();
		System.out.println(para);
		String para1[]=para.split(" ");
		System.out.println("Length of paragraph is: "+para.length());
		System.out.println("The Number of Words: "+para1.length);
		for(int i=0;i<para1.length;i++) {
			System.out.println("This is the paragraph: "+para1[i]);
			StringBuffer strbuf=new StringBuffer(para1[i]);
			String strrev=strbuf.reverse().toString();
			if(para1[i].equals(strrev)) {
				count++;
			}//end of if
		}//end of for
		System.out.println("Number of Palindrome is: "+count);

	}

}
