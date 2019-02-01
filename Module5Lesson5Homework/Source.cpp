#include<iostream> 
using namespace std;

void task1()
{

	int i, j, A[10][10] = { { 0 },{ 0 } };
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			A[i][j] = 0 + rand() % 10;
		}
	}
	for (i = 0; i < 10; i++)
	{
		sum = 0;
		for (j = 0; j < 10; j++)
		{
			sum += A[i][j];
		}
		cout << "Sum of numbers in row " << i << " is " << sum << endl;
	}
	
	system("pause");
}


void task2()

{
	int i, j, A[4][4] = { { 0 },{ 0 } };
	int sum = 0, min = 20;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 10;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 4; j++)
		{
			sum += A[i][j];
		}
		cout << "Sum of numbers in row " << i << " is " << sum << endl;
	}

	system("pause");
}

void task3()
{

	int A[6][8] = { 0 }, i, j, prod = 1;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 8; j++)
		{
			A[i][j] = -2 + rand() % 7;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	for (i = 0; i < 6; i++)
	{
		if (A[i][0] > 0)
			prod *= A[i][0];
	}
	cout << "Production of positive numbers in frist coloumn is " << prod << endl;
	system("pause");
}

void task4()
{

	int A[4][4] = { 0 }, i, j, a = 1;

	for (i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			for (j = 0; j < 4; j++)
			{
				A[i][j] = a++;
			}
		}
		else
		{
			for (j = 3; j >= 0; j--)
			{
				A[i][j] = a++;
			}
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
}

void task5()
{
	int A[5][4] = { { 0 },{ 0 } }, i, j, B[5] = { 0 };

	cout << "Given array:" << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = 0 + rand() % 10;
			cout << A[i][j] << "\t";
		}
		cout << endl;
		B[i] = i;
	}
	
	cout << "New array:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << B[i] << endl;
	}

	system("pause");
}

void task6()
{

	int A[4][4] = { { 0 },{ 0 } }, i, j;

	cout << "Given array:" << endl;;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			A[i][j] = -10 + rand() % 20;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	int a, count = 0, C[16] = { 0 };
	cout << "Write number from 0 to 9: ";
	cin >> a;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (abs(A[i][j]) > abs(a))
			{
				C[count] = A[i][j];
					count++;
			}
		}
	}
	if (count > 0)
	{
		cout << "Amount of numbers absolutely greater than " << a << " is " << count << endl;
		for (i = 0; i < count; i++)
		{
			cout << C[i] << endl;
		}
	}
	else
	{
		cout << "There is no numbers absolutely greater than " << a << endl;
	}
	system("pause");
}

void task7()
{
	/*7.	Дана целочисленная матрица размера 8х5. Определить: 
a.	сумму всех элементов второго столбца массива; 
b.	сумму всех элементов 3-й строки массива.
*/
	int A[8][5] = { 0 }, i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = -2 + rand() % 7;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	int sum = 0;
	for (i = 0; i < 8; i++)
	{
		sum += A[i][1];
	}
	cout << "Sum of the numbers in the second coloumn is " << sum << endl;
	sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += A[2][i];
	}
	cout << "Sum of the numbers in the third row is " << sum << endl;
	system("pause");
}

void task8()
{

	int A[4][6] = { { 0 },{ 0 } }, i, j, B[10] = { 0 };

	cout << "Given array:" << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			A[i][j] = 0 + rand() % 20;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	int a = 0, prod = 1;
	cout << "New array:" << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			B[a] = A[i][j];
			a++;
			if (a >= 10)
				break;
		}
		if (a >= 10)
			break;
	}

	for (i = 0; i < 10; i++)
	{
		cout << B[i] << endl;
	}
	system("pause");
}

void task9()
{
	int A[4][6] = { { 0 },{ 0 } }, i, j;

	cout << "Given array:" << endl;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			A[i][j] = 0 + rand() % 20;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}
	int count = 0, min = 12, minCol;
	for (i = 0; i < 6; i++)
	{
		count = 0;
		for (j = 0; j < 4; j++)
		{
			if ((i + j != 0) && (A[j][i] % (i + j) == 0))
				count++;
		}
		if (count < min)
		{
			min = count;
			minCol = i;
		}
	}
	cout << "Coloumn number " << minCol << " has min amount of numbers multipled by sum of the indexes" << endl;
	system("pause");
}

void task10()
{
	
	int A[5][5] = { { 0 },{ 0 } }, i, j;

	cout << "Given array:" << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			A[i][j] = 0 + rand() % 20;
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}

	int sum = 0;
	for (i = 3; i >= 0; i--)
	{
		for (j = 4; j > i; j--)
		{
			sum += A[i][j];
		}
	}
	cout << "Sum of numbers higher than the main diag is " << sum << endl;

	system("pause");
}


int main()

{
	int task, flag;

start:

	printf("Write the number of task: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	}

	printf("Do you want to continue? 1 or 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}