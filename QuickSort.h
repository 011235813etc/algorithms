#pragma once

template <typename T>
class QuickSort {
	T& container;
	int size;
public:
	QuickSort(T& _container, int _size) : container(_container), size(_size) {}

	T& sort_recursive() {
		recursive_sort(0, size - 1);
		return container;
	}
private:
	void recursive_sort(int p, int r) {
		if (p >= r) {
			return;
		}
		int q = partition(p, r);
		recursive_sort(p, q - 1);
		recursive_sort(q + 1, r);
	}
	int partition(int p, int r) {
		int q = p;
		int u = p;
		while (u <= r - 1) {
			if (container[u] <= container[r]) {
				auto temp = container[u];
				container[u] = container[q];
				container[q++] = temp;
			}
			u++;
		}
		auto temp = container[r];
		container[r] = container[q];
		container[q] = temp;

		return q;
	}
};