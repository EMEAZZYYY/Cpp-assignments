#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int weight;
	int height;
	int BMI;
	cout << "Enter user weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter user height(m): " <<endl;
	cin >> height;
	
	BMI = weight / pow(height , 2);
	
	cout << setprecision(2) << fixed << "User BMI is: " <<BMI <<endl;
	
	if (BMI <= 18.5)
	cout << "user is under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "user weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "user is over-weight." <<endl;
	else
	cout << "user is Obese." <<endl;

	return 0;	
}
