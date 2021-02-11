#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    int len_a, len_b;
    cin >> (a);

    cin >> (b);
    len_a = a.size();
    len_b = b.size();
    char temp = a[0];
    //Display
    cout<<len_a<< " "<< len_b<< endl;
    cout << a+b<<endl;
    a[0]=b[0];
    b[0]=temp;
    cout<< a << " " << b;
    
    return 0;
}
