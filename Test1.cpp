// This program finds the probability of winning a "mini" lottery
// when the user's set of numbers match the set drawn
// by the lottery organizers. It uses three functions.
# include <iostream>
using namespace std;
// Function prototypes
void getInfo(int&, int&);
double computeWays(int, int);
double factorial(int);

int main()
{ 
        double ways;
		ways = computeWays(5, 3);
        cout.setf(ios::fixed);
        cout.precision(4);
        cout << ways << endl;
		// 0.1000
		cout.precision(0);
		// 10
        cout << (1/ways) << endl;
		
        ways = computeWays(12, 10);
        cout.setf(ios::fixed);
        cout.precision(4);
        cout << ways << endl;
		// 0.0152
		cout.precision(0);
		// 66
        cout << (1/ways)<< endl;		

    return 0;
}

