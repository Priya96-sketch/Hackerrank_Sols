#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		
    // Here "showbase" ->is used for applying the 0x prefix for the hexadecimal value// 
    // hex -> This returns the hexadecimal value.
    //left -> this will push and print the value to the left of the line.
    // nouppercase -> As the value is set to convert everything to uppercase, and we                don't want "x" prefix to be in uppercase. 
    // long(A) -> This is for omiting integer values after the decimal point,i.e,                   TRUNCATION
    cout << showbase << hex << left << nouppercase <<long(A) <<endl; 
    
    // setw(15) -> Seeting the width to 15characters.
    // right -> Adding the value to right of the line
    // setfill('_') ->Fillling the spaces with underscores.
    // showpos -> This will display the positive or negative sign.
    // fixed & setprecision(2) -> Used to print only two values after the decimal point.
    // B -> Representing we are acting on B.
    cout<< setw(15) <<right << setfill('_') <<showpos <<fixed <<setprecision(2) <<B          <<endl;
    
    // scientific -> as given to print the value in scientific notation
    // noshowpos -> It will not show any sign, negative or positive
    // setprecision(9) -> as given to print a scale of exactly nine decimal places 
    //uppercase -> as given to print in uppercase format
    cout<< scientific << noshowpos << uppercase << setprecision(9) << C << endl;

	}
	return 0;

}
