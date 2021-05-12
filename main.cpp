#include <iostream>
#include <vector>
#include "BinarySearch.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

using namespace std;


int main()
{
    //vector<int> vec_int { 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
    //BinarySearch<vector<int>, int> binary_search_int(vec_int, vec_int.size());
    //cout << binary_search_int.search(666) << endl;

    //vector<string> vec_str{ "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "qqq", "rrr", "sss" };
    //BinarySearch<vector<string>, string> binary_search_str(vec_str, vec_str.size());
    //cout << binary_search_str.search("fff") << endl;

    //vector<int> vec_int{ 4, 2, 33, 1, 55, 8, 56, 22, 3, 44 };

    //SelectionSort<vector<int>> selection_sort(vec_int, vec_int.size());
    //auto f = selection_sort.sort();

    //for (auto val : f) {
    //    cout << val << endl;
    //}

    vector<string> vec_int { "d", "c", "f", "a", "s", "bb", "bbb", "k", "q", "x" };

    //SelectionSort<vector<string>> selection_sort(vec_int, vec_int.size());
    //auto f = selection_sort.sort();

    InsertionSort<vector<string>> insertion_sort(vec_int, vec_int.size());
    auto f = insertion_sort.sort();

    for (auto val : f) {
        cout << val << endl;
    }

    return 0;
}

