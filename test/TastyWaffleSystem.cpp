#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int choice;
	bool looper = false;
	bool looper2 = false;
	bool looper3 = false;

	int orderNumber = 1;
	int currentOrder;
	int quantity;

	int totalOrders[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int totalSold[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	string waffleDictionary[12] = { "Vanilla", "Chocolate", "Peanut Butter", "Buttermilk", "Blueberry", "Strawberry", "Pumpkin", "Coconut", "Orange Zest", "Mocha", "Durian", "Bacon and Cheese" };
	float wafflePrice[12] = { 3.00, 3.00, 4.00, 5.00, 5.00, 5.00, 5.50, 6.00, 6.00, 6.50, 8.00, 10.00 };

	cout << "___________                __          " << endl;
	cout << "/__    ___/____    _______/  |_ ___.__." << endl;
	cout << "  |    |  /__  /  /  ___//   __<   |  |" << endl;
	cout << "  |    |   / __ /_/___ /  |  |  /___  |" << endl;
	cout << "  |____|  (____  /____  > |__|  / ____|" << endl;
	cout << "               //     //        //     " << endl;
	cout << " __      __         _____  _____.__          " << endl;
	cout << "/  /    /  /_____ _/ ____// ____/  |   ____  " << endl;
	cout << "/   ////   //__  //   __//   __/|  | _/ __ / " << endl;
	cout << " /        /  / __ /|  |   |  |  |  |_/  ___/ " << endl;
	cout << "  /__//  /  (____  /__|   |__|  |____//___  >" << endl;
	cout << "       //        //                       // " << endl;
	cout << "Welcome to Tasty Waffle menu" << endl;

	while (looper == false)
	{
		looper2 = false;

		cout << endl;
		cout << "------" << endl;
		cout << "1. Order entry" << endl;
		cout << "2. Reporting" << endl;
		cout << "3. Exit" << endl;

		cout << endl;
		cout << "Type your choice here: ";
		cin >> choice;

		if (choice == 1)
		{
			cout << endl;
			cout << "MENU" << endl;
			cout << left << setw(22) << "Classic Flavors" << setw(22) << "Price (RM)" << setw(22) << "Special Flavors" << setw(22) << "Price (RM)" << endl;
			cout << setw(22) << "------" << setw(22) << "------" << setw(22) << "------" << setw(22) << "------" << endl;
			cout << setw(22) << "1. Vanilla" << setw(22) << "RM 3.00" << setw(22) << "7. Pumpkin" << setw(22) << "RM 5.50" << endl;
			cout << setw(22) << "2. Chocolate" << setw(22) << "RM 3.00" << setw(22) << "8. Coconut" << setw(22) << "RM 6.00" << endl;
			cout << setw(22) << "3. Peanut Butter" << setw(22) << "RM 4.00" << setw(22) << "9. Orange Zest" << setw(22) << "RM 6.00" << endl;
			cout << setw(22) << "4. Buttermilk" << setw(22) << "RM 5.00" << setw(22) << "10. Mocha" << setw(22) << "RM 6.50" << endl;
			cout << setw(22) << "5. Blueberry" << setw(22) << "RM 5.00" << setw(22) << "11. Durian" << setw(22) << "RM 8.00" << endl;
			cout << setw(22) << "6. Strawberry" << setw(22) << "RM 5.00" << setw(22) << "12. Bacon and Cheese" << setw(22) << "RM 10.00" << endl;

			while (looper2 == false)
			{
				looper3 = false;

				cout << endl;
				cout << "Order " << orderNumber << endl;
				cout << "Enter flavor (Type number): ";
				cin >> currentOrder;
				cout << "Quantity: ";
				cin >> quantity;

				int tempNum;
				tempNum = currentOrder - 1;
				totalOrders[tempNum] += quantity;

				while (looper3 == false)
				{
					char confirmation;
					cout << endl;
					cout << "Anymore order? (Y/N) > ";
					cin >> confirmation;

					if (confirmation == 'Y' || confirmation == 'y')
					{
						looper3 = true;
						orderNumber += 1;
					}
					else if (confirmation == 'N' || confirmation == 'n')
					{
						looper3 = true;

						cout << endl;
						cout << ".___                  .__              " << endl;
						cout << "|   | _______  ______ |__| ____  ____  " << endl;
						cout << "|   |/    /  // /  _ /|  |/ ___// __ / " << endl;
						cout << "|   |   |  /   (  <_> )  /  /__/  ___/ " << endl;
						cout << "|___|___|  //_/ /____/|__|/___  >___  >" << endl;
						cout << "         //                   //    // " << endl;

						cout << endl;
						cout << "Tasty Waffle" << endl;
						cout << "Tel: 03-12345678" << endl;

						cout << endl;
						cout << left << setw(50) << "DESCRIPTION" << setw(50) << "AMOUNT" << endl;
						cout << setw(50) << "------" << setw(50) << "------" << endl;

						int totalItems = 0;
						float totalPrice = 0.0;

						for (int i = 1; i <= 12; i++)
						{
							int tempNumber2;
							tempNumber2 = i - 1;

							if (totalOrders[tempNumber2] >= 1)
							{
								totalItems += 1;
								totalPrice += wafflePrice[tempNumber2] * totalOrders[tempNumber2];
								cout << setw(50) << waffleDictionary[tempNumber2] << " (" << totalOrders[tempNumber2] << " x RM" << wafflePrice[tempNumber2] << ")" << endl;
							}
						}

						cout << setw(50) << "------" << setw(50) << "------" << endl;
						cout << "TOTAL ITEMS: " << totalItems << endl;
						cout << "TOTAL PAYABLE: RM" << totalPrice << endl;

						int tempNumber3;
						bool tempLooper = false;
						string paymentMethod;

						while (tempLooper == false)
						{
							cout << "------" << endl;
							cout << "Please select payment method. " << endl;

							cout << setw(20) << "PAYMENT METHOD" << endl;
							cout << setw(20) << "------" << endl;
							cout << setw(20) << "1. Cash (Recommended)" << endl;
							cout << setw(20) << "2. Tng e-wallet (Recommended)" << endl;
							cout << setw(20) << "3. Credit card" << endl;
							cout << setw(20) << "4. Debit card" << endl;

							cin >> tempNumber3;
							if (tempNumber3 == 1)
							{
								tempLooper = true;
								paymentMethod = "Cash";
							}
							else if (tempNumber3 == 2)
							{
								tempLooper = true;
								paymentMethod = "Tng e-wallet";
							}
							else if (tempNumber3 == 3)
							{
								tempLooper = true;
								paymentMethod = "Credit card";
							}
							else if (tempNumber3 == 4)
							{
								tempLooper = true;
								paymentMethod = "Debit card";
							}
							else
							{
								cout << "Invalid number, please type again." << endl << endl;
							}
						}

						cout << endl;
						cout << "__________                    .__        __   " << endl;
						cout << "/______   / ____   ____  ____ |__|______/  |_ " << endl;
						cout << " |       _// __ /_/ ___// __ /|  /____ /   __/" << endl;
						cout << " |    |   /  ___//  /__/  ___/|  |  |_> >  |  " << endl;
						cout << " |____|_  //___  >/___  >___  >__|   __/|__|  " << endl;
						cout << "        //     //     //    //   |__|         " << endl;

						cout << endl;
						cout << "Tasty Waffle" << endl;
						cout << "Tel: 03-12345678" << endl;

						cout << endl;
						cout << left << setw(50) << "DESCRIPTION" << setw(50) << "AMOUNT" << endl;
						cout << setw(50) << "------" << setw(50) << "------" << endl;

						for (int i = 1; i <= 12; i++)
						{
							int tempNumber4;
							tempNumber4 = i - 1;

							if (totalOrders[tempNumber4] >= 1)
							{
								cout << setw(50) << waffleDictionary[tempNumber4] << " (" << totalOrders[tempNumber4] << " x RM" << wafflePrice[tempNumber4] << ")" << endl;
							}
						}

						cout << setw(50) << "------" << setw(50) << "------" << endl;
						cout << "TOTAL ITEMS: " << totalItems << endl;
						cout << "TOTAL PAYABLE: RM" << totalPrice << endl;

						cout << "PAYMENT METHOD: " << paymentMethod << endl;
						cout << "PAYMENT AMOUNT: RM" << totalPrice << endl;

						for (int i = 1; i <= 12; i++)
						{
							int tempNumber4;
							tempNumber4 = i - 1;

							totalSold[tempNumber4] += totalOrders[tempNumber4];
						}

						bool lastLooper = false;

						while (lastLooper == false)
						{
							char tempAnswer;
							cout << endl;
							cout << "Continue to next customer? (Y/N)";
							cin >> tempAnswer;

							if (tempAnswer == 'Y' || tempAnswer == 'y')
							{
								for (int i = 1; i <= 12; i++)
								{
									int tempNumber99;
									tempNumber99 = i - 1;

									totalOrders[tempNumber99] = 0;
								}

								orderNumber = 1;
								lastLooper = true;
								looper2 = true;

								cout << "___________                __          " << endl;
								cout << "/__    ___/____    _______/  |_ ___.__." << endl;
								cout << "  |    |  /__  /  /  ___//   __<   |  |" << endl;
								cout << "  |    |   / __ /_/___ /  |  |  /___  |" << endl;
								cout << "  |____|  (____  /____  > |__|  / ____|" << endl;
								cout << "               //     //        //     " << endl;
								cout << " __      __         _____  _____.__          " << endl;
								cout << "/  /    /  /_____ _/ ____// ____/  |   ____  " << endl;
								cout << "/   ////   //__  //   __//   __/|  | _/ __ / " << endl;
								cout << " /        /  / __ /|  |   |  |  |  |_/  ___/ " << endl;
								cout << "  /__//  /  (____  /__|   |__|  |____//___  >" << endl;
								cout << "       //        //                       // " << endl;
								cout << "Welcome to Tasty Waffle menu" << endl;

							}
							else if (tempAnswer == 'N' || tempAnswer == 'n')
							{

							}
							else
							{
								cout << "Invalid argument, please type again." << endl << endl;
							}
						}

					}
					else
					{
						cout << "Invalid argument, please type again." << endl << endl;
					}
				}

			}

		}
		else if (choice == 2)
		{
			cout << endl;
			cout << "------" << endl;
			cout << left << setw(22) << "Classic Flavors" << setw(22) << "Total Sold" << setw(22) << "Special Flavors" << setw(22) << "Total Sold" << endl;
			cout << setw(22) << "------" << setw(22) << "------" << setw(22) << "------" << setw(22) << "------" << endl;
			cout << setw(22) << "1. Vanilla" << setw(22) << totalSold[0] << setw(22) << "7. Pumpkin" << setw(22) << totalSold[6] << endl;
			cout << setw(22) << "2. Chocolate" << setw(22) << totalSold[1] << setw(22) << "8. Coconut" << setw(22) << totalSold[7] << endl;
			cout << setw(22) << "3. Peanut Butter" << setw(22) << totalSold[2] << setw(22) << "9. Orange Zest" << setw(22) << totalSold[8] << endl;
			cout << setw(22) << "4. Buttermilk" << setw(22) << totalSold[3] << setw(22) << "10. Mocha" << setw(22) << totalSold[9] << endl;
			cout << setw(22) << "5. Blueberry" << setw(22) << totalSold[4] << setw(22) << "11. Durian" << setw(22) << totalSold[10] << endl;
			cout << setw(22) << "6. Strawberry" << setw(22) << totalSold[5] << setw(22) << "12. Bacon and Cheese" << setw(22) << totalSold[11] << endl;

			float tempEarned = 0.0;
			for (int i = 1; i <= 12; i++)
			{
				int tempNumber69;
				tempNumber69 = i - 1;

				tempEarned = totalSold[tempNumber69] * wafflePrice[tempNumber69];
			}

			cout << setw(22) << "------" << endl;
			cout << "TOTAL AMOUNT EARNED: RM" << tempEarned << endl;
			cout << "------" << endl;

			cout << endl;
			cout << "GRAPH" << endl;
			cout << "------" << endl;
			for (int i = 1; i <= 12; i++)
			{
				int tempNumber96;
				tempNumber96 = i - 1;

				string tempString1;

				for (int i = 1; i <= totalSold[tempNumber96]; i++)
				{
					tempString1 = tempString1 + "*";
				}
				cout << setw(20) << waffleDictionary[tempNumber96] << " | " << tempString1 << endl;
			}
			cout << "------" << endl;
		}
		else if (choice == 3)
		{
			cout << "Thank you for using Tasty Waffle menu!" << endl;
			looper = true;
		}
		else
		{
			cout << "Invalid number, please type again." << endl << endl;
		}
	}

	return 0;
}