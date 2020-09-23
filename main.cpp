#include "person.h"
#include "angestellter.h"
#include "filialleiter.h"
#include <iostream>
#include <fstream>
#include <ostream>
#include "t_optional.h"
using std::cout;

//int main()
//{
//
//	Optional<int> o;
//	Optional<std::string> s;
//	o.set(42);
//	std::cout << "Hat s derzeit einen Wert? " << s.hasValue() << std::endl;
//	s.set("Hi there!");
//	
//	std::cout << "Hat s derzeit einen Wert? " << s.hasValue() << std::endl;
//	std::cout << "s = " << s.get() << std::endl;
//
//	s.clear();
//	std::cout << "Hat s derzeit einen Wert? " << s.hasValue() << std::endl;
//
//	Optional<bool> b1 { 1 };
//	std::cout << "Wert von b1: " << b1.get() << std::endl;
//	Optional<bool> b2;
//	std::cout << "Hat b2 einen Wert? " << b2.hasValue() << std::endl;
//	b2.set(1);
//	b1.set(0);
//}


int main() {
	// time_t timer;
	
	Person p1{ "Muschik", "Jannik", "09", "10","1998", 'm' };
	cout << p1.getNachname() << "\n";
	cout << p1.getVorname() << "\n";
	cout << p1.getGeschlecht() << "\n";
	cout << p1.getGeburtsdatum() << "\n";
	std::cout << std::endl;

	Person p2{ "Holl", "Lisa", "29", "02","2000", 'w' };
	cout << p2.getNachname() << "\n";
	cout << p2.getVorname() << "\n";
	cout << p2.getGeschlecht() << "\n";
	cout << p2.getGeburtsdatum() << "\n";
	std::cout << std::endl;

	Person p3{ "Posch", "Kim", "24", "12","1967", 'd' };
	cout << p3.getNachname() << "\n";
	cout << p3.getVorname() << "\n";
	cout << p3.getGeschlecht() << "\n";
	cout << p3.getGeburtsdatum() << "\n";
	std::cout << std::endl;

	Person p4{ "Gnanendram", "Isaac Newton", "01", "05","1970", 'm' };
	cout << p4.getNachname() << "\n";
	cout << p4.getVorname() << "\n";
	cout << p4.getGeschlecht() << "\n";
	cout << p4.getGeburtsdatum() << "\n";
	std::cout << std::endl;

	Person p5{ "Gaenus", "Muedeline", "30", "03", "2002", 'd' };
	cout << p5.getNachname();
	std::cout << std::endl;
	// p5.setNachname("Meier");
	cout << p5.getNachname();
	std::cout << std::endl;

	Angestellter a1{ "Gaenus", "Muedeline", "30", "03", "2002", 'd', "74656", 2300};
	cout << a1.getGeschlecht() << std::endl;
	cout << a1.getMonatsgehalt() << std::endl;
	cout << a1.getJahresgehalt() << std::endl;

	Filialleiter f1{ "Scheff", "Boss", "12", "01", "1963", 'm', "123", 5000, 350 };
	cout << f1.getNachname() << std::endl;
	cout << f1.getMonatsgehalt() << std::endl;
	cout << f1.getWeihnachtsgeld() << std::endl;
	cout << f1.getJahresgehalt() << std::endl;
	cout << f1.getName() << std::endl;
	
	cout << a1.getPersonalnummer() << std::endl;

	Person p55 {};
	std::cout << p55.getNachname() << std::endl;
	std::cout << p55.getGeburtsdatum() << std::endl;
	p55.setNachname("Petersen");
	p55.getDatensatz();

	std::fstream f;
	f.open("person.txt", std::ios::app);
	f << p2 << std::endl << a1 << std::endl << p5 << std::endl << p2 << std::endl << f1 << std::endl << p55;
	f.close();
}
//#include <iostream>
//#include <iomanip>
//#include <ctime>
//
////using namespace std;
////
////int main() {
////	time_t jetzt;
////	struct tm jetztLokal;
////	string tagFeld[7] = { "Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag" };
////
////	jetzt = time(NULL);
////	cout << jetzt << endl;
////
////	}

