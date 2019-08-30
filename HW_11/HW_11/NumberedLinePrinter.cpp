#include "NumberedLinePrinter.h"

NumberedLinePrinter::NumberedLinePrinter(int n):LinePrinter(n)
{

}

void NumberedLinePrinter::Print(const string & line) const
{
	cout << line << endl << endl;
	cout << "The  N is " << _n << endl;
	for (int i = 0, k = 1; i < line.size(); i += _n, k++)
	{
		cout << k << ". ";
		//for (int j = 0; j < _n; j++) {
		//	cout << line[i + j]; //ошибка когда заканчивается текст
		//}
		cout<<line.substr(i, _n);
		cout << endl;
	}
}
NumberedLinePrinter::~NumberedLinePrinter()
{
}