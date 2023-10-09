package hotelmenusystem;

import java.util.Scanner;

public class HotelMenuSystem {

	public static void main(String[] args) {
		float totalPrice;
		Scanner obj = new Scanner(System.in);
		while (true) {
			System.out.println("1--------South Indian");
			System.out.println("2--------Punjabi");
			System.out.println("3--------Gujrati");
			System.out.println("4--------Italian");
			System.out.println("5--------EXIT");
			System.out.println("Enter The Choice ");
			int key = obj.nextInt();
			switch (key) {
			case 1:
				System.out.println("You have selected South Indian");
				System.out.println("1--------Dosa");
				System.out.println("2--------Idli");
				System.out.println("3--------Uttapam");
				System.out.println("4--------Vada");
				System.out.println("Enter the choice of South you want ");
				int choiceSouth = obj.nextInt();
				switch (choiceSouth) {
				case 1:
					System.out.println("You have selected Dosa of South");
					System.out.println("1--------Masala Dosa");
					System.out.println("2--------Rava Dosa");
					System.out.println("3--------Spring Dosa");
					System.out.println("Enter the Dosa you want ");
					int choiceDosa = obj.nextInt();
					switch (choiceDosa) {
					case 1:
						System.out.println("You have selected Masala dosa");
						System.out.println("Enter the number of plates");
						int qtyDosa1 = obj.nextInt();
						totalPrice = qtyDosa1 * 40;
						System.out.println("The total price of " + qtyDosa1 + " is " + totalPrice + " Rupees.");
						break;
					case 2:
						System.out.println("You have selected Rava dosa");
						System.out.println("Enter the number of plates");
						int qtyDosa2 = obj.nextInt();
						totalPrice = qtyDosa2 * 50;
						System.out.println("The total price of " + qtyDosa2 + " is " + totalPrice + " Rupees.");
						break;
					case 3:
						System.out.println("You have selected Spring dosa");
						System.out.println("Enter the number of plates");
						int qtyDosa3 = obj.nextInt();
						totalPrice = qtyDosa3 * 80;
						System.out.println("The total price of " + qtyDosa3 + " is " + totalPrice + " Rupees.");
						break;
					default:
						break;
					}// end of switch choice dosa
					break;
				case 2:
					System.out.println("You have selected Idli");
					System.out.println("Enter the number of plate ");
					int qtyIdli = obj.nextInt();
					totalPrice = qtyIdli * 70;
					System.out.println("The total price of " + qtyIdli + " is " + totalPrice + " Rupees.");
					break;
				case 3:
					System.out.println("You have selected Uttapam");
					System.out.println("Enter the number of plate ");
					int qtyUttapam = obj.nextInt();
					totalPrice = qtyUttapam * 80;
					System.out.println("The total price of " + qtyUttapam + " is " + totalPrice + " Rupees.");
					break;
				case 4:
					System.out.println("You have selected Vada");
					System.out.println("Enter the number of plate ");
					int qtyVada = obj.nextInt();
					totalPrice = qtyVada * 70;
					System.out.println("The total price of " + qtyVada + " is " + totalPrice + " Rupees.");
					break;
				default:
					break;

				}// end of switch choice south

				break;
			case 2:
				System.out.println("You have selected Punjabi");
				System.out.println("1--------Paneer Tikka");
				System.out.println("2--------Dal Makhani");
				System.out.println("3--------Chole Bhature");
				System.out.println("4--------Kulcha");
				System.out.println("Enter the choice of Punjab you want ");
				int choicePunjab = obj.nextInt();
				switch (choicePunjab) {
				case 1:
					System.out.println("You have selected Paneer Tikka");
					System.out.println("Enter the number of plate ");
					int qtyPaneerTikka = obj.nextInt();
					totalPrice = qtyPaneerTikka * 180;
					System.out.println("The total price of " + qtyPaneerTikka + " is " + totalPrice + " Rupees.");
					break;
				case 2:
					System.out.println("You have selected Dal Makhani");
					System.out.println("Enter the number of plate ");
					int qtyDalMakhani = obj.nextInt();
					totalPrice = qtyDalMakhani * 190;
					System.out.println("The total price of " + qtyDalMakhani + " is " + totalPrice + " Rupees.");
					break;
				case 3:
					System.out.println("You have selected Chole Bhature");
					System.out.println("Enter the number of plate ");
					int qtyCholeBhature = obj.nextInt();
					totalPrice = qtyCholeBhature * 100;
					System.out.println("The total price of " + qtyCholeBhature + " is " + totalPrice + " Rupees.");
					break;
				case 4:
					System.out.println("You have selected Kulcha");
					System.out.println("Enter the number of plate ");
					int qtyKulcha = obj.nextInt();
					totalPrice = qtyKulcha * 70;
					System.out.println("The total price of " + qtyKulcha + " is " + totalPrice + " Rupees.");
					break;
				default:
					break;
				}// end of switch punjab
				break;

			case 3:
				System.out.println("You have selected Gujrati");
				System.out.println("1--------Undhiyu");
				System.out.println("2--------Dhokla");
				System.out.println("3--------Khichdi");
				System.out.println("4--------Roti");
				System.out.println("Enter the choice of Gujrat you want ");
				int choiceGujrat = obj.nextInt();
				switch (choiceGujrat) {
				case 1:
					System.out.println("You have selected Undhiyu");
					System.out.println("Enter the number of plate ");
					int qtyUndhiyu = obj.nextInt();
					totalPrice = qtyUndhiyu * 160;
					System.out.println("The total price of " + qtyUndhiyu + " is " + totalPrice + " Rupees.");
					break;
				case 2:
					System.out.println("You have selected Dhokla");
					System.out.println("Enter the number of plate ");
					int qtyDhokla = obj.nextInt();
					totalPrice = qtyDhokla * 100;
					System.out.println("The total price of " + qtyDhokla + " is " + totalPrice + " Rupees.");
					break;
				case 3:
					System.out.println("You have selected Khichdi");
					System.out.println("Enter the number of plate ");
					int qtyKhichdi = obj.nextInt();
					totalPrice = qtyKhichdi * 150;
					System.out.println("The total price of " + qtyKhichdi + " is " + totalPrice + " Rupees.");
					break;
				case 4:
					System.out.println("You have selected Roti");
					System.out.println("Enter the number of plate ");
					int qtyRoti = obj.nextInt();
					totalPrice = qtyRoti * 30;
					System.out.println("The total price of " + qtyRoti + " is " + totalPrice + " Rupees.");
					break;
				default:
					break;
				}// end of switch Gujrati
				break;

			case 4:
				System.out.println("You have selected Italian");
				System.out.println("1--------Margherita Pizza");
				System.out.println("2--------Veggie Pizza");
				System.out.println("3--------Lasagne");
				System.out.println("4--------Pasta");
				System.out.println("Enter the choice of Italy you want ");
				int choiceItaly = obj.nextInt();
				switch (choiceItaly) {
				case 1:
					System.out.println("You have selected Margherita Pizza");
					System.out.println("Enter the number of plate ");
					int qtyMargheritaPizza = obj.nextInt();
					totalPrice = qtyMargheritaPizza * 150;
					System.out.println("The total price of " + qtyMargheritaPizza + " is " + totalPrice + " Rupees.");
					break;
				case 2:
					System.out.println("You have selected Veggie Pizza");
					System.out.println("Enter the number of plate ");
					int qtyVeggiePizza = obj.nextInt();
					totalPrice = qtyVeggiePizza * 180;
					System.out.println("The total price of " + qtyVeggiePizza + " is " + totalPrice + " Rupees.");
					break;
				case 3:
					System.out.println("You have selected Lasagne");
					System.out.println("Enter the number of plate ");
					int qtyLasagne = obj.nextInt();
					totalPrice = qtyLasagne * 150;
					System.out.println("The total price of " + qtyLasagne + " is " + totalPrice + " Rupees.");
					break;
				case 4:
					System.out.println("You have selected Pasta");
					System.out.println("Enter the number of plate ");
					int qtyPasta = obj.nextInt();
					totalPrice = qtyPasta * 30;
					System.out.println("The total price of " + qtyPasta + " is " + totalPrice + " Rupees.");
					break;
				default:
					break;
				}// end of switch Italian
				break;
			case 5:
				System.exit(0);
			default:
				System.out.println("Invalid choice");
				break;
			}// end of outer switch key
		}
	}//end of while

}
