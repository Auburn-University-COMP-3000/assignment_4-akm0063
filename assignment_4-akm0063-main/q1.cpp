#include <iostream>
#include <iomanip>

using namespace std;

class GasPump {
	private:
		double amountDispensed,
		       amountCharged,
		       costPerGallon;

	public:
		double getAmountDispensed() {
			return amountDispensed;
			}
		double getAmountCharged() {
			return amountCharged;
			}
		void setCostPerGallon(double costPerGallonIn) {
			costPerGallon = costPerGallonIn;
			}
		double getCostPerGallon() {
			return costPerGallon;
			}
		void reset() {
			amountDispensed = 0.0;
			amountCharged = 0.0;
		}
		void dispense(int seconds) {
			amountDispensed = 0.10 * seconds;			
			amountCharged = amountDispensed * costPerGallon;
		}
};
	
int main() {
	
    //Define variables
	double costPerGallonIn = 0.0;
	double seconds = 0.0;

    //Define Class Object
	GasPump pump;
	
	cout << "Enter the cost per gallon of gas: ";
	cin >> costPerGallonIn;
	cout << "Enter how many seconds you want to pump gas: ";
	cin >> seconds;

    //Call Functions
	pump.setCostPerGallon(costPerGallonIn);
	pump.dispense(seconds);
	cout << "\nThe number of gallons of gas pumped is " << pump.getAmountDispensed() << endl;
	cout << "The cost per gallon of gas is $" << pump.getCostPerGallon() << endl;
	cout << "The total cost of the gas is $" << pump.getAmountCharged() << endl;

	return 0;
}
