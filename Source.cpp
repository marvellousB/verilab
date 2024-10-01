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

int sum_of_integers2(int n) {
	int sum = 0;
	int i = 1;

	
	do {
		sum += i;  
		i++;       
	} while (i <= n);  

	return sum;
}


void printNumbers(int n) {
	if (n > 0) {
		printNumbers(n - 1); // Recursive call to print numbers from 1 to n-1
		cout << n << " ";    // Print the current number after the recursive call
	}
}
int sumOfNumbers(int n) {
	if (n == 0)  
		return 0;
	else
		return n + sumOfNumbers(n - 1);  
}
int factorial(int n) {
	if (n == 0 || n == 1)  
		return 1;
	else
		return n * factorial(n - 1);  
}

int fibonacci(int n) {
	if (n == 0)  
		return 0;
	else if (n == 1) 
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);  
}

void printFibonacciSeries(int terms) {
	for (int i = 0; i < terms; i++) {
		cout << fibonacci(i) << " "; 
	}
	cout << endl;
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
		cout << "---------" << endl;


/*question1 part B*/
		
		int result = sum_of_integers(n);
		cout << "(while loop)The sum of the first " << n << " consecutive positive integers is: " << result << endl;
		cout << "complexity is O(n) and n is :" << n << endl;
		cout << "---------" << endl;
/*question1 part C*/
		
		int result2 = sum_of_integers2(n);
		cout << "(do while loop)The sum of the first " << n << " consecutive positive integers is: " << result2 << endl;
		cout << "complexity is O(n) and n is :" << n << endl;
		cout << "---------" << endl;

	/*question2 part A*/
		int m = 50;
		cout << "The first 50 natural numbers are: " << endl;
		printNumbers(m); 
		cout << endl;
		
		cout << "---------" << endl;
		/*question2 part B*/
		int result3 = sumOfNumbers(n);  
		cout << "(recursion)The sum of numbers from 1 to " << n << " is: " << result3 << endl;
		cout << "complexity is O(n) and n is :" << n << endl;
		cout << "---------" << endl;
		/*question3 */

		int result4 = factorial(n); 
		cout << "Factorial of " << n << " is: " << result4 << endl;
		cout << "complexity is O(n) and n is :" << n << endl;
		cout << "---------" << endl;
		/*question4 */
		int terms;
		cout << "Enter the number of terms: ";
		cin >> terms;

		cout << "Fibonacci series for " << terms << " terms: " << endl;
		printFibonacciSeries(terms);  

}