//mode.cpp

#include <iostream>

#define mode 1  

#ifndef mode  
	
#error no mode  
	
#endif



#if mode == 1

void add()
{
	std::cout << "Работаю в боевом режиме\n";
	std::cout << "Введите число 1:\n";
	int x = 0;
	std::cin >> x;
	std::cout << "Введите число 2:\n";
	int y = 0;
	std::cin >> y;
	std::cout << "Результат сложения: " << x + y;
}

#endif // DEBUG




int main()
{
	setlocale(LC_ALL, "RUS");
     


    #if mode == 0
	{
		std::cout << "Работаю в режиме тренировки \n";
	}
	
	#elif mode == 1
	{
		add();
	}
	#else
	{
		std::cout << "Неизвестный режим. Завершение работы \n";
	}
    #endif

  

	return 0;
}


