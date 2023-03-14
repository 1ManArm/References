#include <iostream>

template <typename T>
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

template <typename T>
void p_swap(T *num1, T *num2) {
	T tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}

template <typename T>
void ref_swap(T &num1, T &num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}


int MX[10][2];
int &ref_func(int index) {
	return MX[index][1];
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Массивы и ссылки
	/*std::cout << "Ввод в массив. \n";
	for (int i = 0; i < 10; i++) {
		std::cout << "Введите " << i + 1 << "-й элемент -> ";
		std::cin >> MX[i][0];
		ref_func(i) = MX[i][0];
	}
	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < 10; i++)
		std::cout << MX[i][0] << '\t' << ref_func(i) << '\n';*/

	//Ссылки - параметры функций
	/*n = 10; m = 15;
	std::cout << n << ' ' << m << std::endl;
	//p_swap(&n, &m); //рабочий неудобный вариант - нужно передавать адреса
	ref_swap(n, m);
	std::cout << n << ' ' << m << std::endl;*/

	//Ссылки
	/*n = 10; m = 20;
	int& refn = n; //Ссылка, ассоциирующаяся с переменной n
	std::cout << "refn = " << refn << std::endl;
	refn = m;
	std::cout << "refn = " << refn << std::endl;
	std::cout << "n = " << n << std::endl;*/

	//Примечания:
	/*1. Ссылки всегда ссылаются на объект. Требуют инициализации. Нет аналогов нейтрального указателя.
	  2. Нет операторов, производящих действия над ссылками. Все операции над ссылкой - операции над объектом ассоциации ссылки.
	  3. Ссылка - псевдоним для переменной. Стандарт C++ не определяет, как компилятор должен реализовывать механизм ссылок.*/



	return 0;
}