/* Program file name: 
 Programmer: Dyllan Overly
 Date: February 2025
 Requirements:
 Write a program that can compute total sales tax of:
 95$ with a 4%sales tax and a 2% country sales tax
*/
#include <iostream>
using namespace std;
int main()
{
	float tax2 = .02;
	float tax = 0.04;
	string item;
	float price;
	//added item to make it more like computing at a store
	cout << " please enter the name of the first item \n";
	cin >> item;
	cout << " please enter the price for the first item \n";
	cin >> price;
	float subtotal = 0;
	float countrytax = 0;
	float saletax = 0;
	float grandtotal = 0;
	float grandestotal = 0;


	subtotal = price;
	saletax = subtotal * tax;
	grandtotal = subtotal + saletax;
	countrytax = subtotal * tax2;
	grandestotal = grandtotal + countrytax;

	cout << "my shopping list \n";
	cout << "================\n";

	cout << item << "     " << "$" << price << endl;
	cout << "Total: " << grandestotal << endl;
	cout << "Tax: " << saletax << endl;
	cout << "tax2: " << countrytax << endl;
}

