#include <iostream>
using namespace std;

int main(){
	/*escape последовательность*/

	/*
	\b Удаление последнего выведенного символа 
	\n Перейти на начало новой строки
	\t Перейти к следующей позиции табуляции

	\\ Вывести двойную черту \
	\" Вывести двойную ковычку "
	\' Вывести одинарную ковычку '
	*/
	cout << "\nHello world!!" << endl; 
	cout << "\bHello world!!" << endl;
	cout << "\tHello world!!" << endl;
	cout << "\\Hello world!!" << endl;
	cout << "\"Hello world!!" << endl;
	cout << "\'Hello world!!" << endl;

	return 0;
}