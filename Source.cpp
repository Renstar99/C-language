#include <iostream>
using namespace std;

int get_integer(int min, int max) 
{

	int local_var;

	do {

		printf("Enter an integer between %d and %d: ", min, max);
		scanf_s("%d", &local_var);

		if (local_var < min || local_var > max)
			printf("Invalid value!\n");

	} while (local_var<min || local_var>max);

	return local_var;

}

int min_three(int v1, int v2, int v3) 
{

	if (v1 < v2 && v1 < v3)

		return v1;

	else if (v2 < v3)

		return v2;

	else

		return v3;

}

int max_three(int v1, int v2, int v3) 
{

	if (v1 > v2 && v1 > v3)

		return v1;

	else if (v2 > v3)

		return v2;

	else

		return v3;

}

int main() 
{

	int num1 = get_integer(1, 50);
	int num2 = get_integer(1, 50);
	int num3 = get_integer(1, 50);

	printf("Min : %d", min_three(num1, num2, num3));

	printf("\nMax : %d", max_three(num1, num2, num3));

	system("pause");
	return 0;
}