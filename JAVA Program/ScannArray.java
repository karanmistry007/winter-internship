package stringSample;


	import java.util.Scanner;

	class Sum {

	public static void main(String[] args) {

	Scanner sc = new Scanner(System.in);

	int sum = 0;

	System.out.println("Please enter ten integers only: ");

	for (int i = 1; i <= 10 ; i++ ) {

	int n = sc.nextInt();

	if (n % 2 == 0) {

	sum = sum + n;

	}

	}

	System.out.println("sum of even integers only: "+sum);

	}

	}
