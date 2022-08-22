// C++ program to convert a decimal
// number to base 62 number

#include <iostream>
using namespace std;

// function to convert decimal to base 62
string decTo62(int n)
{
	// char array to store base 62 number
	char num[100];

	// counter for base 62 number array
	int i = 0;
	while (n != 0) {
		// temporary variable to store remainder
		int temp = 0;

		// storing remainder in temp variable.
		temp = n % 62;

		// check if temp < 10
		if (temp < 10) {
			num[i] = temp + '0';
			
		}
		else if (temp < 36){
			num[i] = temp + 'A'-10;
			
		}
		else {
			num[i] = temp +'a'-36;
			
		}
		
        i++;
		n = n / 62;
	}

    string s = "";
	// printing base 62 number array in reverse order
	for (int j = i - 1; j >= 0; j--)
		s.push_back(num[j]);
		
	return s;
}

// Driver program to test above function
int main()
{
	int n ;
	cin>>n;

	cout<<decTo62(n);

	return 0;
}
