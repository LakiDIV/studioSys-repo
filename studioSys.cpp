#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void fnPrint(), fnPhoto(), fnVideo(), fnUser();
void fnLogin(){
	string username = "";
	string password = "";
	bool loginSuccess = false;
	
	cout << "Welcome to Artify Pixels !\n";
	
	do
	{
		cout<<"Username :";
		cin>>username;
		cout<<"Password :";
		cin>>password;
		
		if(username == "admin" && password == "admin")
		{
			system("cls");
			cout<<"\t\t\t\t\t\t   Artify Pixels\n\t\t\t\t\t\t-----ADMIN-----\n\t\t\t\t\t\twww.artifypixels.com\n";
			loginSuccess = true;
		}
		else if (username == "user" && password == "user")
		{
			system("user");
			cout<<"\t\t\t\t\t\t   Artify Pixels\n\t\t\t\t\t\t -----CUSTOMER-----\n\t\t\t\t\t\twww.artifypixels.com\n";
			fnUser();
			loginSuccess = true;
		}
		else if (username == "x" || username == "X" || password == "x" || password == "X")
		{
			cout << "Thanks for using Artify Pixels ! \nHave a nice Day !\n";
			break;
		}
		
		else
		{
			cout<<"Invalid Username or Password !\n\n";
		}
	}
	while(!loginSuccess);
}

int totalBill = 0;

void fnUser(){
	system("cls");
	char key;
	cout <<"1. Photo Designing - Not Completed\n";
	cout <<"2. Video Designing - Not Completed\n";
	cout <<"3. Printing Services\n";
	if (totalBill > 0)
	{
		cout << "Press X for checkout !\n";
	}
	
	cout <<"Enter your choice to continue -- ";
	cin >> key;

	switch (key)
	{
	case 49: // Using ASCII code to identify the numbers
	cout << "\nWe provide the best quality photography services !\n";
		break;
	case 50:
	cout << "\nWe provide the best quality videography services !\n";
		break;
	case 51:
	cout << "\nWe provide the best quality printing services !\n";
	fnPrint();
		break;
	case 'x': case 'X':
	cout << "Thanks for using Artify Pixels !\nYour bill is " << totalBill << "LKR.\n";
		break;
	default:
		break;
	}
}

void fnPrint(){
	system("cls");
	char key;
	int temp, amount;
	cout << "1. Business Cards & Visiting Cards \n";
	cout << "2. Flyers & Brochures \n";
	cout << "3. Print on an item\n";
	cout << "0. Go Back\n";
	if (totalBill > 0)
	{
		cout << "Press X for checkout !\n";
	}
	cout <<"Enter your choice to continue -- ";
	cin >> key;
	cout <<"\n";

	switch (key){

	case 49: // Business Cards & Visiting Cards
	cout << "1. One Side\n";
	cout << "2. Double Side\n";
	cout << "0. Go Back\n";
	cout <<"Enter your choice to continue -- ";
	cin >> temp;
	if (temp == 1)
	{
		// 5LKR for 1 One side visiting card
		cout << "How many prints do you need : ";
		cin >> amount;
		cout << "\n ADDED " << 5*amount << "LKR to the BILL !\n\n";
		totalBill += 5*amount;
		
		fnPrint();
	}
	else if (temp == 2)
	{
		// 8LKR for 1 Double side visiting card
		cout << "How many prints do you need : ";
		cin >> amount;
		cout << "\n ADDED " << 8*amount << "LKR to the BILL !\n\n";
		totalBill += 8*amount;
		
		fnPrint();
	}
	else if (temp == 0){
		fnPrint();
	}
	else{
		cout << "Invalid Input ! TRY AGAIN \n";
		fnPrint();
	}

		break;

	case 50: // Flyers & Brochures
	cout << "1. One Side\n";
	cout << "2. Double Side\n";
	cout << "0. Go Back\n";
	cout <<"Enter your choice to continue -- ";
	cin >> temp;
	if (temp == 1)
	{
		// 4LKR for 1 One side flyer
		cout << "How many prints do you need : ";
		cin >> amount;
		cout << "\n ADDED " << 4*amount << "LKR to the BILL !\n\n";
		totalBill += 4*amount;
		fnPrint();
	}
	else if (temp == 2)
	{
		// 7LKR for 1 Double flyer
		cout << "How many prints do you need : ";
		cin >> amount;
		cout << "\n ADDED " << 7*amount << "LKR to the BILL !\n\n";
		totalBill += 7*amount;
		
		fnPrint();
	}
	else if (temp == 0){
		fnPrint();
	}
	else{
		cout << "Invalid Input ! TRY AGAIN \n";
		fnPrint();
	}

		break;

	case 51: // Print on an item
	cout << "1. Mug\n";
	cout << "2. Canves\n";
	cout << "0. Go Back\n";
	cout <<"Enter your choice to continue -- ";
	cin >> temp;
	if (temp == 1)
	{
		// 100LKR for 1 Mug
		cout << "How many prints do you need : ";
		cin >> amount;
		cout << "\n ADDED " << 100*amount << "LKR to the BILL !\n\n";
		totalBill += 100*amount;
		
		fnPrint();
	}
	else if (temp == 2)
	{
		// 250LKR for 1 Canves
		cout << "How many prints do you need : ";
		cin >> amount;
		cout << "\n ADDED " << 250*amount << "LKR to the BILL !\n\n";
		totalBill += 250*amount;
		
		fnPrint();
	}
	else if (temp == 0){
		fnPrint();
	}
	else{
		cout << "Invalid Input ! TRY AGAIN \n";
		fnPrint();
	}

		break;
	case 48:
		fnUser();
		break;
	
	case 'x': case 'X':
	cout << "Thanks for using Artify Pixels !\nYour bill is " << totalBill << "LKR.\n";
		break;
	default:
		break;
	}

}


char res;

int main()
{
	fnLogin();
	          
system("pause");	
return 0;
}
