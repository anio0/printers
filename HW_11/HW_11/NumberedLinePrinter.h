#pragma once
#include "LinePrinter.h"
#include <iostream>
using namespace std;

class NumberedLinePrinter : public LinePrinter
{
public:
	NumberedLinePrinter(int n);
	void Print(const string & line) const;
	~NumberedLinePrinter();
};