//Renzo Pereyra
//Simple Calculator (Add,Subtract,Multiply,Divide)

#include<iostream>

using namespace std;
void add();
void sub();
void multiply();
void divide();
void mod();
void goodbye();

int main()
{
	int userInput;
	bool continueProgram = true;

	//Main Menu
	cout << "Welcome to my calculator!" << endl;

	//repeat prompt if user input is invalid
	while (continueProgram == true)
	{
		cout << "What would you like to do?" << endl;
		cout << "--------------------" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "5. Find the remainder (Modulus)" << endl;
		cout << endl;
		cout << "0. Exit" << endl;

		cout << "--------------------" << endl;
		cout << "Enter a number: ";
		cin >> userInput; 
		cout << "--------------------" << endl;
		cout << endl;

		switch(userInput)
		{
			case 1:
			system("cls");
			add();
			break;

			case 2:
			system("cls");
			sub();
			break;
			
			case 3:
			system("cls");
			multiply();
			break;
			
			case 4:
			system("cls");
			divide();
			break;
			
			case 5: 
			system("cls");
			mod();
			break;
			
			case 0:
			goodbye();
			continueProgram = false;
			break;

			default:
			system("cls");
			cout << "Please select a valid input!" << endl;
			cout << endl;
		}
	}
	system("pause");
	return 0;
}

//Addition
void add()
{
	float value1;
	float value2;
	cout << "Addition: " << endl;
	cout << "Please insert value 1: ";
	cin >> value1;
	cout << "Please insert value 2: ";
	cin >> value2;
	cout << "Your answer is: " << (value1+value2) << endl;
	cout << endl;
}
//Subtraction
void sub()
{
	float value1;
	float value2;
	cout << "Subtraction: " << endl;
	cout << "Please insert value 1: ";
	cin >> value1;
	cout << "Please insert value 2: ";
	cin >> value2;
	cout << "Your answer is: " << (value1-value2) << endl;
	cout << endl;
}
//Multiplication
void multiply()
{
	float value1;
	float value2;
	cout << "Multiplication: " << endl;
	cout << "Please insert value 1: ";
	cin >> value1;
	cout << "Please insert value 2: ";
	cin >> value2;
	cout << "Your answer is: " << (value1*value2) << endl;
	cout << endl;
}
//Division
void divide()
{
	float value1;
	float value2;
	cout << "Division: " << endl;
	cout << "Please insert value 1: ";
	cin >> value1;
	cout << "Please insert value 2: ";
	cin >> value2;
	cout << "Your answer is: " << (value1/value2) << endl;
	cout << endl;
}

//Modulus
void mod()
{
	int value1;
	int value2;
	cout << "Modulus: " << endl;
	cout << "Please insert value 1: ";
	cin >> value1;
	cout << "Please insert value 2: ";
	cin >> value2;
	cout << "Your answer is: " << (value1%value2) << endl;
	cout << endl;
}

//Goodbye Message
void goodbye()
{
	cout << "Thank you for using my program!" << endl;
	cout << "Have a nice day!" << endl;
	cout << endl;
}