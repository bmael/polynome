#include "array.h"

/**
 * \brief COnstruct an empty Array
 * */
Array::Array() {}

/**
 * \return  Return the double at the index i
 * \details If the array is empty, then the returned value is 0.0 (only temporary!)
 * */

double Array::get(const int & index)const {
	return this->arr_[index];
}

/**
 * \param[in] data a double to add at the end of the Array
 * */
void Array::add(const double& data) {
	this->arr_.push_back(data);
}
