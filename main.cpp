#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "BinarySearch.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"

using namespace std;


int main() {

    //vector<int> vec_int { 12, 9, 3, 7, 14, 11, 6, 2, 10, 5 };
    vector<std::string> vec_str { "d", "c", "f", "a", "s", "bb", "bbb", "k", "q", "x" };

    MergeSort<vector<std::string>, std::string> merge_sort(vec_str, vec_str.size());

    auto result = merge_sort.sort_recursive();

    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
   

    return 0;
}

