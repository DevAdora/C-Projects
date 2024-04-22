#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int checkin;
int checkout;
int date = 1;
int year = 2021;
int balance = 25000;
string month = "November";
bool code, mcode, ran;

class hotel
{
  public:
	char cname[30];
	char address[30];
	char mob[20];
	char mname[30];

	char add_option;
	int randomNumber = rand();
	int initial;
	int option;
	int choices;
	string password, name;
	char additional;
	int bookchoices;
	int payment = 0;
	int totalpayment = 0;
	int p_add, p_add1, p_add2 = 0;
	int quantity = 0;
	int updated_p = 0;
	int total_p = 0;

	void vacant()
	{
		cout << " °======Deluxe Room======° " << endl;
		cout << " |        Floor 1        | " << endl;
		cout << " °=======================° " << endl;
		cout << " Deluxe room (1-3 PAX) - Available" << endl;
		cout << " Deluxe room (4-6 PAX) - Available" << endl;
		cout << " Deluxe room (7-10 PAX) - Available" << endl;
		cout << " -------------------------------------\n\n";

		cout << " °======Deluxe Room======° " << endl;
		cout << " |        Floor 2        | " << endl;
		cout << " °=======================° " << endl;
		cout << " Deluxe room (1-3 PAX) - Available" << endl;
		cout << " Deluxe room (4-6 PAX) - Available" << endl;
		cout << " Deluxe room (7-10 PAX) - Available" << endl;
		cout << " ------------------------------------- \n\n";

		cout << " °======Regular Room======° " << endl;
		cout << " |        Floor 1        | " << endl;
		cout << " °=======================° " << endl;
		cout << " Regular room (1-3 PAX) - Available" << endl;
		cout << " Regular room (4-6 PAX) - Available" << endl;
		cout << " Regular room (7-10 PAX) - Available" << endl;
		cout << " ------------------------------------- \n\n";

		cout << " °======Regular Room======° " << endl;
		cout << " |        Floor 2        | " << endl;
		cout << " °=======================° " << endl;
		cout << " Regular room (1-3 PAX) - Available" << endl;
		cout << " Regular room (4-6 PAX) - Available" << endl;
		cout << " Regular room (7-10 PAX) - Available" << endl;
		cout << " ------------------------------------- \n\n";
		cout << "[1] Check Deluxe Room Details" << endl;
		cout << "[2] Check Regular Room Details" << endl;
		cout << "[3] Book" << endl;
		cout << "[4] Cancel/Exit" << endl;
		cout << "------->";
		cin >> option;
		cin.ignore();

		switch (option)
		{
		case 1:
			deluxedetails();
			break;

		case 2:
			regulardetails();
			break;

		case 3:
			book();
			break;

		case 4:
			cancel_exit();
			break;

		default:
			cout << "Invalid, must select [1, 2, 3, 4]" << endl;
			system("pause>0");
			system("cls");
			vacant();
		}
	}
	void deluxedetails()
	{
		system("cls");
		cout << "°====== DELUXE ROOM DETAILS ======°" << endl;
		cout << "  1-3 PAX               3-6 PAX                   7-10 PAX" << endl;
		cout << "| Twin Beds   |   King Size & Twin Beds   |  King Size & Two Twin Beds |" << endl;
		cout << " ++++ Airconditioned " << endl;
		cout << " ++++ Luxurious Sea Side View " << endl;
		cout << " ++++ Smart TV " << endl;
		cout << " ++++ Spacious & Airy " << endl;
		cout << " ++++ Seating Area " << endl;
		cout << " ++++ Fast Internet Access " << endl;
		cout << " ++++ Private Bathroom " << endl;
		cout << " [1] Go back" << endl;
		cout << " -----> ";
		cin >> choices;
		if (choices == 1)
		{
			system("cls");
			return vacant();
		}
		else if (" ")
		{
			cout << " Invalid Input!";
			exit(0);
		}
	}
	void regulardetails()
	{
		system("cls");
		cout << "°====== REGULAR ROOM DETAILS ======°" << endl;
		cout << "1-3 PAX         3-6 PAX           7-10 PAX " << endl;
		cout << " 2 Beds     |     4 Beds      |     6 Beds" << endl;
		cout << " ++++ Airconditioned " << endl;
		cout << " ++++ Internet Access " << endl;
		cout << " ++++ TV with Cable " << endl;
		cout << " ++++ Private Bathroom " << endl;
		cout << " [1] Go back" << endl;
		cout << " ----->";
		cin >> choices;
		if (choices == 1)
		{
			system("cls");
			return vacant();
		}
		else if (" ")
		{
			cout << " Invalid Input!";
			exit(0);
		}
	}
	void customer_record()
	{
		updated_p = p_add + p_add1 + p_add2;
		int choose;
		cout << "°========================°" << endl;
		cout << "| [1] Additional Option  |" << endl;
		cout << "| [2] Check Booking Info |" << endl;
		cout << "| [3] Confirm Bookings   |" << endl;
		cout << "| [4] Cancel/Exit        |" << endl;
		cout << "°========================°" << endl;
		cout << "|     BOOKING NUMBER :   |" << endl;
		cout << "|\t   " << randomNumber << "\t\t |" << endl;
		cout << "°========================°" << endl;
		cout << "------->";
		cin >> choose;
		cin.ignore();
		if (choose == 1)
		{
			std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
			system("cls");
			cout << "°===== ADDITIONAL OPTION=====°" << endl;
			cout << "[A]Bed (P500) " << endl;
			cout << "[B]Chair (P50)" << endl;
			cout << "[C]Table (P250)" << endl;
			cout << "-------->";
			cin >> additional;
			if (additional == 'A' || additional == 'a')
			{
				cout << "How many?" << endl;
				cout << "------->";
				cin >> quantity;
				p_add = quantity * 500;
				cout << "Additional Payment : " << p_add << endl;
				cout << "Confirm Additional Option? [Y/N]" << endl;
				cout << "----->";
				cin >> add_option;
				if (add_option == 'Y' || add_option == 'y')
				{
					totalpayment = totalpayment + p_add;
					cout << "Confirmed!" << endl;
					std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
					system("cls");
					return customer_record();
				}
				else if (" ")
				{
					p_add = 0;
					cout << "Additional Option Cancelled" << endl;
					std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
					system("cls");
					return customer_record();
				}
			}
			if (additional == 'B' || additional == 'b')
			{
				cout << "How many?" << endl;
				cout << "------->";
				cin >> quantity;
				p_add1 = quantity * 50;
				cout << "Additional Payment : " << p_add1 << endl;
				cout << "Confirm Additional Option? [Y/N]" << endl;
				cout << "----->";
				cin >> add_option;
				if (add_option == 'Y' || add_option == 'y')
				{
					totalpayment = totalpayment + p_add1;
					cout << "Confirmed!" << endl;
					std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
					system("cls");
					return customer_record();
				}
				else if (" ")
				{
					p_add1 = 0;
					cout << "Additional Option Cancelled" << endl;
					std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
					system("cls");
					return customer_record();
				}
			}
			if (additional == 'C' || additional == 'c')
			{
				cout << "How many?" << endl;
				cout << "------->";
				cin >> quantity;
				p_add2 = quantity * 250;
				cout << "Additional Payment : " << p_add2 << endl;
				cout << "Confirm Additional Option? [Y/N]" << endl;
				cout << "----->";
				cin >> add_option;
				if (add_option == 'Y' || add_option == 'y')
				{
					totalpayment = totalpayment + p_add2;
					cout << "Confirmed!" << endl;
					std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
					system("cls");
					return customer_record();
				}
				else if (" ")
				{
					p_add2 = 0;
					cout << "Additional Option Cancelled" << endl;
					std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
					system("cls");
					return customer_record();
				}
			}
			else if (" ")
			{
				cout << "Invalid Input!";
				exit(0);
			}
		}
		if (choose == 2)
		{
			int rn;
			system("cls");
			cout << "Booking Number : ";
			cin >> rn;
			if (rn == randomNumber)
			{
				ran = true;
			}
			else
				ran = false;
			if (ran == true)
			{
				std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
				booking_info();
				cout << "Additional Payment :" << updated_p << endl;
				cout << endl;
				cout << "[1] Go back" << endl;
				cout << "----->";
				cin >> option;
				if (option == 1)
				{
					system("cls");
					customer_record();
				}
				else if (" ")
				{
					cout << "Invalid Input!";
					exit(0);
				}
			}
			if (ran == false)
			{
				cout << "Booking Number does not exist!" << endl;
				std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
				system("cls");
				return customer_record();
			}
		}
		if (choose == 3)
		{
			std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
			cout << "•==============================•" << endl;
			cout << "| Enter Manager Name : ";
			cin.getline(mname, 30);
			cout << endl;
			std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
			system("cls");
			cout << "-------------------------------------------------" << endl;
			cout << " To Confirm Bookings, we require 50% Downpayment" << endl;
			cout << "-------------------------------------------------" << endl;
			cout << "Management User : " << mname << endl;
			cout << endl;
			cout << " [1] Pay" << endl;
			cout << " [2] Management Account" << endl;
			cout << " [3] Cancel/Exit" << endl;
			cout << "----->";
			cin >> option;
			cin.ignore();
			if (option == 1)
			{
				system("cls");
				confirm_bookings();
			}
			if (option == 2)
			{
				system("cls");
				cout << "•==============================•" << endl;
				cout << "| Input Manager Username : ";
				getline(cin, name);
				if (name == mname)
				{
					cout << endl;
					cout << "•==============================•" << endl;
					cout << "| Input Password : ";
					cin >> password;
					cout << endl;
					if (password == "resort")
					{
						mcode = true;
					}
					else
						mcode = false;

					if (mcode == true)
					{
						system("cls");
						management();
					}
					else if (mcode == false)
					{
						cout << "Incorrect Password!";
						exit(0);
					}
				}
				else if (" ")
				{
					cout << "Username not Recognized! " << endl;
					exit(0);
				}
			}
			if (option == 3)
			{
				system("cls");
				cancel_exit();
			}
			else if (" ")
			{
				cout << " Invalid Input!";
				exit(0);
			}
		}
		if (choose == 4)
		{
			cancel_exit();
		}
		else if (' ')
		{
			cout << "Invalid Choices! Input only 1-4" << endl;
			customer_record();
		}
	}

