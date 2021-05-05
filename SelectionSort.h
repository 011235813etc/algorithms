#pragma once
template<typename T>
class SelectionSort
{
	T& container;
	int size;
public:
	SelectionSort(T& _container, int _size) : container(_container), size(_size) { };
	T& sort() {
		for (int i = 0; i < size; i++) {
			int smallest = i;
			for (int j = i + 1; j < size; j++) {
				if (container[j] < container[smallest]) {
					smallest = j;
				}
			}
			auto temp = container[smallest];
			container[smallest] = container[i];
			container[i] = temp;
		}
		return container;
	}
};

