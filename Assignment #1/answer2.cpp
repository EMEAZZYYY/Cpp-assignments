#include <iostream>
using namespace std;
int main()
{
	int firstnumber;
	int secondnumber;
	int thirdnumber;
	
	cout <<"enter a number ";
	cin >> firstnumber;
	
	cout <<"enter a second number: ";
	cin >> secondnumber;
	
	thirdnumber = firstnumber / secondnumber;
	if (firstnumber % secondnumber == 0)
	cout << firstnumber <<" is a multiple of " << secondnumber;
	
	else
	cout << firstnumber << "is not a multiple of"<< secondnumber;
	
	return 0;
}
	
	
	

