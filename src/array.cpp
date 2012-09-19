#include "array.h"

Array::Array() {}


// If the array is empty, then the returned value is 0.0 (only temporary!)
double Array::get(const int & index)const {
	return this->arr_[index];
}

void Array::add(const double& data) {
	this->arr_.push_back(data);
}
