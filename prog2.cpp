#include <iostream>
#include <cstring>
using namepsace std;

// Charles Ratkie
// The purpose of this program is to read in user preferences and have them put in a password.
// The password will be checked for strength.

const char NAME = 41;
const int NUM = 11;


// Functions

// Welcome the user and provide information
welcome_user()
{
	do
	{
		cout << endl << endl;
		cout << "This is a password program that will check the strength of your password.\n";
		cout << "Wold you like to try the password program?: (y/n)";
		cin >> answer;

	} while ( answer != 'n' || 'N')

}

// Get the user's last name
get_last_name()
{
	char last_name[NAME];

	cout << endl << endl;
	
	do
	{
		cout << "Please enter your LAST name: ";
		cin.get(last_name,NAME,'\n');
		cin.ignore(100,'\n');
	} while (!isalpha(last_name));

}

// Get the user's pet's name
get_pet_name()
{
	char pet_name[NAME];

	cout << endl << endl;

	do
	{
		cout << "Please enter your pet's name: ";
		cin.get(pet_name,NAME,'\n');
		cin.ignore(100,'\n');
	} while (!isalpha(pet_name));
	
}

// Get the user's birthdate
get_birthdate()
{
	int birthdate[NUM];

	cout << endl << endl;

	do
	{
		cout << "Please enter your BIRTHDATE (ex. 1989): ";
		cin >> birthdate;
	} while (!isdigit(birthdate));


}

// Get the user's favorite number
get_fav_num()
{
	int fav_num[NUM]

	cout << endl << endl;

	do
	{
		cout << "Please enter your favorite NUMBER: ";
		cin >> fav_num;
	} while (!isdigit(fav_num));
}

// Display the user's inputs and check to see if everything is correct.
// If not, provide the chance for the user to go back and make changes.
display_list()
{
	int number = 0;

	cout << endl << endl;

	cout << "** Please review your information below **";
	cout << endl << endl;
	cout << " 1. " << last_name << endl;
	cout << " 2. " << pet_name << endl;
	cout << " 3. " << birthdate << endl;
	cout << " 4. " << fav_num << endl << endl;

// Provide the user to go back by having them enter
// numbers 1 - 4 according to the categorized list above.

	cout << "If you made any errors when entering your information,"
		 << " you can enter any single number 1 - 4 to make your adjustments";
	cout << "However, if you are satisfied, simply press <ENTER> to continue..." << endl << endl;

	cin >> number;

	while (number != '\n')
	{

		if (number == 1)
		{
			get_last_name();
		}
		else if (number == 2)
		{
			get_pet_name();
		}

    }

}
