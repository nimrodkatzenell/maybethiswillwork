#include <iostream>
using namespace std;
#define N 2
#define M 5

bool sub(int A[N][N], int B[M][M]);
int func(int num);
int main()
{
	int A[N][N] = { {0,0},{0,0} };
	int B[M][M] = { {0,1,0,0,0},{0,1,0,0,0} ,{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0} };
	if (sub(A, B))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}

}
int func(int num)
{
	if (num < 0)
	{
		return -1;
	}
	if (num / 10 == 0)
	{
		return num + 1;
	}
	return 10 * func(num / 10) + (num % 10 + 1) % 10;

}
bool sub(int A[N][N], int B[M][M])
{
	int counter = 0;
	for (int i = 0; i < M - N; i++)
	{
		for (int j = 0; j < M - N; j++)
		{
			for (int k = 0; k < N; k++)
			{
				for (int t = 0; t < N; t++)
				{
					
					if (A[k][t] == B[i + k][j + t])
					{
						counter++;
					}

				}
			}
			if (counter == N * N)
			{
				return true;
			}
			counter = 0;
		}
	}
	return false;

}