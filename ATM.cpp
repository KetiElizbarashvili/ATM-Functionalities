#include<conio.h>
#include<iostream>
#include<string>
using namespace std;


class atm									
{
private:										
	long int account_No;
	string name;
	int PIN;
	double balance;
	string mobile_No;

public:											

	
	void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a)
	{
		account_No = account_No_a;	 
		name = name_a;
		PIN = PIN_a;
		balance = balance_a;
		mobile_No = mobile_No_a;
	}

	
	long int getAccountNo()
	{
		return account_No;
	}

	//getName function is returning the user's Name
	string getName()
	{
		return name;
	}

	//getPIN function is returning the user's PIN
	int getPIN()
	{
		return PIN;
	}

	//getBalance is returning the user's Bank Balance
	double getBalance()
	{
		return balance;
	}

	//getMobileNo is returning the user's Mobile No.
	string getMobileNo()
	{
		return mobile_No;
	}
 