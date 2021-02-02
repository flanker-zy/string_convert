#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;



string string_conver(string s, int numrow)
{
	char a[15] = {0};
	strcpy(a, s.c_str());
	int i = 0;
	int row = 0;
	int col = 0;
	char result[10][10] = { 0 };
	while (i < s.length())
	{
		result[row][col] = a[i];
		if (row != numrow - 1 && (col % (numrow-1) ==  0))
		{
			row++;
			i++;
		}
		else
		{
			col++;
			row--;
			i++;
		}
	}
	string result1;
	for(int i = 0;i<5;i++)
		for (int j = 0; j < 5; j++)
		{
			if (result[i][j] != 0)
			{
				result1 += result[i][j];
			}
		}
	return result1;
	
}


int main()
{
	string s = "translation";
	int numrow = 4;
	cout<<string_conver(s, numrow);
}