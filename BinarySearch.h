#pragma once

template<typename T, typename U>
class BinarySearch
{
	T& container;
	int size;
public: 
	BinarySearch(T& _container, int _size) : container(_container), size(_size) { };
	int find(U value) {
        int p = 0;
        int r = this->size;
        int q = 0;
        do {
            q = (p + r) / 2;
            if (this->container[q] == value) {
                return q;
            }
            if (this->container[q] > value) {
                r = q - 1;
            }
            else {
                p = q + 1;
            }
        } while (p <= r);
        return -1;
    }
};

