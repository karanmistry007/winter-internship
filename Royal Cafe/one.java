package bankApplication;

import java.util.Date;
import java.util.Scanner;

class Bank {
	private int custID, accountNo;
	private String custName, custUserName, custPassword, gender, maritialStatus;
	private String adminUser, adminPassword;
	private float balance, deposit, withdrawl;

	Bank() {// default constructor
		balance = 1000000f;
		// gender = "MALE";
		// maritialStatus = "U";
		// custName = "KARAN MISTRY";
		adminUser = "admin";
		adminPassword = "admin";
	}// end of Bank

	void depositAmount() {
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter the amount you want to deposite ");
		deposit = obj.nextFloat();
		if (deposit > 0) {
			balance = balance + deposit;
		} // end of if
		else {
			System.out.println("The deposit amount cannot be lessthen or equal to zero");
		} // end of else
	}// end of depositAmount

	void withAmount() {
		Scanner obj = new Scanner(System.in);
		System.out.println("Enter Withdrawl amount ");
		withdrawl = obj.nextFloat();
		float tempBalance = balance - withdrawl;
		if (tempBalance < 10000) {
			System.out.println("Inssufficient Balance");
		} // end of if
		else {
			balance = tempBalance;
		} // end of else

	}// end of wihAmount

	void checkBalance() {
		if (gender.equalsIgnoreCase("MALE") && maritialStatus.equalsIgnoreCase("U")) {
			System.out.println("Master " + custName + " Your Balance is " + balance);
		} // end of if
		else if (gender.equalsIgnoreCase("MALE") && maritialStatus.equalsIgnoreCase("M")) {
			System.out.println("Mr " + custName + " Your Balance is " + balance);
		} // end of else if
		else if (gender.equalsIgnoreCase("FEMALE") && maritialStatus.equalsIgnoreCase("U")) {
			System.out.println("Miss " + custName + " Your Balance is " + balance);
		} // end of else if
		else {
			System.out.println("Mrs " + custName + " Your Balance is " + balance);
		} // end of else

	}// end of checkBalance

	int loginAdmin(String uAdmin, String pAdmin) {
		if (uAdmin.equals(adminUser) && pAdmin.equals(adminPassword)) {
			return 1;
		} // end of if
		else {
			return -1;
		} // end of else

	}// end of login admin

	static void showAdminMenu() {
		System.out.println("1--------Create Customer");
		System.out.println("2--------Display Customer");
		System.out.println("3--------Search Customer");
		System.out.println("4--------Logout");
	}// end of show admin menu

	void createCustomer() {
		Scanner obj = new Scanner(System.in);
		System.out.println("enter the custild");
		custID = obj.nextInt();
		System.out.println("Enter the account no");
		accountNo = obj.nextInt();
		System.out.println("enter the customer name");
		custName = obj.next();
		System.out.println("Enter the username you want to set");
		custUserName = obj.next();
		System.out.println("enter the password");
		custPassword = obj.next();
		System.out.println("enter the gender");
		gender = obj.next();
		System.out.println("enter the maritial ststus");
		maritialStatus = obj.next();
	}// end of createcustomer

	void displaycustomer() {
		System.out.println(custID + "\t" + accountNo + "\t" + custName + "\t" + custUserName + "\t" + custPassword
				+ "\t" + balance);
	}// end of displaycustomer

	int loginCustomer(String uName, String uPass) {
		if (uName.equals(custUserName) && uPass.equals(custPassword)) {
			return 1;
		} // end of if
		return -1;
	}// end of logincustomer

	int transferMoney(Bank objBank[], int accountNumber) {
		for (int i = 0; i < 2; i++) {
			if (objBank[i].accountNo == accountNumber) {
				return i;
			} // end of if
		} // end of for
		return -1;
	}// end of transferMoney

	float returnBalance() {
		return balance;
	}// end of returnBalance

	void updateBalance(float bal) {
		balance = bal;
	}// end of updateBalance

	static int search(Bank objBank[], int cid) {
		for (int i = 0; i < 2; i++) {
			if (objBank[i].custID == cid) {
				return i;
			} // end of if
		} // end of for
		return -1;
	}// end of search
}// end of class Bank

public class BankApplication {

	public static void main(String[] args) {
		Scanner obj = new Scanner(System.in);
		Bank objBank = new Bank();
		Bank objBank1[] = new Bank[2];
		while (true) {
			System.out.println("1--------Admin Login");
			System.out.println("2--------Customer login");
			System.out.println("3--------EXIT");
			int choice = obj.nextInt();
			switch (choice) {
			case 1:
				System.out.println("Please Enter Username and Password");
				String uAdmin = obj.next();
				String pAdmin = obj.next();
				if (objBank.loginAdmin(uAdmin, pAdmin) == 1) {
					Bank.showAdminMenu();
					System.out.println("Enter The Choice");
					int choiceAdmin = obj.nextInt();
					switch (choiceAdmin) {
					case 1:
						for (int i = 0; i < 2; i++) {
							objBank1[i] = new Bank();
							objBank1[i].createCustomer();
						} // end of for
							// create customer
						break;
					case 2:
						System.out.println("cid\taccount\tcname\tusername\tpassword\tbalance");
						for (int i = 0; i < 2; i++) {
							objBank1[i].displaycustomer();
						} // end of for
							// display customer
						break;
					case 3:
						int cid;
						System.out.println("Enter the id you wanna search ");
						cid = obj.nextInt();
						if (Bank.search(objBank1, cid) >= 0) {
							System.out.println("Customer Exist");
						} // end of if
						else {
							System.out.println("Customer does not exist");
						} // end of else
						break;
					case 4:
						System.exit(0);
					}// end of inner switch
				} // end of if
				else {
					System.out.println("Sorry User and Password are wrong");
				} // end of else
				break;

			case 2:
				int flag = -1;
				System.out.println("Customer login");
				System.out.println(" Enter the user name and password");
				String cUser = obj.next();
				String cPassword = obj.next();
				for (int i = 0; i < 2; i++) {
					if (objBank1[i].loginCustomer(cUser, cPassword) == 1) {
						flag = i;
						break;
					} // end of if
				} // end of for

				if (flag >= 0) {
					System.out.println("1------->Deposit");
					System.out.println("2------->Withdrawl");
					System.out.println("3------->Check Balance");
					System.out.println("4------->Transfer Money");
					System.out.println("5------->Exit");
					System.out.println("Enter the choice");
					int key = obj.nextInt();
					switch (key) {
					case 1:
						objBank1[flag].depositAmount();
						break;
					case 2:
						objBank1[flag].withAmount();
						break;
					case 3:
						objBank1[flag].checkBalance();
						break;
					case 4:
						System.out.println("Enter the account where you want to transfer");
						int accountNo = obj.nextInt();
						int targetIndex = objBank1[flag].transferMoney(objBank1, accountNo);
						if (targetIndex >= 0) {
							float amountTransfer;
							System.out.println("Enter the amount you want to transfer");
							amountTransfer = obj.nextFloat();
							objBank1[flag].updateBalance((objBank1[flag].returnBalance()) - amountTransfer);
							objBank1[targetIndex]
									.updateBalance((objBank1[targetIndex].returnBalance()) + amountTransfer);

						} // end of if
						else {
							System.out.println("Target customer doesnt exist");
						} // end of else

						break;
					case 5:
						System.exit(0);
						break;
					}// end of inner switch key
				} // end of if
				else {
					System.out.println("The crendtials are incorrect");
				} // end of else
			case 3:
				System.exit(0);
				break;
			}// end of choice
		} // end of while
	}// end of static void

}// end of class
