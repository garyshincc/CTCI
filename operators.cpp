#include <iostream>
#include <iomanip>

using namespace std;


int main(){

	double price;
	int tipPercent;
	int taxPercent;

	cin >> price;
	cin >> tipPercent;
	cin >> taxPercent;

	double totalPrice;

	totalPrice = price + (price * tipPercent * 0.01) + (price * taxPercent * 0.01);

	cout << "The total meal cost is " << setprecision(0) << fixed << totalPrice << " dollars." << endl;

	return 0;
}