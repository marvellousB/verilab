#include <iostream>
using namespace std;

int sum_of_integers(int n) {
	int sum = 0;
	int i = 1;

	
	while (i <= n) {
		sum += i;
		i++;
	}
	return sum;
}


int main() 

{/*question1 part A*/
	int n;
	cout << "enter n :";
	cin >> n;
	
		for (int i = n; i > 0; --i) {
			cout << i << endl;
		}
		
		cout << "complexity is O(n) and n is :"<<n << endl;


/*question1 part B*/
		
		int result = sum_of_integers(n);
		cout << "The sum of the first " << n << " consecutive positive integers is: " << result << endl;
		cout << "complexity is O(n) and n is :" << n << endl;

		
		






}