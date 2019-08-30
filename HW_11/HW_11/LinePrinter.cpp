#include "LinePrinter.h"



string LinePrinter::PadFancy(const string & line, int N)
{
	/*if (line.size()==N)
	{
		cout << line << endl;
	}	
	else
	{
		cout << line;
		for (int i = 0; i < N - line.size(); i++)
		{
			cout << "#";
		}
		cout << endl;
	}*/
	string new_line = line;
	int sharps = N - new_line.size();
	if (sharps>0)
	{
		new_line.append(sharps, '#');
	}
	return new_line;
}

LinePrinter::LinePrinter(int n)
{
	_n = n;
}

void LinePrinter::Print(const string & line) const
{
	cout << line << endl << endl;
	cout << "The  N is " << _n << endl;
	for (int i = 0; i < line.size(); i+=_n)
	{
		cout<<line.substr(i, _n);
		cout << endl;
	}
	cout << endl;
}

void LinePrinter::FancyPrint(vector<string>& lines)
{
	cout << endl;
	int N=0;
	for (int i = 0; i < lines.size(); i++) {
		if (N < lines[i].size())
		{
			N = lines[i].size();
		}
	}
	for (int i = 0; i < lines.size(); i++)
	{
		cout << PadFancy(lines[i], N) << endl;
	}
}


LinePrinter::~LinePrinter()
{
}