	void booking_info()
	{
		cout << endl;
		cout << " Guests Info" << endl;
		cout << endl;
		cout << "------------------------------------------------------------" << endl;
		cout << endl;
		cout << "Reservation: " << bookchoices << endl;
		cout << endl;
		cout << "Guest is: " << cname << endl;
		cout << endl;
		cout << "Mobile No.: +" << mob << endl;
		cout << endl;
		cout << "Check-in Date: " << month << " " << checkin << "," << year << endl;
		cout << endl;
		cout << "Check-out Date:" << month << " " << checkout << "," << year << endl;
		cout << endl;
		cout << "Payment : " << totalpayment;
		cout << endl;
		cout << endl;
	}
	void book()
	{
		system("cls");
		cout << " [101] Deluxe room (1-3 PAX) - Available [Price : 2500]" << endl;
		cout << " [102] Deluxe room (4-6 PAX) - Available [Price : 4000]" << endl;
		cout << " [103] Deluxe room (7-10 PAX) - Available [Price : 6000]" << endl;
		cout << " -------------------------------------\n\n";

		cout << " [104] Deluxe room (1-3 PAX) - Available [Price : 2500]" << endl;
		cout << " [105] Deluxe room (4-6 PAX) - Available [Price : 4000]" << endl;
		cout << " [106] Deluxe room (7-10 PAX) - Available [Price : 6000]" << endl;
		cout << " ------------------------------------- \n\n";

		cout << " [201] Regular room (1-3 PAX) - Available [Price : 1500]" << endl;
		cout << " [202] Regular room (4-6 PAX) - Available [Price : 2500]" << endl;
		cout << " [203] Regular room (7-10 PAX) - Available [Price : 4000]" << endl;
		cout << " ------------------------------------- \n\n";

		cout << " [204] Regular room (1-3 PAX) - Available [Price : 1500]" << endl;
		cout << " [205] Regular room (4-6 PAX) - Available [Price : 2500]" << endl;
		cout << " [206] Regular room (7-10 PAX) - Available [Price : 4000]" << endl;
		cout << " ------------------------------------- \n\n";
		book_fill();
	}
	void book_fill()
	{
		cout << " [NOTE! Please input the corresponding code for room]" << endl;
		cout << " Room Code to be Reserved: ";
		cin >> bookchoices;
		cin.ignore();
		if (bookchoices == 101 || bookchoices == 102 || bookchoices == 103 || bookchoices == 104 || bookchoices == 105 || bookchoices == 106 || bookchoices == 201 || bookchoices == 202 || bookchoices == 203 || bookchoices == 204 || bookchoices == 205 || bookchoices == 206)
		{
			cout << endl;
		}
		else if (' ')
		{
			cout << "Invalid Code Room";
			exit(0);
		}
		if (bookchoices == 201 || bookchoices == 204)
		{
			payment = 1500;
		}
		if (bookchoices == 202 || bookchoices == 205)
		{
			payment = 2500;
		}
		if (bookchoices == 203 || bookchoices == 206)
		{
			payment = 4000;
		}
		if (bookchoices == 101 || bookchoices == 104)
		{
			payment = 2500;
		}
		if (bookchoices == 102 || bookchoices == 105)
		{
			payment = 4000;
		}
		if (bookchoices == 103 || bookchoices == 106)
		{
			payment = 6000;
		}
		cout << "---------------------" << endl;
		cout << "Customer's Name : ";
		cin.getline(cname, 30);
		cout << endl;
		cout << "Adress : ";
		cin.getline(address, 30);
		cout << endl;
		cout << "Enter The Mobile no.: +";
		cin.getline(mob, 20);
		cout << endl;
		cout << "Check-in Date: " << month << " " << checkin << "," << year << endl;
		cout << endl;
		cout << "Check-out Date:" << month << " " << checkout << "," << year << endl;
		cout << endl;
		initial = checkout - checkin;
		totalpayment = payment * initial;
		cout << "Payment :" << totalpayment;
		cout << endl;
		cout << endl;
		srand(time(NULL));
		for (int index = 0; index < 3; index++)
		{
			randomNumber = (rand() % 9) + 1;
		}
		cout << "Booking Number : " << randomNumber << endl;
		cout << endl;
		int a;
		cout << "[1]Save or [2]Cancel " << endl;
		cout << "------>";
		cin >> a;
		if (a == 1)
		{
			cout << "Booking Saved!" << endl;
			cout << "Any Key to proceed! " << endl;
			system("pause>0");
			system("cls");
			std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
			customer_record();
		}
		else
		{
			cout << "Not Saved" << endl;
			cout << "_________" << endl;
			cout << endl;
		}
	}
	void confirm_bookings()
	{
		int yn;
		int downpayment = 0;
		int payment_left = 0;
		system("cls");
		int t_balance;
		string pincode;
		cout << " °=================°" << endl;
		cout << " |       OCA       |" << endl;
		cout << " °=================°" << endl;
		cout << "Please input PIN Code  : ";
		cin >> pincode;
		if (pincode == "1234")
		{
			code = true;
		}
		else
			code = false;

		if (code == true)
		{
			system("cls");
			cout << "°===========================°" << endl;
			cout << "|ONLINE CASH ACCOUNT DETAILS|" << endl;
			cout << "°===========================°" << endl;
			cout << "Name : " << cname << endl;
			cout << "Balance : " << balance << endl;
			cout << "[1] Pay" << endl;
			cout << "----->";
			cin >> option;
			if (option == 1)
			{
				downpayment = totalpayment / 2;
				payment_left = totalpayment / 2;
				t_balance = balance - downpayment;
				cout << "PROCESSING... PROCESSING..." << endl;
				std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
				system("cls");
				cout << "Payment's been deducted to your online cash account " << endl;
				cout << endl;
				cout << "Balance left : " << t_balance << endl;
				cout << endl;
				cout << "Payment left : " << payment_left << endl;
				cout << endl;
				cout << "BOOKINGS CONFIRMED! " << endl;
				cout << endl;
				cout << "THANK YOU FOR BOOKING! SEE YOU!";
				cout << endl;
				cout << endl;
				cout << "[1] Management Section " << endl;
				cout << "[2] Log out / Exit " << endl;
				cout << "------>";
				cin >> yn;
				cin.ignore();
				if (yn == 1)
				{
					std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
					system("cls");
					cout << "•==============================•" << endl;
					cout << "| Input Manager Username : ";
					getline(cin, name);
					if (name == mname)
					{
						cout << endl;
						cout << "•==============================•" << endl;
						cout << "| Input Password : ";
						cin >> password;
						cout << endl;
						if (password == "resort")
						{
							mcode = true;
						}
						else
							mcode = false;

						if (mcode == true)
						{
							system("cls");
							management();
						}
						else if (mcode == false)
						{
							cout << "Incorrect Password!";
							exit(0);
						}
						else if (" ")
						{
							cout << " Invalid Input!";
							exit(0);
						}
					}
					else if (" ")
					{
						cout << "Username not Recognized! " << endl;
						exit(0);
					}
				}
				else if (yn == 2)
				{
					std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
					system("cls");
					cancel_exit();
				}
				else if (' ')
				{
					cout << "Invalid Choices";
					exit(0);
				}
			}
			else if (" ")
			{
				cout << "Invalid input!";
				exit(0);
			}
		}
		if (code == false)
		{
			cout << "Incorrect Password!" << endl;
			cout << "Try Again.. (Any Key)" << endl;
			system("pause>0");
			system("cls");
			confirm_bookings();
		}
	}
	void management()
{
	int mchoices;
	int booking;
	int pg;

	cout << "°==================°" << endl;
	cout << "|     MANAGEMENT   |" << endl;
	cout << "°==================°" << endl;
	cout << "User : " << mname << endl;
	cout << endl;
	cout << "•---------------------•" << endl;
	cout << "| [1] Check Bookings  |" << endl;
	cout << "| [2] Log out / Exit  |" << endl;
	cout << "•---------------------•" << endl;
	cout << "----->";
	cin >> mchoices;
	if (mchoices == 1)
	{
		cout << "•---------------•" << endl;
		cout << "|    Bookings   |" << endl;
		cout << "•---------------•" << endl;
		cout << endl;
		cout << "[1] Pending Bookings" << endl;
		cout << "[2] Confirmed Bookings" << endl;
		cout << "[3] Go back" << endl;
		cout << "----->";
		cin >> booking;
		if (booking == 1)
		{
			cout << "•------------------•" << endl;
			cout << "| Pending Bookings |" << endl;
			cout << "•------------------•" << endl;
			if (option == 1)
			{
				cout << "No pending bookings" << endl;
				cout << "Press [1] to go back" << endl;
				cout << "----->";
				cin >> pg;
				if (pg == 1)
				{
					system("cls");
					management();
				}
				else if (pg == ' ')
				{
					cout << "Invalid " << endl;
					cout << "Any key to proceed" << endl;
					system("pause>0");
					system("cls");
					management();
				}
			}
			else if (option == ' ')
			{
				booking_info();
				cout << "Payment Status : Not paid" << endl;
				cout << endl;
				cout << "Press [1] to pay" << endl;
				cout << "Press [2] to go back" << endl;
				cout << "----->";
				cin >> pg;
				if (pg == 1)
				{
					system("cls");
					confirm_bookings();
				}
				else if (pg == 2)
				{
					system("cls");
					management();
				}
			}
			else if (option == 2)
			{
				booking_info();
				cout << "Payment Status : Not paid" << endl;
				cout << endl;
				cout << "Press [1] to pay" << endl;
				cout << "Press [2] to go back" << endl;
				cout << "----->";
				cin >> pg;
				if (pg == 1)
				{
					system("cls");
					confirm_bookings();
				}
				else if (pg == 2)
				{
					system("cls");
					management();
				}
			}
		}
		else if (booking == 2)
		{
			cout << "•--------------------•" << endl;
			cout << "| Confirmed Bookings |" << endl;
			cout << "•--------------------•" << endl;
			if (option == 1)
			{
				booking_info();
				cout << "Payment Status : 50% Paid " << endl;
				cout << "Press [1] to go back" << endl;
				cout << "----->";
				cin >> pg;
				if (pg == 1)
				{
					system("cls");
					management();
				}
				else if (pg == ' ')
				{
					cout << "Invalid " << endl;
					cout << "Any key to proceed" << endl;
					system("pause>0");
					system("cls");
					management();
				}
			}
			else if (option == ' ')
			{
				cout << "-------------+-------" << endl;
				cout << "No bookings confirmed" << endl;
				cout << "Press [1] to go back" << endl;
				cout << "----->";
				cin >> pg;
				if (pg == 1)
				{
					system("cls");
					management();
				}
				else if (pg == ' ')
				{
					cout << "Invalid " << endl;
					cout << "Any key to proceed" << endl;
					system("pause>0");
					system("cls");
					management();
				}
			}
			else if (option == 2)
			{
				cout << "--------------------- " << endl;
				cout << "No bookings confirmed" << endl;
				cout << "Press [1] to go back" << endl;
				cout << "----->";
				cin >> pg;
				if (pg == 1)
				{
					system("cls");
					management();
				}
				else if (pg == ' ')
				{
					cout << "Invalid " << endl;
					cout << "Any key to proceed" << endl;
					system("pause>0");
					system("cls");
					management();
				}
			}
		}
		if (booking == 3)
		{
			std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
			system("cls");
			management();
		}
		else if (" ")
		{
			cout << "Invalid Option!";
			system("cls");
			return management();
		}
	}
	if (mchoices == 2)
	{
		cout << "Logging out... Logging out...";
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("cls");
		exit(0);
	}
	else if (" ")
	{
		cout << "Invalid Input!";
		exit(0);
	}
}
void cancel_exit()
{
	std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
	system("cls");
	cout << "Thank you for checking!";
	exit(0);
}
}
;
bool dial;
int main()
{
	hotel booking;
	char yn;
	string dialnumber;

	cout << "°===================================°" << endl;
	cout << "|                                   |" << endl;
	cout << "|         AOGIRI RESORT TREE        |" << endl;
	cout << "|                                   |" << endl;
	cout << "°===================================°" << endl;
	cout << endl;
	cout << "•-------------------------------•" << endl;
	cout << "| Would you like to book? [Y/N] | " << endl;
	cout << "•-------------------------------•" << endl;
	cout << "|----->";
	cin >> yn;
	if (yn == 'Y' || yn == 'y')
	{
		std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
		system("cls");
	}
	else if (yn == 'N' || yn == 'n')
	{
		std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
		system("cls");
		cout << "Thank you!";
		return 0;
	}
	else if (" ")
	{
		cout << "Invalid Input!";
		return 0;
	}
	cout << "WELCOME T0" << endl;
	cout << "°===================================°" << endl;
	cout << "|                                   |" << endl;
	cout << "|         AOGIRI RESORT TREE        |" << endl;
	cout << "|                                   |" << endl;
	cout << "°===================================°" << endl;
	cout << "|" << endl;
	cout << "|" << endl;
	cout << "|" << endl;
	cout << "------> Input DATE " << endl;
	cout << "Date Today : November " << date << "," << year << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "| Check-in Date " << endl;
	cout << "| Month : ";
	cout << month << endl;
	cout << "| Date : ";
	while (!(cin >> checkin))
	{
		cout << " Error, NUMBERS only!" << endl;
		cout << " Enter Date : ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	if (checkin > 31)
	{
		cout << "Invalid Date input!";
		return 0;
	}
	else if (checkin < date || checkin == date)
	{
		cout << "Invalid Input!";
		return 0;
	}
	cout << "| Year : " << year << endl;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "| Check-out Date " << endl;
	cout << "| Month : ";
	cout << month << endl;
	cout << "| Date : ";
	while (!(cin >> checkout))
	{
		cout << " Error, NUMBERS only!" << endl;
		cout << " Enter amount: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	if (checkout > 31)
	{
		cout << "Invalid Date Input";
		return 0;
	}
	else if (checkout < checkin)
	{
		cout << "Invalid Input!";
		return 0;
	}
	cout << "| Year : " << year << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "Check-in Date :" << month << " " << checkin << "," << year << endl;
	cout << "Check-out Date :" << month << " " << checkout << "," << year << endl;
	std ::this_thread::sleep_for(std::chrono::milliseconds(2000));

	if (checkin > date)
	{
		cout << "Checking vacant rooms...";
		cout << "Checking vacant rooms..." << endl;
		std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
		system("cls");
		booking.vacant();
	}
}
