#include "dod.h"
#include "var.h"
using namespace nsVar;

void nsDod::dod() {
	a *= (2 * n - 1) / (2.0 * n + 1.0) * (1 / (x * x));
}