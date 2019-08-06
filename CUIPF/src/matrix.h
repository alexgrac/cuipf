#ifndef MATRIX_H
#define MATRIX_h

#include <memory>

/*
* Abstract class that represents a bidimensional matrix.
* @author Alejandro Graciano
*/

template<class T>
class Matrix {
	size_t _cols;
	size_t _rows;
	T* _data;

public:

	Matrix() {}
	Matrix(size_t cols, size_t rows) : _col(cols), _rows(rows) {}
	Matrix(size_t cols, size_t rows, T *data) : _col(cols), _rows(rows), 
		_data() {}

};


#endif

