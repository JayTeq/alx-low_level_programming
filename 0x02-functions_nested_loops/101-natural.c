#include<iostream>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: Nothing.
  */
using namespace std;

int main()
{

  int sum = 0;

	for (int i = 3; i < 1024; i++) {

		if (i%3==0 or i%5==0)

			sum += i;
	}

	cout << sum;
	printf("%d\n", sum);
	return 0;
}
