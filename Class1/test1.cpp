#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person p = Person("Nathan", "Totten", "30", 2002);

	p.print();

	Person* newP = new Person();

	newP->set_given_name("Bob");
	newP->set_family_name("Ross");
	newP->set_birth_year(1945);
	newP->set_ID_number("X21Y");

	newP->print();



	return 0;
}
