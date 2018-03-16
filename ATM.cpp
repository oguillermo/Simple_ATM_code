#include <iostream>



using namespace std;

int main()
{
	double amountOut;
	double initialAmount; 
	double current;
	cin >> amountOut >> initialAmount;
	cout  << initialAmount << endl;
	float multiofFive = amountOut % 5;
	
	
	if (multiofFive !=0 || amountOut > initialAmount || amountOut > initialAmount - 0.05)
	{
		
		cout << initialAmount << endl;
	}
	else 
	{
		current = (initialAmount - amountOut ) - 0.05;
		cout << current;
	}
	
	return 0;
}