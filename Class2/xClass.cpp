#include "xClass.h"
#include <iostream>

using std::ostream;

xClass::xClass(int length, int max_val)
	: size(length), data(&max_val)
{
}



