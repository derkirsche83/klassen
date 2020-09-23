#ifndef FILIALLEITER_H
#define FILIALLEITER_H

#include "angestellter.h"

class Filialleiter : public Angestellter
{
	float m_weihnachtsgeld;

public:
	Filialleiter(const std::string& nn, const std::string& vn, const std::string gebt, const std::string gebm, const std::string gebj, char g,
		const std::string pnr, float mgeh, float wg) : Angestellter {
		nn, vn, gebt, gebm, gebj, g, pnr, mgeh }, m_weihnachtsgeld{ wg } {
		}

	float getWeihnachtsgeld() const { 
		return m_weihnachtsgeld;
	}

	float getJahresgehalt() const {
		return Angestellter::getJahresgehalt() + m_weihnachtsgeld;
	}
};

#endif FIIALLEITER_H