#include <iostream>
#include <vector>
#include "BinarySearch.h"

using namespace std;


int main()
{
    vector<int> vec_int { 0, 11, 222, 333, 444, 555, 666, 777, 888, 999 };
    BinarySearch<vector<int>, int> binary_search_int(vec_int, vec_int.size());
    cout << binary_search_int.find(666) << endl;

    vector<string> vec_str{ "aaa", "bbb", "ccc", "ddd", "eee", "fff", "ggg", "qqq", "rrr", "sss" };
    BinarySearch<vector<string>, string> binary_search_str(vec_str, vec_str.size());
    cout << binary_search_str.find("fff") << endl;

    return 0;
}

