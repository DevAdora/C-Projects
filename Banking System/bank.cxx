#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <string>
using namespace std;
string name, name1, pass, pin;
int balance = 29000;
int balance1 = 12000;
int amount, withdraw, withdraw1, amt;
int result = 0;
int result1 = 0;
int totalbalance = 0;
void Deposit();
void Withdraw();
void Transfer();
void Tdisplay();
void DepositTrans();
void WithdrawalTrans();
void TransferTrans();
void Exit();
void ChangeAccount();
void AccountDetails();
bool acc, acc1, ran;


struct group_thousands : std::numpunct<char> 
{
	 std::string do_grouping() const override { return "\3"; } };

int main()
{
	 std::cout.imbue(std::locale(std::cout.getloc(), new group_thousands));
	cout << "------------------------" << endl;
	cout << "|                      |" << endl;
	cout << "|  Welcome to G3 Bank! |" << endl;
	cout << "|                      |" << endl;
	cout << "------------------------" << endl;
	cout << "Please Enter your bank account \n";
	cout << "----------------------------- \n";
	cout << "PIN Code:";
	cin >> pass;
	if (pass == "123456")
	{
		acc = true;
	}
	else
		acc = false;

	if (acc == true)
	{
		cout << "Checking account... Checking account" << endl;
		std ::this_thread::sleep_for(std::chrono::milliseconds(2000));
		system("cls");
		cout << "Please enter your name for confirmation: ";
		cin >> name;
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("pause");
		system("cls");
	}
	else if (" ")
	{
		cout << " Checking account... Checking account.." << endl;
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << " Account not recognized... \n";
		cout << " Account not recognized... \n";

		return 0;
	}

	char yn;
	char choices;
	char option;
	cout << "---- Welcome! Group3 User ---- " << endl;
	cout << " Account Details " << endl;
	cout << " Name : " << name << endl;
	cout << " Balance : " << balance << endl;
	cout << " PIN Code : " << pass << endl;
	cout << " -------------------------------" << endl;
	cout << " ---- PLEASE CHOOSE AN OPTION ----" << endl;
	cout << "[1] Deposit" << endl;
	cout << "[2] Withdraw" << endl;
	cout << "[3] Transfer" << endl;
	cout << "[4] Exit" << endl;
	cout << "-------> ";
	cin >> choices;

	switch (choices)
	{
	case '1':
		Deposit();
		break;

	case '2':
		Withdraw();
		break;

	case '3':
		Transfer();
		break;

	case '4':
		Exit();
		break;

	default:
		system("cls");
		cout << " Invalid Choices \n";
		return 0;
	}

	cout << " Would you like to see the account details? \n";
	cout << " Type [Y] or [N] \n";
	cout << " --------->";
	cin >> yn;
	system("cls");
	 if (yn == 'n' || yn == 'N')
	{
		cout << " Processing... Processing... \n";
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << " Thank you for checking in!" << endl;
		return 0;
	}
	else if (yn == 'y' || yn == 'Y')
	{
		std ::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << " ---- ACCOUNT DETAILS ----" << endl;
	cout << " Bank Account : " << name << endl;
	cout << " Balance :" << result << endl;
	cout << " PIN Code :" << pass << endl;
	cout << " -----------------------------" << endl;
	cout << " Please choose an option \n";
	do
	{
		cout << " [1] Deposit Transaction" << endl;
		cout << " [2] Withdrawal Transaction" << endl;
		cout << " [3] Transfer Transaction" << endl;
		cout << " [4] Change Account" << endl;
		cout << " [5] Exit" << endl;
		cout << " --------->";
		cin >> option;

		switch (option)
		{
		case '1':
			DepositTrans();
			break;

		case '2':
			WithdrawalTrans();
			break;

		case '3':
			TransferTrans();
			break;

		case '4':
			ChangeAccount();
			break;

		case '5':
			Exit();
			break;

		default:
			system("cls");
			cout << " Invalid choices... \n";
			return 0;
		}
	} while ( choices !=5);
	}
	else if (" ")
	{
		cout << "Invalid... Invalid...";
		return 0;
	}		
}
void Deposit()
{
	cout << " Enter the amount you want to deposit: ";
	while(!(cin >> amount))
	{
		cout << " Error, NUMBERS only!" << endl;
		cout << " Enter amount: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	result = balance + amount;
	cout << " Processing... Processing... \n"
		 << endl;
	std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
	system("cls");
	cout << " Deposited successfully! \n";
	cout << "-----------------------------" << endl;
	cout << " Total balance of your account = " << result << endl;
	cout << "=============================" << endl;
	cout << "=============================" << endl;
}
void DepositTrans()
{
	cout << "---- DEPOSIT TRANSACTION ----" << endl;
	cout << " Account name : " << name << endl;
	cout << " Balance : " << result << endl;
	cout << " Deposited amount :" << amount << endl;
	cout << " Minimum Balance : " << balance << endl;
	cout << "=============================" << endl;
	cout << "=============================" << endl;
	std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
void Withdraw()
{
	cout << " Enter the amount you want to withdraw: ";
		while(!(cin >> withdraw))
	{
		cout << " Error, NUMBERS only!" << endl;
		cout << " Enter amount: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	result = balance - withdraw;
	if (withdraw <= balance)
	{
		cout << " Processing... Processing..." << endl;
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("cls");
		cout << " Withdrew Successfully! \n";
		cout << " ---------------------------" << endl;
		cout << " The balance left = " << result << endl;
		cout << "=============================" << endl;
		cout << "=============================" << endl;
	}
	else if (withdraw > balance)
	{
		cout << "Error.. Error..\n";
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << "Please withdraw within your balance";
		exit(0);
	}
}
void WithdrawalTrans()
{
	cout << "---- WITHDRAWAL TRANSACTION ----" << endl;
	cout << " Account name : " << name << endl;
	cout << " Balance : " << result << endl;
	cout << " Withdrew amount :" << withdraw << endl;
	cout << " Minimum Balance : " << balance << endl;
	cout << "=============================" << endl;
	cout << "=============================" << endl;
	std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
void Transfer()
{
	srand((unsigned) time(0));
	int randomNumber = rand();
	int random;
	cout << "Enter Receiver PIN : ";
	cin >> pin;
	if (pin == "1234")
	{
		acc1 = true;
	}
	else
		acc1 = false;
		if (acc1 == false)
		{
			cout << "Unrecognized Pin... Unrecognized Pin... \n";
			exit (0);
		}
	cout << "Enter the receiver name : ";
	cin >> name1;
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
	system("cls");
	cout << "Enter the amount you want to transfer : ";
		while(!(cin >> amt))
	{
		cout << " Error, NUMBERS only!" << endl;
		cout << " Enter amount: ";
		cin.clear();
		cin.ignore(123, '\n');
	}
	cout << "==========================" << endl;
	 if (amt > balance)
	{
		cout << "Processing... Processing... \n";
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("cls");
		cout << "Error... Error...\n";
		cout << "Transfer Failed! \n";
		cout << "Please transfer amount that is within the balance";
		exit(0);
	}
	else if (amt <= balance)
	{
		cout << "To proceed with the transaction" << endl;
		cout << "Please input these code to confirm: " << randomNumber << endl;
		cout << "------------->";
		cin >> random;
		if ( random == randomNumber)
		{
			ran = true;
		}
		else
			ran = false;
			if (ran == true )
			{
		cout << "Processing... Processing... \n";
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << endl;
		system("cls");
		cout << "Transferred Successfully!" << endl;
		Tdisplay();
	}
	if (ran == false)
	{
		cout << "Invalid code... Invalid code..." << endl;
		cout << "Please try again...";
		exit(0);
	}

	}
}
void Tdisplay()
{
	result = balance - amt;
	cout << "Account name : " << name1 << endl;
	cout << "Balance left : " << result << endl;
	cout << "Transferred Amount : " << amt << endl;
	cout << "Minimum Balance : " << balance << endl;
	cout << "============================" << endl;
	cout << "============================" << endl;
	std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
void TransferTrans()
{
	cout << "---- TRANSFER TRANSACTION ----" << endl;
	cout << " Account receiver : " << name1 << endl;
	cout << " Transferred amount : " << amt << endl;
	cout << " Balance : " << result << endl;
	cout << " Minimum Balance : " << balance << endl;
	cout << "============================" << endl;
	cout << "============================" << endl;
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
}
void Exit()
{
	cout << "Processing... Processing... \n";
	std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
	system("cls");
	cout << "Log out successfully! \n";
	cout << "Thank you for checking in!";
	exit(0);
}
void ChangeAccount()
{	
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("cls");
	totalbalance = amt + balance1;
	char choice;
	cout << "Enter PIN Code : ";
	cin >> pin;
	if (pin == "1234")
	{
		acc1 = true;
	}
	else
		acc1 = false;

	if (acc1 == true)
	{
		cout << "Confirming account... Confirming account... \n";
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		system("cls");
		cout << "Please enter your name of bank for confirmation : ";
		cin >> name1 ;
		system("pause");
		system("cls");
	}
	else if ("")
	{
		cout << " Checking account... Checking acciunt..." << endl;
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << "Invalid account..." << endl;
		cout << "Invalid account..." << endl;
		exit(0);
	}
	cout << " ---- WELCOME! ----" << endl;
	cout << " Bank Account : " << name1 << endl;
	cout << " Balance : " << totalbalance << endl;
	cout << " Account PIN : " << pin << endl;
	cout << " ======================" << endl;
	do
	{
		cout << " [1] Account Details" << endl;
		cout << " [2] Log out" << endl;
		cout << " ------->";
		cin >> choice;

		switch (choice)
		{
		case '1':
			AccountDetails();
			break;

		case '2':
			Exit();
			break;

		default:
			system("cls");
			cout << " Invalid Choices \n";
			exit(0);
		}
	} while (choice != 2);
}
void AccountDetails()
{
	cout << "Account name : " << name1 << endl;
	cout << "Balance : " << balance1 << endl;
	cout << "Received : " << amt << endl;
	cout << "Updated Balance : " << totalbalance << endl;
	cout << "Account PIN : " << pin << endl;
	cout << "==========================" << endl;
	cout << "==========================" << endl;
		std ::this_thread::sleep_for(std::chrono::milliseconds(1000));
}