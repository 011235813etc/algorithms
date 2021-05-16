#pragma once
#include <vector>
/*
 * «начени€ выходного массива должны быть равны 1 или 2
 */
class ReallySimpleSort {
	std::vector<int>& v;
	int size;
public:
	ReallySimpleSort(std::vector<int>& _v, int _size) : v(_v), size(_size) {}
	std::vector<int>& sort() {
		int k = 0;
		for (auto value : v) {
			if (value == 1) {
				k++;
			}
		}
		v.assign(k, 1);
		while (k++ < size) {
			v.push_back(2);
		}
		return v;
	}
};