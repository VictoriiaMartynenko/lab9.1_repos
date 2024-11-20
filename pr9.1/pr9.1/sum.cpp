#include "var.h"
#include "dod.h"
#include "sum.h"
#include "cmath"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
	n = 0;
	a = 2.0 / x;
	s = a;
	do {
		n++;
		dod();
		s += a;
	} while (abs(a) >= eps);
	s = 2 * s;
}