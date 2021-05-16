#pragma once
#include <iterator>
#include <limits>
#include <string>

template <class T, typename U>
class MergeSort {
	T& container;
	int size;
	const char* const end_of_str = "\0";
	U max_value;
public:
	MergeSort(T& _container, int _size) : container(_container), size(_size) {}

	T& sort_recursive() {
		recursive_merge_sort(0, size-1);
		return container;
	}
private:

	template <typename U>
	void merge(int p, int q, int r) {
		T B(container.begin() + p, container.begin() + q + 1);
		B.push_back(std::numeric_limits<U>::max());
		T C(container.begin() + q + 1, container.begin() + r + 1);
		C.push_back(std::numeric_limits<U>::max());

		int k = p, i = 0, j = 0;
		while (k <= r) {
			container[k++] = (B[i] <= C[j]) ? B[i++] : C[j++];
		}
	}

	template <>
	void merge<std::string>(int p, int q, int r) {
		T B(container.begin() + p, container.begin() + q + 1);
		B.push_back(end_of_str);
		T C(container.begin() + q + 1, container.begin() + r + 1);
		C.push_back(end_of_str);

		int i = 0, j = 0;
		while (p <= r) {
			container[p++] = (C[j] == end_of_str || B[i] != end_of_str && B[i] <= C[j]) ? B[i++] : C[j++];
		}
	}

	void recursive_merge_sort(int p, int r) {
		if (p >= r) {
			return;
		}
		int q = (p + r) / 2;
		recursive_merge_sort(p, q);
		recursive_merge_sort(q + 1, r);
		merge<U>(p, q, r);
	}
};

