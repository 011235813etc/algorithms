#pragma once

template<typename T, typename U>
class BinarySearch
{
	T& container;
	int size;
public: 
	BinarySearch(T& _container, int _size) : container(_container), size(_size) { };
	int search(U value) {
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
            } else {
                p = q + 1;
            }
        } while (p <= r);
        return -1;
    }

    int search_recursive(U value) {
        return recursive_binary_search(container, 0, this->size, value);
    }

private:
    int recursive_binary_search(T& _container, int p, int r, U value) {
        if (p > r) {
            return -1;
        } else {
            int q = (p + r) / 2;
            if (this->container[q] == value) {
                return q;
            }
            if (this->container[q] > value) {
                return recursive_binary_search(_container, p, q - 1, value);
            } else {
                return recursive_binary_search(_container, q + 1, r, value);
            }
        }
    }
};
