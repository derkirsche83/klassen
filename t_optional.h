#ifndef T_OPTIONAL_H
#define T_OPTIONAL_H

// To Do: Hier nur Deklarationen, Definitionen in t_optional.cpp auslagern
#include <iostream>

template <typename T> class Optional
{
	T mValue;
	bool mHasValue;

public:

	Optional() : mHasValue(false) { }

	Optional (T const &v) : mValue(v), mHasValue(true) { }

	void set(T const& v)
	{
		mValue = v;
		mHasValue = true;
	}

	void clear()
	{
		mHasValue = false;
	}

	T const& get() const
	{
		if (!mHasValue) {
			std::cerr << "Vorsicht! Leere Variable ausgelesen!\n";
		}
		return mValue;
	}

	bool hasValue() const
	{
		return mHasValue;
	}
	
	~Optional()
	{
		std::cout << "Programmende, Objekt geloescht, Wert: " << mValue << std::endl;
	}
};

#endif