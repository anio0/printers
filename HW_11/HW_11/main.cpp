#include <iostream>
#include "LinePrinter.h"
#include "NumberedLinePrinter.h"
#include "HidingLinePrinter.h"
#include <vector>
using namespace std;

int main() {
	/*LinePrinter PR(10);
	PR.Print("Meantime we shall express our darker purpose.");
	NumberedLinePrinter p(7);
	p.Print("Meantime we shall express our darker purpose.");
	HidingLinePrinter h(7);
	h.HiddenPrint("Meantime we shall express our darker purpose.");*/
	LinePrinter printer1(10);
	NumberedLinePrinter printer2(10);
	vector <char> a = {'a', 'o', 'e', 'p', 't'};
	HidingLinePrinter printer3(10, a);
	vector<LinePrinter *> printers = { &printer1, &printer2, &printer3 };
	for (int i = 0; i < printers.size(); i++)
	{
		printers[i]->Print("Meantime we shall express our darker purpose.");
	}
	vector <string> words = { "Some things are really good", "It doesn't matter ta all", "Happy new year", "Should I speak more laughter?" };
	for (int i = 0; i < printers.size(); i++)
	{
		printers[i]->FancyPrint(words);
	}
	system("pause");
}