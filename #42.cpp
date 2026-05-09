#include <iostream>
#include <string>
using namespace std;

int main() {
	string s = "125.895";
	//transformation string to (int,float,double). 

	int numint = stoi(s);
	float numfloat = stof(s);
	double numdouble = stod(s);

	cout << "int : " << numint << endl;
	cout << "float : " << numfloat << endl;
	cout << "double : " << numdouble << endl;

	//transformation (int,float,double) to string. 
	int nint = 80;
	float nfloat = 55.829;

	cout << "\nString : " << to_string(nint);
	cout << "\nString : " << to_string(nfloat) << endl;

	return 0;
}