package stringSample;

import java.util.Date;

class SundayException extends Exception {
	public SundayException(String msg) {
		super(msg);
	}
}

public class SampleException {

	public static void main(String[] args) {
		try {
			Date obj = new Date();
			String str = obj.toString().substring(0, 3);
			if (str.equals("thur")) {
				throw new SundayException("Ajj Kaam Nahi karenge");
			} // end of if
			int x = Integer.parseInt(args[0]);
			int y = Integer.parseInt(args[1]);
			int z = x / y;
			System.out.println(z);
		} // end of try

		catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("Enter min two arguement");
			e.printStackTrace();
		} catch (NumberFormatException e) {
			System.out.println("Please enter two integer");
			e.printStackTrace();
		} catch (ArithmeticException e) {
			System.out.println("Please avoid second arguement as zero");
			e.printStackTrace();
		} catch (SundayException e) {
			System.out.println(e.getMessage());
		} catch (Exception e) {
			e.printStackTrace();

		} finally {
			System.out.println("Ab se BIKE MAT Chalaao");
		}

	}
}
