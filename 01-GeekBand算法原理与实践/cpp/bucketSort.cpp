/**
 * @file     bucketSort.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-11
 */
/*****************
桶排序：将值为i的元素放入i号桶，最后依次把桶里的元素倒出来。

桶排序序思路：
1. 设置一个定量的数组当作空桶子。
2. 寻访序列，并且把项目一个一个放到对应的桶子去。
3. 对每个不是空的桶子进行排序。
4. 从不是空的桶子里把项目再放回原来的序列中。

假设数据分布在[0，100)之间，每个桶内部用链表表示，在数据入桶的同时插入排序，然后把各个桶中的数据合并。
*****************/

/**************
    数组版
**************/

template <typename T>
void bucketSort(std::vector<T>& vec)
{
    if (vec.empty()) return;

    T min = *std::min_element(vec.begin(), vec.end());
    T max = *std::max_element(vec.begin(), vec.end());
    int bucketNum = (max - min) / vec.size() + 1;
    
    vector<vector<T>> bucketArr(bucketNum);
    for (T& elem : vec) {
        int num = (elem - min) / vec.size();
        bucketArr[num].push_back(elem);
    }

    auto iter = vec.begin();
    for (auto it = bucketArr.begin(); it != bucketArr.end(); ++it) {
        std::stable_sort((*it).begin(), (*it).end());
        std::copy((*it).begin(), (*it).end(), iter);
        std::advance(iter, (*it).size());
    }

    return;
}