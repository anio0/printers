#include "HidingLinePrinter.h"





string HidingLinePrinter::PadFancy(const string & line, int N)
{
	string new_line = line;
	int sharps = N - new_line.size();
	int num;
	if (sharps > 0)
	{
		for (int i = 0; i < sharps; i++)
		{
			num = rand() % 10;
			new_line += std::to_string(num);
		}
	}
	return new_line;
}

HidingLinePrinter::HidingLinePrinter(int n, const vector<char> a):LinePrinter (n)
{
	
}

void HidingLinePrinter::Print(const string & line) const
{
	string str = line;
	for (int i = 0; i < line.length(); i++)
	{	
		if (line[i]=='a')
			str[i] = '*';
		if (line[i] == 'o')
			str[i] = '*';
		if (line[i] == 'e')
			str[i] = '*';
		if (line[i] == 'p')
			str[i] = '*';
		if (line[i] == 't')
			str[i] = '*';
	}
	cout << line << endl << endl;
	cout << "The  N is " << _n << endl;
	for (int i = 0; i < line.size(); i += _n)
	{
		cout << str.substr(i, _n);
		cout << endl;
	}
}



HidingLinePrinter::~HidingLinePrinter()
{
}
