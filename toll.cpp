#include <iostream>

using namespace std;

int main() {
	cout << "Instructions: enter the name of the vehicle and the revenue will be calculated." << endl << "Enter \"Exit\" to quit the program." << endl << "Enter \"print\" to show the report." << endl;
	
	char input;

	int totalVehicle; //number of vehicles that cross
	int totalToll;

	int twoWheeler, fourWheeler2, fourWheeler3, fourWheeler4, sixWheeler5, sixWheeler6, tenWheeler;
	//total numbers by type of vehicle and toll by euro

	while(1) {
		cin >> input;
	
		switch (input) {
			//Two Wheelers
			case 'Cycle': case 'Electric Scooty': case 'Motor': case 'Electric Cycle':
				totalToll += 1;
				twoWheeler++;
				break;

			//Four Wheelers 2 Euro
			case 'Car': case 'SUV': case 'Crossover':
				totalToll += 2;
				fourWheeler2++;
				break;

			//Four Wheelers 3 Euro
			case 'Van': case 'Pickup': case 'Minibus': case 'Minivan' : case 'Campervan':
				totalToll += 3;
				fourWheeler3++;
				break;

			//Four Wheelers 4 Euro
			case 'Tractor': case 'Agricultural machine':
				totalToll += 4;
				fourWheeler4++;
				break;

			//Six Wheelers 5 Euro
			case 'Bus': case 'Coach': case 'Van':
				totalToll += 5;
				sixWheeler5++;
				break;

			//Six Wheelers 6 Euro
			case 'Truck': case 'Lorry' :
				totalToll += 6;
				sixWheeler6++;
				break;

			//Ten or more Wheelers 10 Euro
			case 'Truck 10+ wheels': case 'Agricultural machine 10+ wheels':
				totalToll += 10;
				tenWheeler++;
				break;

			case 'Exit':
				return 0;
				break;

			default:
				cout << "Invalid vehicle/command" << endl;
				break;
		}
	}
}