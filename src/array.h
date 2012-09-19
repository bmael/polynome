#ifndef __ARRAY_H
#define __ARRAY_H

#include "contener.h"
#include <vector>

class Array : public Contener{

	private:
		std::vector<double> arr_;

	public: 
		Array();
		~Array();

		double get(const int & index)const;
		void add(const double & data);
		
};

#endif
