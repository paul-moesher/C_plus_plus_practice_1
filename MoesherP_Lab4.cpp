//-----------------------------------------------------------------------------------------------------
// CS2010											Lab 4							Date:2/2/18
// Paul Moesher																		Class time: 10:30
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string stuType, stateType;
	int creditHours;
	double creditHourFee, stateFee, tuition;

	// Get student type 
	cout << "Enter the type of student you are (U)ndergrad (G)randuate (A)udit: ";
	cin >> stuType;

	// Set credit hour fee based on whether student is an undergrad or grad
	if (stuType == "U") creditHourFee = 380;
	if (stuType == "u") creditHourFee = 380;
	if (stuType == "G") creditHourFee = 425;
	if (stuType == "g") creditHourFee = 425;
	if (stuType == "A") creditHourFee = 300;
	if (stuType == "a") creditHourFee = 300;

	if (stuType != "U")
	if (stuType != "A")
	if (stuType != "G")
	if (stuType != "u")
	if (stuType != "a")
	if (stuType != "g")

			{
				cout << "student type must be U, G, or A please try again: ";

				system("pause");
				exit(1);
			}

	//Get student credit hours
	cout << "Please enter the amount of credit hours you are taking: ";
	cin >> creditHours;

	// Ask student if they are in state or out of state
	cout << "Enter the type of student you are (I)n or (O)ut of state: ";
	cin >> stateType;

	//Set credit hour fee based on whether student is in state or is not in state
	if (stateType == "I") stateFee = 1;
	if (stateType == "i") stateFee = 1;
	if (stateType == "O") stateFee = 300;
	if (stateType == "o") stateFee = 300;

	if (stateType != "I")
	if (stateType != "O")
	if (stateType != "i")
	if (stateType != "o")
		{
			cout << "state type must be I, or O please try again: ";

			system("pause");
			exit(1);
	}

	// Calulate students tution credithour fee
	creditHourFee = creditHourFee * stateFee;


	// Calulate students tution (credithour times credit hour fee)
	tuition = ( creditHourFee * stateFee) * creditHours;

	// Display students credit hour fee, number of credits and the tution amount
	cout << endl;
	cout << "Your fee per credit hour is: " << creditHourFee << endl;

	cout << "Your tution for " << creditHours;
	cout << " credit hours is " << tuition << endl;

	cout << endl;
	system("pause");
	return 0;
}