#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	setlocale (LC_ALL, "Ru");

	srand (time(NULL));

	// �������� �������� ���������� ��� ����.
	string Rock = "rock";
	string Paper = "paper";
	string Scissor = "scissor";
	string Variant1;
	string Variant2;

	// ���������� ��� ����������� � ��� ����� ������ ��� �����, � �� ��� ������ �������.
	string Vibor;
	string Pk = "pk";
	string Gamer = "game";

	// ������ ��������� �������� ��� ���� � ��
	string arr[] = {Rock, Paper, Scissor};
	string r = arr [rand() % 3];
	
	cout << "�������� ������� ��� ������ ��� Rock Paper Scissor - ";
	cout << "��� ����, � ������� ������ ��� ��������, ������ ����� � ���� ���� ��������� ���� �� ���� �����. ";
	cout << "���������� ����� ��������� � ������������ � ������������ ���������.: " << endl;
	cout << "1) ������ ������ ������ -> Rock ���������" << endl;
	cout << "������ ������ ������ -> Paper ���������" << endl;
	cout << "������ ������ ������ -> Scissor ���������" << endl;

	// ���������� ����� ������ � �� ��� � ������ ���������

	cout << "�������� � ��� ������ ������? � PK ��� � ������� (gamer)? ";
	cin >> Vibor;
	
	if (Vibor == Gamer)
	{
		cout << "����� � ������ - ������� - ������, � ���� �������� �� ��� ���������? ";
		cin >> Variant1;
		cout << "����� � ������ - ������� - ������, � ���� �������� �� ��� ���������? ";
		cin >> Variant2;


		if (Variant1 == Rock && Variant2 == Scissor)
		{
			cout << "������ �� ����";
		}
		else if (Variant1 == Rock && Variant2 == Paper)
		{
			cout << "�� ���������!";
		}
		else if (Variant1 == Rock && Variant2 == Rock)
		{
			cout << "�����!";
		}
		else if (Variant1 == Paper && Variant2 == Rock)
		{
			cout << "������ �� ����";
		}
		else if (Variant1 == Paper && Variant2 == Scissor)
		{
			cout << "�� ���������";
		}
		else if (Variant1 == Paper && Variant2 == Paper)
		{
			cout << "�����!";
		}
		else if (Variant1 == Scissor && Variant2 == Paper)
		{
			cout << "������ �� ����";
		}
		else if (Variant1 == Scissor && Variant2 == Rock)
		{
			cout << "�� ���������";
		}
		else if (Variant1 == Scissor && Variant2 == Scissor)
		{
			cout << "�����!";
		}
		else
		{
			cout << "������ �� ����������!";
		}
	}
	else if (Vibor == Pk)
	{
		cout << "����� � ������ - ������� - ������, � ���� �������� �� ��� ���������? ";
		cin >> Variant1;
		Variant2 = r;

		if (Variant1 == Rock && Variant2 == Scissor)
		{
			cout << "������ �� ����";
		}
		else if (Variant1 == Rock && Variant2 == Paper)
		{
			cout << "�� ���������!";
		}
		else if (Variant1 == Rock && Variant2 == Rock)
		{
			cout << "�����!";
		}
		else if (Variant1 == Paper && Variant2 == Rock)
		{
			cout << "������ �� ����";
		}
		else if (Variant1 == Paper && Variant2 == Scissor)
		{
			cout << "�� ���������";
		}
		else if (Variant1 == Paper && Variant2 == Paper)
		{
			cout << "�����!";
		}
		else if (Variant1 == Scissor && Variant2 == Paper)
		{
			cout << "������ �� ����";
		}
		else if (Variant1 == Scissor && Variant2 == Rock)
		{
			cout << "�� ���������";
		}
		else if (Variant1 == Scissor && Variant2 == Scissor)
		{
			cout << "�����!";
		}
		else
		{
			cout << "������ �� ����������!";
		}

	}
	else
	{
		cout << "Error: �� ���� �� ������ ��������!" << endl;
	}

	return 0;
}