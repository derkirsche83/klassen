#ifndef ANGESTELLTER_H
#define ANGESTELLTER_H

class Angestellter : public Person
{
	std::string m_persnr;
	float m_monatsgehalt;

public:
	Angestellter(const std::string& nn, const std::string& vn, const std::string gebt, const std::string gebm, const std::string gebj, char g,
		const std::string pnr, float mgeh)
		: Person{ nn, vn, gebt, gebm, gebj, g }, m_persnr{ pnr }, m_monatsgehalt{ mgeh } {
	}

	virtual std::string getPersonalnummer() const {
		return m_persnr;
	}

	virtual float getMonatsgehalt() const {
		return m_monatsgehalt;
	}

	virtual float getJahresgehalt() const {
		return 12 * m_monatsgehalt;
	}
};


#endif

