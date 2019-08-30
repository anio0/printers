#pragma once
#include <iostream>
#include <string>
#include "LinePrinter.h"
using namespace std;
class HidingLinePrinter : public LinePrinter
{
protected:
	string PadFancy(const string & line, int N);
public:

	HidingLinePrinter(int n, const vector <char> a);
	void Print(const string & line) const override;
	~HidingLinePrinter();
};

