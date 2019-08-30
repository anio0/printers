#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class LinePrinter
{
protected:
	int _n;
	virtual string PadFancy(const string & line, int N);
public:
	LinePrinter(int n);
	virtual void Print(const string & line) const;
	void FancyPrint(vector <string>& printers);
	~LinePrinter();
};