#include<iostream>
#include<fstream>
using namespace std;
void bubble_sort(int num_array[], int num)
{
	ofstream obj;
	cout << "enter any 10 numbers"<<endl;
	for (int i = 0; i < num; i++)
	{
		cin >> num_array[i];
	}
	for (int i = 0; i <num ; i++)
	{
		for (int j = i+1; j < num; j++)
		{
			if (num_array[j] < num_array[i])
			{
				int temp = num_array[i];
				num_array[i] = num_array[j];
				num_array[j] = temp;
			}
		}
	}
	obj.open("inputs.txt");
	obj << "with bubble sorting are  "<<endl;
	for (int i = 0; i < num; i++)
	{
		obj << num_array[i] << "   ";
	}
	obj.close();
}
void selection_sort(int num_array1[], int num1)
{
	ofstream obj;
	cout << "enter again 10 elements "<<endl;
	for (int i = 0; i < num1; i++)
	{
		cin >> num_array1[i];
	}
	for (int i = 0; i < num1 - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < num1; j++)
		{
			if (num_array1[j] < num_array1[min]) //Condition to compare elemet with next element;
			{
				int temp = num_array1[min];
				num_array1[min] = num_array1[j];
				num_array1[j] = temp;
			}
		}
	}
	obj.open("inputs.txt", ios::app);
	obj << "with selecting sorting are  " << endl;
	for (int i = 0; i < num1; i++)
	{
		obj << num_array1[i] << "   ";
	}
	obj.close();
}
int main()
{
	int num_array[10];
	int num = 10;
	bubble_sort(num_array, num);
	int num_array1[10];
	int num1 = 10;
	selection_sort(num_array1, num1);
	return 0;
}
