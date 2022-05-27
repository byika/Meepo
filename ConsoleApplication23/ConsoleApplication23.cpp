#include <iostream>
#include <string>
using namespace std;



int main()
{
	std::string choice; // управляющая переменная
	float num1, num2;



	do {
		cout << "1 - cymma\n";
		cout << "2 - paznoctb\n";
		cout << "3 - proizvedenie\n";
		cout << "4 - delenie\n";
		cout << "5 - delenie po modulyu\n";
		cout << "6 - cTepeHb\n";
		cout << "0 - BblX0D\n";
		cin >> choice;

		if (choice == "0") {
			cout << "BblX0D\n";
		}
		else {
			cout << "BBEDUTE 2 LYUBblX CHUCLA: \n";
			cin >> num1 >> num2;
			if (choice == "1") {
				cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
			}
			else if (choice == "2") {
				cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
			}
			else if (choice == "3") {
				cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
			}
			else if (choice == "4") {
				cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
			}
			else if (choice == "5") {
				cout << num1 << " % " << num2 << " = " << int(num1) % int(num2) << "\n";
			}
			else if (choice == "6") {
				cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << "\n";
			}
		}
	} while (choice != "0" || choice != "1" || choice != "2" ||
		choice != "3" || choice != "4" || choice != "5" || choice != "6");





}
