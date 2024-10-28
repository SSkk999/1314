#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
void task4(int arr, int elm) {
	int plus = 0, plus1 = 0;
	int** parr = new int* [arr];
	for (int i = 0; i < arr; i++)
	{
		parr[i] = new int[elm];
	}
	for (int i = 0; i < arr; i++)
	{
		for (int j = 0; j < elm; j++)
		{
			parr[i][j] = rand() % 100;
		}
	}
	for (int i = 0; i < arr; i++)
	{
		for (int j = 0; j < elm; j++)
		{
			cout << setw(2) << parr[i][j] << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < elm; j++)
		{
			swap(parr[i + plus1][j - plus], parr[i][j]);
			plus++;
			plus1++;
		}
		

		cout << "\n";
	}
	for (int i = 0; i < 1; i++)
	{
		plus1 = 2;
		plus = 1;
		for (int j = 0; j < 1; j++)
		{
			swap(parr[i + plus1][j + plus], parr[i + plus][j + plus1]);

		}


		cout << "\n";
	}
	for (int i = 0; i < arr; i++)
	{
		for (int j = 0; j < elm; j++)
		{
			cout << setw(2) << parr[i][j] << " ";
		}
		cout << "\n";

	}
	for (int i = 0; i < arr; i++)
	{
		delete[]parr[i];
	}
	delete[]parr;

}
int main()
{

	//srand(time(NULL));
	//int countArr, countElems, countElems1, columnposition;
	//int null = 0;
	//cout << "Enter count of arrays: ";
	//cin >> countArr;
	//cout << "Enter count of elements in array: ";
	//cin >> countElems;
	//int** parr = new int* [countArr];
	//for (int i = 0; i < countArr; i++)
	//{
	//	parr[i] = new int[countElems];
	//}
	//for (int i = 0; i < countArr; i++)
	//{
	//	for (int j = 0; j < countElems; j++)
	//	{
	//		parr[i][j] = rand() % 100;
	//	}
	//}
	//for (int i = 0; i < countArr; i++)
	//{
	//	for (int j = 0; j < countElems; j++)
	//	{
	//		cout << setw(2) << parr[i][j] << " ";
	//	}
	//	cout << "\n";
	//}
	//int** parr1 = new int* [1];
	//cout << "how many elements:";
	//cin >> countElems1;
	//if (countElems1 != countArr)
	//{
	//	cout << "the number must match the number of arrays:";
	//	cin >> countElems1;
	//}
	//for (int j = 0; j < 1; j++)
	//{
	//	parr1[j] = new int  [countElems1];
	//}

	//for (int  i = 0; i < 1; i++)
	//{
	//	for (int j = 0; j < countElems1; j++)
	//	{
	//		cout << "ELEMENTS:";
	//		cin >> parr1[i][j];
	//	}
	//}
	//cout << "lead the indicated position where the column is placed:";
	//cin >> columnposition;
	//for (int i = 0; i < countArr ; i++)
	//{
	//	for (int j = 0; j < countElems ; j++)
	//	{
	//		if (columnposition - 1 == j  )
	//		{

	//		cout << setw(2) << parr1[i - null][i] << " ";

	//			
	//			
	//		}

	//		cout << setw(2) << parr[i][j] << " ";
	//	}
	//	cout << endl;
	//	null++;
	//}


	//for (int i = 0; i < countArr; i++)
	//{
	//	delete[]parr[i];
	//}
	//delete[]parr;
	//for (int i = 0; i < 1; i++)
	//{
	//	delete[]parr1[i];
	//}
	//delete[]parr1;

	//////////////////////////////////////////task2

	//srand(time(NULL));
	//int countArr, countElems, countElems1, columnposition;
	//int null = 0;
	//cout << "Enter count of arrays: ";
	//cin >> countArr;
	//cout << "Enter count of elements in array: ";
	//cin >> countElems;
	//int** parr = new int* [countArr];
	//for (int i = 0; i < countArr; i++)
	//{
	//	parr[i] = new int[countElems];
	//}
	//for (int i = 0; i < countArr; i++)
	//{
	//	for (int j = 0; j < countElems; j++)
	//	{
	//		parr[i][j] = rand() % 100;
	//	}
	//}
	//for (int i = 0; i < countArr; i++)
	//{
	//	for (int j = 0; j < countElems; j++)
	//	{
	//		cout << setw(2) << parr[i][j] << " ";
	//	}
	//	cout << "\n";
	//}

	//cout << "lead the indicated position where the column is placed:";
	//cin >> columnposition;
	//for (int i = 0; i < countArr; i++)
	//{
	//	for (int j = 0; j < countElems; j++)
	//	{
	//		if (columnposition - 1 == j)
	//		{


	//			continue;


	//		}

	//		cout << setw(2) << parr[i][j] << " ";
	//	}
	//	cout << endl;
	//	null++;
	//}


	//for (int i = 0; i < countArr; i++)
	//{
	//	delete[]parr[i];
	//}
	//delete[]parr;



///////////////////////////////task3
//srand(time(NULL));
//int countArr = 3, countElems = 3;
//int null = 0;
//int columnposition;
//int** parr = new int* [countArr];
//for (int i = 0; i < countArr; i++)
//{
//	parr[i] = new int[countElems];
//}
//for (int i = 0; i < countArr; i++)
//{
//	for (int j = 0; j < countElems; j++)
//	{
//		parr[i][j] = rand() % 100;
//	}
//}
//for (int i = 0; i < countArr; i++)
//{
//	for (int j = 0; j < countElems; j++)
//	{
//		cout << setw(2) << parr[i][j] << " ";
//	}
//	cout << "\n";
//}
//
//cout << "1-all up by 1 step 2 - all down one step 3 - all to the left one step 4 - all to the right for 1 step:";
//cin >> columnposition;
//if (columnposition == 1)
//{
//	for (int i = 1; i < countArr; i++)
//	{
//		for (int j = 0 ; j < countElems; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		cout << endl;	
//	}
//	for (int i = 0; i < 1; i++)
//	{
//		for (int j = 0; j < countElems; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//if (columnposition == 2)
//{
//	for (int i = 2; i < countArr; i++)
//	{
//		for (int j = 0; j < countElems; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 0; i < 1; i++)
//	{
//		for (int j = 0; j < countElems; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int i = 1; i < 2; i++)
//	{
//		for (int j = 0; j < countElems; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//}
//if (columnposition == 3)
//{
//	for (int i = 0; i < 1; i--)
//	{
//		for (int j = 2; j < 3; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		for (int j = 0; j < 2; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		cout << endl;
//		for (int j = 2; j < 3; j++)
//		{
//
//
//			cout << setw(2) << parr[i+1][j] << " ";
//		}
//		for (int j = 0; j < 2; j++)
//		{
//
//
//			cout << setw(2) << parr[i+1][j] << " ";
//		}
//		cout << endl;
//		for (int j = 2; j < 3; j++)
//		{
//
//
//			cout << setw(2) << parr[i + 2][j] << " ";
//		}
//		for (int j = 0; j < 2; j++)
//		{
//
//
//			cout << setw(2) << parr[i + 2][j] << " ";
//		}
//		cout << endl;
//	}
//	
//}
//if (columnposition == 4)
//{
//	for (int i = 0; i < 1; i++)
//	{
//		for (int j = 2; j < 1; j--)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		for (int j = 0; j < 2; j++)
//		{
//
//
//			cout << setw(2) << parr[i][j] << " ";
//		}
//		cout << endl;
//		for (int j = 2; j < 1; j--)
//		{
//
//
//			cout << setw(2) << parr[i + 1][j] << " ";
//		}
//		for (int j = 0; j < 2; j++)
//		{
//
//
//			cout << setw(2) << parr[i + 1][j] << " ";
//		}
//		cout << endl;
//		for (int j = 2; j < 1; j--)
//		{
//
//
//			cout << setw(2) << parr[i + 2][j] << " ";
//		}
//		for (int j = 0; j < 2; j++)
//		{
//
//
//			cout << setw(2) << parr[i + 2][j] << " ";
//		}
//		cout << endl;
//	}
//
//}
//for (int i = 0; i < countArr; i++)
//{
//	delete[]parr[i];
//}
//delete[]parr;
//
//
//}
////////////////////////////task444444


//	srand(time(NULL));
//	int countArr = 3, countElems = 3, countElems1, columnposition;
//	int null = 0;
//
//	task4(countArr, countElems);
//
//
//}
	srand(time(NULL));
	int countArr, countElems, countElems1, columnposition, choice, countElems8 = 0;
	int null = 0;
	int countElems8 = 0;
	cout << "Enter count of elements in array: ";
	cin >> countElems;
	string* parr = new string[countElems];
	int* parr1 = new int[countElems];

	for (int i = 0; i < countElems; i++)
	{

		cout << "Name:";
		cin >> ws;
		getline(cin, parr[i]);

	}
	cout << "\n";
	for (int i = 0; i < countElems; i++)
	{


		cout << "number:";
		cin >> parr1[i];


	}
	for (int i = 0; i < countElems; i++)
	{
		cout << setw(2) << parr[i] << " ";

	}
	cout << endl;
	for (int i = 0; i < countElems; i++)
	{
		cout << setw(6) << parr1[i] << " ";

	}
	cout << endl;
	while (true) {
		cout << "\n1-search by name:\n 2 - search by nomer:\n 3-change:\n 4- to add:\n5- display the contact book:\n 6-exit \nEnter:";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			string search;
			cout << "Enter Name:";
			cin >> ws;
			getline(cin, search);
			for (int i = 0; i < countElems; i++)
			{
				if (search == parr[i]) {
					cout << "the name belongs to the number:" << setw(2) << parr1[i];
				}
			}
			break;
		}
		case 2:
		{
			int search;
			cout << "Enter number:";
			cin >> search;
			for (int i = 0; i < countElems; i++)
			{
				if (search == parr1[i]) {
					cout << "the number that belongs to the name:" << setw(2) << parr[i];
				}
			}
			break;
		}
		case 3:
		{
			int search, choice1, choice4, choice5;
			string choice2, choice3;
			cout << "that change the \n 1-name \n 2-number" << endl;
			cout << "Enter:";
			cin >> choice1;
			if (choice1 == 1)
			{
				cout << "enter the name you want to change:";
				cin >> choice2;
				for (int i = 0; i < countElems; i++)
				{
					if (choice2 == parr[i]) {
						cout << "new name:";
						cin >> ws;
						getline(cin, choice3);

						parr[i] = choice3;

					}
					else {
						cout << "not found!!!";
					}
				}

				
			}
			if (choice1 == 2)
			{
				cout << "enter the number you want to change:";
				cin >> choice5;
				for (int i = 0; i < countElems; i++)
				{
					if (choice5 == parr1[i]) {
						cout << "new number:";
						cin >> choice4;

						parr1[i] = choice4;
						break;
					}
					else {
						cout << "not found!!!";
					}
				}


				
			}
			break;
		}
		cout << "Enter count of elements in array: ";
		cin >> countElems8;
		string* parr2 = new string[countElems + countElems8];
		int* parr3 = new int[countElems + countElems8];
		case 4:
		{

			int countArr, columnposition, choice;
			int null = 0;
			for (int i = 0; i < countElems; i++)
			{
				parr[i] == parr2[i];
			}
			for (int i = 0; i < countElems; i++)
			{
				parr1[i] == parr3[i];
			}
			for (int i = countElems; i < countElems + countElems8; i++)
			{

				cout << "Name:";
				cin >> ws;
				getline(cin, parr2[i]);

			}
			cout << "\n";
			for (int i = countElems ; i < countElems + countElems8; i++)
			{


				cout << "number:";
				cin >> parr3[i];


			}
			delete[] parr2;
			delete[] parr3;
			break;
		}
		case 5:
		{

			if (countElems8 == 0)
			{
				for (int i = 0; i < countElems; i++)
				{
					cout << setw(2) << parr[i] << " ";

				}
				cout << endl;
				for (int i = 0; i < countElems; i++)
				{
					cout << setw(4) << parr1[i] << " ";

				}
			}
			else
			{
				for (int i = 0; i < countElems + countElems8; i++)
				{
					cout << setw(2) << parr2[i] << " ";

				}
				cout << endl;
				for (int i = 0; i < countElems + countElems8; i++)
				{
					cout << setw(4) << parr3[i] << " ";

				}
			}
			break;
		}
		case 6: {

			
				break;
			
			
			

		}
			 
		
		default: {
			cout << "not found!!!";
		}

		}
		if (choice == 6)
		{
			break;
		}
	}

	delete[]parr;
	delete[]parr1;




}

