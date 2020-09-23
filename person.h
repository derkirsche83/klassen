#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
class Person {
	std::string m_nachname;
	std::string m_vorname;
	std::string m_geburtstag;
	std::string m_geburtsmonat;
	std::string m_geburtsjahr;
	std::string m_geburtsdatum = m_geburtstag + '.' + m_geburtsmonat + '.' + m_geburtsjahr;
	char m_geschlecht;
public:
	Person() {
		std::cout << "Neue Person wird angelegt..." << std::endl;
		std::cout << "Bitte Daten erfassen..." << std::endl;
		std::cout << "Nachname: ";
		std::cin >> m_nachname;
		std::cout << "Vorname: ";
		std::cin >> m_vorname;
		std::cout << "Geburtstag (01-31): ";
		std::cin >> m_geburtstag;
		std::cout << "Geburtsmonat (01-12): ";
		std::cin >> m_geburtsmonat;
		std::cout << "Geburtsjahr: ";
		std::cin >> m_geburtsjahr;
		std::cout << "Geschlecht (m, w, d): ";
		std::cin >> m_geschlecht;
		while (m_geschlecht != 'd' && m_geschlecht != 'm' && m_geschlecht != 'w') {
			std::cout << "FEHLER! m, w oder d eingeben!" << std::endl;
			std::cout << "Geschlecht: ";
			std::cin >> m_geschlecht;
		}
		m_geburtsdatum = m_geburtstag + '.' + m_geburtsmonat + '.' + m_geburtsjahr;
	};
	
	Person(const std::string& nn, const std::string vn, const std::string gebt, std::string gebm, std::string gebj, char g) : m_nachname{ nn }, 
		m_vorname{ vn }, m_geburtstag{ gebt }, m_geburtsmonat{ gebm }, m_geburtsjahr{ gebj }, m_geschlecht{ g } {
	}

	~Person() {
		std::cout << "Programmende, Person geloescht: " << "\t" << m_nachname << ", " << m_vorname << " (" << m_geburtsdatum << ")" << std::endl;
	}

	std::string getNachname() const { 
		return m_nachname;
	}

	std::string getVorname() const { 
		return m_vorname;
	}

	std::string getName() const { 
		return m_vorname + " " + m_nachname; }
	
	std::string getGeburtsdatum() const {
		return m_geburtsdatum;
	}

	char getGeschlecht() const { 
		return m_geschlecht;
	}

	void setNachname(std::string new_nm) {
		m_nachname = new_nm;
	}

	void getDatensatz() const {
		std::cout << "Nachname: " << m_nachname << std::endl;
		std::cout << "Vorname: " << m_vorname << std::endl;
		std::cout << "Geburtsdatum: " << m_geburtsdatum << std::endl;
		std::cout << "Geschlecht: ";
		if (m_geschlecht == 'm') { std::cout << "maennlich"; }
		else if (m_geschlecht == 'w') { std::cout << "weiblich"; }
		else if (m_geschlecht == 'd') { std::cout << "divers"; }
		else (std::cout << "Fehlerhafte Daten...");
		std::cout << std::endl;
	}
		friend std::ostream& operator<<(std::ostream & os, Person const& p)
		{
			os << p.m_nachname << ", " << p.m_vorname << std::endl << p.m_geburtsdatum;
			if (p.m_geschlecht == 'm') { os << "maennlich" << std::endl; }
			else if (p.m_geschlecht == 'w') { os << "weiblich" << std::endl; }
			else if (p.m_geschlecht == 'd') { os << "divers" << std::endl; }
			else os << "Geschlecht nicht definiert" << std::endl;
			return os;
		}

		friend std::istream& operator>>(std::istream & is, Person & p)
		{
			is >> p.m_nachname >> p.m_vorname;

			return is;

		}
};

#endif