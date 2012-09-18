#ifndef __CONTENER_H 
#define __CONTENER_H



class Contener {
    public:

	virtual void add(const double & data) =0;
	virtual double get(const int & index)const =0;

};

#endif