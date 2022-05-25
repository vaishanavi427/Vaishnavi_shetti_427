
#include <stdio.h>

int equilibrium(int arr[], int n)
{
	int i, j;
	int leftsum, rightsum;


	for (i = 0; i < n; ++i) {


		leftsum = 0;
		for (j = 0; j < i; j++)
			leftsum += arr[j];


		rightsum = 0;
		for (j = i + 1; j < n; j++)
			rightsum += arr[j];


		if (leftsum == rightsum)
			return i;
	}
}


int main()
{
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("%d", equilibrium(arr, arr_size));

	getchar();
	return (0);
}


