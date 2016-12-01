#include <iostream.h>
#include <iomanip.h>

main()
{
	cout<<"Unsigned long faktorial (unsigned long)";
	for(int i=0; i:<=10;i++);
		cout << setw(2) <<i<<"! Faktorial(i)"<< endl;
	return 1;
}
// recursive definition of function factorial
Unsigned long factorial (unsigned long number)
{
	if (number <=1)//base case
		return 1;
	else
		return number*factorial(number - 1);
}