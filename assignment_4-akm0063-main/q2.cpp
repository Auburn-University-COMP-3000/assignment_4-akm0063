#include <iostream>

using namespace std;

class Temperature {
	private:
		double degreesKelvin,
		       degreesFahrenheit,
		       degreesCelsius;
	public:
		void setTempKelvin(double degreesKelvinIn) { 
			degreesKelvin = degreesKelvinIn;
		 }
		double getTempKelvin() {
			return degreesKelvin;
			}
		void setTempCelsius() { 
			degreesCelsius = degreesKelvin - 273.15;
		 }
		double getTempCelsius() { 
			return degreesCelsius;
			} 
		void setTempFahrenheit() { 
			degreesFahrenheit = (getTempCelsius()/(5.0/9)) + 32;
		 }
		double getTempFahrenheit() { 
			return degreesFahrenheit;
			}
};

int main() {
double degreesKelvinIn;
Temperature temp;

cout << "Enter a temperautre in degrees Kelvin: ";
cin >> degreesKelvinIn;

temp.setTempKelvin(degreesKelvinIn);
temp.setTempCelsius();
temp.setTempFahrenheit();

cout << "That temperature in Celsius = " << temp.getTempCelsius() << endl;
cout << "That temperature in Fahrenheit = " << temp.getTempFahrenheit() << endl;

return 0;
}
