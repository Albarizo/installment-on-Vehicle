//Auto Installment Calculator project by Albarizo

#include<iostream>
using namespace std;
int main()
{
	double  vehicle_price, down_payement, installement_month, interest_rate, payable_amount, Monthly_installement, New_payable_amount;
	cout << "Enter price of Vehicle: ";
	cin >> vehicle_price;
	cout << "Enter Down Payement: ";
	cin >> down_payement;
	cout << "Installement Month: ";
	cin >> installement_month;
	payable_amount = vehicle_price - down_payement;
	cout << "Vehicle Price: " << vehicle_price << endl;
	cout << "Down Payement: " << down_payement << endl;
	cout << "Installement Month: " << installement_month << " months" << endl;
	cout << "Payable_amount: " << payable_amount << endl;

	if (installement_month <= 12) {
		interest_rate = (10.0 / 100) * payable_amount;
		}

	else if (installement_month > 12 && installement_month <= 24) {
		interest_rate = (15.0 / 100) * payable_amount;
	}

	else if (installement_month > 24 && installement_month <= 36) {
		interest_rate = (20.0 / 100) * payable_amount;
	}

	else if (installement_month > 36 && installement_month <= 48) {
		interest_rate = (25.0 / 100) * payable_amount;
	}

	else if (installement_month > 48 && installement_month <= 60) {
		interest_rate = (30.0 / 100) * payable_amount;
	}

	else
	{
		cout << "   SORRY!\nInstallment on More than 60 months are not Available." << endl;

	}

	New_payable_amount = payable_amount + interest_rate;
	Monthly_installement = New_payable_amount / installement_month;
	cout << "Interest rate: " << interest_rate << endl;
	cout << "New Payable amount after interest rate: " << New_payable_amount << endl;
	cout << "Installement/Month: " << Monthly_installement << endl;

	return 0;

}