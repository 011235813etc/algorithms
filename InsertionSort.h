#pragma once

template<typename T>
class InsertionSort {
	T& container;
	int size;
public:
	InsertionSort(T& _container, int _size) : container(_container), size(_size) { };

	T& sort() {
		for (int i = 1; i < size; i++) {
			auto key = container[i];
			int j = i - 1;
			while (j >= 0 && container[j] > key) {
				container[j + 1] = container[j];
				j--;
			}
			container[j + 1] = key;
		}
		return container;
	}
};