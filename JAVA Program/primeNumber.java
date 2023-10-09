package stringSample;

import java.util.Scanner;

public class primeNumber {

	public static void main(String[] args) {
		System.out.println("Enter Number: ");
		Scanner obj=new Scanner(System.in);
		int num = obj.nextInt();
		if(num==0||num%2==0) {
			System.out.println(num+" is Not Prime Number");
		}//if
		else {
			System.out.println(num+" is Prime Number");
		}//else
	}

}
