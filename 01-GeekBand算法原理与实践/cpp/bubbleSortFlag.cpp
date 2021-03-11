/**
 * @file     bubbleSortFlag.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-11
 */
/*
（无序区，有序区）。从无序区通过交换找出最大元素放到有序区前端。

冒泡排序思路：
1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
2. 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数。
3. 针对所有的元素重复以上的步骤，除了最后一个。
4. 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
*/
void bubbleSortFlag(std::vector<int>& vec)
{
	int len = vec.size();
	bool flag = false;

	for (int i{}; i < len - 1 && !flag; ++i) {
		flag = true;
		for (int j{}; j < len - 1 - i; ++j) {
			if (vec[j] > vec[j + 1]) {
				flag = false;
				std::swap(vec[j], vec[j + 1]);
			}
		}
	}

	return;
}