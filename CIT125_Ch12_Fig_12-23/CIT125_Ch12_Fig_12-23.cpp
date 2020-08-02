// CIT125 Intro to C++ Luigi Robles
// 08-01-2020 Summer Term
// Ch.12 pg.458 Fig.12-23 Trythis16
// Display the total sales

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare and initialize array
	double sales[3][2] = {{3567.85, 2589.99},
						 {3239.67,  2785.55},
						 {1530.50, 1445.80}};

	//declare and initialize variables
	double total = 0.0;
	double paperback = 0.0; //accumulator
	double hardcover = 0.0; //accumulator

	//accumulate sales
	for (int store = 0; store < 3; store += 1) //for loop
	{
		paperback += sales[store][0]; //adding up total sales for store 1
		hardcover += sales[store][1]; //adding up total sales for store 2
	} //end for
	total = paperback + hardcover;

	cout << fixed << setprecision(2);
	cout << "Total paperback sales: $" << paperback << endl; //output for total paperback sales
	cout << "Total hardcover sales: $" << hardcover << endl; //output for total hardcover sales
	cout << "Total sales: $" << total << endl; //output for overall total
	return 0;
} //end of main function