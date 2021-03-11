/**
 * @file     sequentialSearch.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-11
 */
template <typename T>
int sequentialSearch(std::vector<T>& vec, T key)
{
    T tmp = vec[vec.size() - 1];
    vec[vec.size() - 1] = key;
    int i = 0;
    while (vec[i] != key) {
        i++;
    }
    vec[vec.size() - 1] = tmp;
    if (i < vec.size() - 1 || tmp == key) {
        return i;
    }

    return -1;
}