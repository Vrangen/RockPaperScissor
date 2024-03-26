#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{
	setlocale (LC_ALL, "Ru");

	srand (time(NULL));

	// Основные значения переменных для игры.
	string Rock = "rock";
	string Paper = "paper";
	string Scissor = "scissor";
	string Variant1;
	string Variant2;

	// Используем для определения с кем будет играть сам игрок, с пк или другим игроком.
	string Vibor;
	string Pk = "pk";
	string Gamer = "game";

	// Задаем рандомные значения для игры с ПК
	string arr[] = {Rock, Paper, Scissor};
	string r = arr [rand() % 3];
	
	cout << "Каменные ножницы для бумаги или Rock Paper Scissor - ";
	cout << "это игра, в которую играют два человека, каждый игрок в этой игре формирует одну из трех фигур. ";
	cout << "Победитель будет определен в соответствии с приведенными правилами.: " << endl;
	cout << "1) Камень против ножниц -> Rock побеждает" << endl;
	cout << "Камень против бумаги -> Paper побеждает" << endl;
	cout << "Бумага против ножниц -> Scissor побеждает" << endl;

	// Предложить выбор играть с пк или с другим человеком

	cout << "Выбирите с кем будите играть? с PK или с игроком (gamer)? ";
	cin >> Vibor;
	
	if (Vibor == Gamer)
	{
		cout << "Играя в камень - ножницы - бумага, в этом действии вы что выбираете? ";
		cin >> Variant1;
		cout << "играя в камень - ножницы - бумага, в этом действии вы что выбираете? ";
		cin >> Variant2;


		if (Variant1 == Rock && Variant2 == Scissor)
		{
			cout << "Победа за вами";
		}
		else if (Variant1 == Rock && Variant2 == Paper)
		{
			cout << "Вы проиграли!";
		}
		else if (Variant1 == Rock && Variant2 == Rock)
		{
			cout << "Ничья!";
		}
		else if (Variant1 == Paper && Variant2 == Rock)
		{
			cout << "Победа за вами";
		}
		else if (Variant1 == Paper && Variant2 == Scissor)
		{
			cout << "Вы проиграли";
		}
		else if (Variant1 == Paper && Variant2 == Paper)
		{
			cout << "Ничья!";
		}
		else if (Variant1 == Scissor && Variant2 == Paper)
		{
			cout << "Победа за вами";
		}
		else if (Variant1 == Scissor && Variant2 == Rock)
		{
			cout << "Вы проиграли";
		}
		else if (Variant1 == Scissor && Variant2 == Scissor)
		{
			cout << "Ничья!";
		}
		else
		{
			cout << "Данные не определены!";
		}
	}
	else if (Vibor == Pk)
	{
		cout << "Играя в камень - ножницы - бумага, в этом действии вы что выбираете? ";
		cin >> Variant1;
		Variant2 = r;

		if (Variant1 == Rock && Variant2 == Scissor)
		{
			cout << "Победа за вами";
		}
		else if (Variant1 == Rock && Variant2 == Paper)
		{
			cout << "Вы проиграли!";
		}
		else if (Variant1 == Rock && Variant2 == Rock)
		{
			cout << "Ничья!";
		}
		else if (Variant1 == Paper && Variant2 == Rock)
		{
			cout << "Победа за вами";
		}
		else if (Variant1 == Paper && Variant2 == Scissor)
		{
			cout << "Вы проиграли";
		}
		else if (Variant1 == Paper && Variant2 == Paper)
		{
			cout << "Ничья!";
		}
		else if (Variant1 == Scissor && Variant2 == Paper)
		{
			cout << "Победа за вами";
		}
		else if (Variant1 == Scissor && Variant2 == Rock)
		{
			cout << "Вы проиграли";
		}
		else if (Variant1 == Scissor && Variant2 == Scissor)
		{
			cout << "Ничья!";
		}
		else
		{
			cout << "Данные не определены!";
		}

	}
	else
	{
		cout << "Error: Вы вели не верные значения!" << endl;
	}

	return 0;
}