// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include <windows.h>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

struct Group {
	string group_name;
	vector<vector<string>> students;
};


int pervoe_menu;
int vtoroe_menu;
int sizeofmassive;
string vibur_group;
string new_group;

int count_group = 0;
int sumvector;
int count;
int j = 0;
int i = 0;
int count_group1 = 0;
int count_all=0;
int ii;
int sizeofmassive_00;

string name, surname, patronymic;
std::vector<Group> groups;




void add_student()
{
	
	std::cout << "Ведите Имя\n";
	std::cin >> name;

	std::cout << "Ведите Фамилию\n";
	std::cin >> surname;

	std::cout << "Ведите Отчество\n";
	std::cin >> patronymic;

	groups[sizeofmassive].students.push_back(vector < string>(3));
	groups[sizeofmassive].students[j][0] = name;
	groups[sizeofmassive].students[j][1] = surname;
	groups[sizeofmassive].students[j][2] = patronymic;

	cout << "Имя \n" << groups[sizeofmassive].students[j][0];
	cout << "\nФамилия \n" << groups[sizeofmassive].students[j][1];
	cout << "\nОтчество \n" << groups[sizeofmassive].students[j][2];
	cout << "\n";
	j = j + 1;
	system("pause");
	
}

void summ_all_student()
{
	
}

//void dell_group()
//{
	//sizeofmassive_00 = 0;
	//std::cout << "\nВыбери группу\n";
	//std::cin >> vibur_group;
	//while (sizeofmassive_00 < count_group1)
	//{
	//
		//if (groups[sizeofmassive_00].group_name == vibur_group)
		//{
			//groups.clear(Group());
	//	}
	//}
//}

void find_group()
{
	//int sizeofmassive = sizeof(groups[0]);
	int sizeofmassive_0 = 0;

	while (sizeofmassive_0 < count_group1)
	{

		cout << "Группа " << groups[sizeofmassive_0].group_name;
		cout << "\n";
		sizeofmassive_0 = sizeofmassive_0 + 1;
	}


	

}

void all_student_group()
{
	while (i < j)
	{
		//	if (groups[sizeofmassive].group_name == vibur_group)
		//{

		//cout << "\nГруппа \n" << groups[sizeofmassive].group_name;
		cout << "\nИмя \n" << groups[sizeofmassive].students[i][0];
		cout << "\nФамилия\n" << groups[sizeofmassive].students[i][1];
		cout << "\nОтчество\n" << groups[sizeofmassive].students[i][2];
		//	}
		i = i + 1;
	}
	system("pause");
	
}

void all_student_in_group()
{
	
	while (count_all < count_group1)
	{
		
		while (ii < j)
		{
			//	if (groups[sizeofmassive].group_name == vibur_group)
			//{

			cout << "\nГруппа \n" << groups[count_all].group_name;
			cout << "\nИмя \n" << groups[count_all].students[ii][0];
			cout << "\nФамилия\n" << groups[count_all].students[ii][1];
			cout << "\nОтчество\n" << groups[count_all].students[ii][2];
			//	}
			ii= ii + 1;
		}
		count_all = count_all + 1;
	}
	cout << "\n";
	system("pause");
}

void add_new_group()
{
	std::cout << "Ведите название новой группы \n";
	std::cin >> new_group;
	groups.push_back(Group());
	groups[count_group1].group_name = new_group;
	cout << "Добавлена новая группа= \n" << groups[count_group1].group_name;

	cout << "\nКоличество элементов в векторе \n" << groups.size();
	count_group1 = count_group1 + 1;

	cout << "\n";
	system("pause");
}

void sum_group()
{
	cout << "\nКоличество элементов в векторе \n" << count_group1;
	cout << "\n";
	system("pause");
}

int main()
{
	
	
	setlocale(LC_ALL, "");  
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	while (true)
	{
	
		system("cls");
		
		{

			system("cls");
			

			printf("1.Выберите группу \n");
			printf("2.Добавить новую группу \n");
			printf("3.Количество групп \n");
			printf("4.Количество студентов из всех групп\n");
			printf("5.Удалить группу\n");

			scanf_s("%i", &pervoe_menu);
			if (pervoe_menu == 1 || pervoe_menu == 2 || pervoe_menu == 3 || pervoe_menu == 4)
			{
				switch (pervoe_menu)
				{
				case 1:
				{

					find_group();

					std::cout << "\nВыбери группу\n";
					std::cin >> vibur_group;

					int sizeofmassive = 0;

					while (sizeofmassive < count_group1)
					{



						if (groups[sizeofmassive].group_name == vibur_group)
						{
							printf("1.Добавить студента \n");
							printf("2.Вывести всех студентов \n");
							printf("0.Вернуться назад \n");
							scanf_s("%i", &vtoroe_menu);

							if (vtoroe_menu == 1)
							{

								add_student(); // добавляем нового студента
								break;
							}

							if (vtoroe_menu == 2)
							{
								all_student_group(); // все студенты во всех группах
								break;

							}


							else
							{

							}
						}

						sizeofmassive = sizeofmassive + 1;

					}


					break;

				}
				case 2:
				{
					add_new_group();	// добавляем новую группу			
					break;
				}
				case 3:
				{
					sum_group();
					break;
				}
				case 4:
				{
					all_student_in_group();
					break;
				}

				case 5:
				{
					find_group();
					//dell_group();
					break;
				}
				}
			}
			else
			{
				printf("error");
			}
		}


		
	}
	return 0;
}

