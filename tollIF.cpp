#include <iostream>

using namespace std;

int main() {
	cout << "Instructions: enter the name of the vehicle and the revenue will be calculated." << endl << "Enter \"Exit\" to quit the program." << endl << "Enter \"print\" to show the report." << endl;
	
	string input;

	int totalVehicle; //number of vehicles that cross
	int totalToll;

	int twoWheeler, fourWheeler2, fourWheeler3, fourWheeler4, sixWheeler5, sixWheeler6, tenWheeler;
	//total numbers by type of vehicle and toll by euro

	while(1) {
		cin >> input;

		if (input == "print") {
			cout << "Total toll revenue is " << totalToll << endl;
			cout << "Total number of vehicles is " << totalVehicle << endl;
			cout << "Number of two wheelers (1 Euro): " << twoWheeler << endl;
			cout << "Number of four wheelers (2 Euro): " << fourWheeler2 << endl;
			cout << "Number of four wheelers (3 Euro): " << fourWheeler3 << endl;
			cout << "Number of four wheelers (4 Euro): " << fourWheeler4 << endl;
			cout << "Number of six wheelers (5 Euro): " << sixWheeler5 << endl;
			cout << "Number of six wheelers (6 Euro): " << sixWheeler6 << endl;
			cout << "Number of ten or more wheelers (10 Euro): " << tenWheeler << endl;
		}
		
		else if (input == "Exit" || input == "exit")
			return 0;

		//Two Wheelers
		else if (input == "Cycle" || input == "ElectricScooty" || input == "Motor" || input == "ElectricCycle") {
			totalToll += 1;
			twoWheeler++;
		}
		
		//Four Wheelers 2 Euro
		else if (input == "Car" || input == "SUV" || input == "Crossover") {
			totalToll += 2;
			fourWheeler2++;
		}
		
		//Four Wheelers 3 Euro
		else if (input == "Van" || input == "Pickup" || input == "Minibus" || input == "Minivan"  || input == "Campervan") {
			totalToll += 3;
			fourWheeler3++;
		}

		//Four Wheelers 4 Euro
		else if (input == "Tractor" || input == "AgriMachine") {
			totalToll += 4;
			fourWheeler4++;
		}

		//Six Wheelers 5 Euro
		else if (input == "Bus" || input == "Coach" || input == "VanFive") {
			totalToll += 5;
			sixWheeler5++;
		}

		//Six Wheelers 6 Euro
		else if (input == "Truck" || input == "Lorry") {
			totalToll += 6;
			sixWheeler6++;
		}

		//Ten or more Wheelers 10 Euro
		else if (input == "TruckTen" || input == "AgriMachineTen") {
			totalToll += 10;
			tenWheeler++;
		}

		else
			cout << "Invalid input." << endl;
	}
}