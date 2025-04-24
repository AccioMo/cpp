
#pragma once

#include <exception>

template <typename T>
class Array {
    private:
        T               *_array;
        unsigned int    _size;

    public:
        /* constructors */
        Array() : _size(0) { };
        Array(unsigned int size) : _size(size) {
            _array = new T[size];
        };
        Array(const Array &src) {
            _size = src._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = src._array[i];
            }
        };

        /* destructor */
        ~Array() {
            if (_size > 0)
                delete[] _array;
            _size = 0;
        };

        /* overload operators */
        Array &operator=(const Array &src) {
            if (this != &src) {
                if (_size > 0)
                    delete[] _array;
                _size = src._size;
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++) {
                    _array[i] = src._array[i];
                }
            }
            return *this;
        };
        T &operator[](unsigned int index) {
            if (index >= _size) {
                throw Array::OutOfBounds();
            }
            return _array[index];
        };

        /* getters */
        unsigned int size() const {
            return _size;
        };

        /* exception class */
        class OutOfBounds : public std::exception {
            public:
                const char *what() const throw() {
                    return "Index out of bounds";
                }
        };

};
