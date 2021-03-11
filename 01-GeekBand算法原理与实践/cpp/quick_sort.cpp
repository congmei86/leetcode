/**
 * @file     quick_sort.cpp
 * @brief
 * @author   DuYong
 * @date     2021-03-11
 */
/*

（小数，基准元素，大数）。在区间中随机挑选一个元素作基准，将小于基准的元素放在基准之前，大于基准的元素放在基准之后，再分别对小数区与大数区进行排序。

快速排序思路：
1. 选取第一个数为基准
2. 将比基准小的数交换到前面，比基准大的数交换到后面
3. 对左右区间重复第二步，直到各区间只有一个数

*/

// 递归形式
template <typename T>
void quick_sort_recursive(std::vector<T>& vec, int start, int end)
{
	if (start >= end) return;

	int left = start;
	int right = end;
	T key = vec[left];

	while (left < right) {
		while (left < right && vec[right] >= key)
			right--;
		if (left < right)
			vec[left++] = vec[right];

		while (left < right && vec[left] <= key)
			left++;
		if (left < right)
			vec[right--] = vec[left];
	}

	vec[left] = key;
	quick_sort_recursive(vec, start, left - 1);
	quick_sort_recursive(vec, left + 1, end);
}

// 迭代形式 -> 需要用到栈结构
template <typename T>
void quick_sort_iter(std::vector<T>& vec)
{
	std::stack<std::pair<int, int>> stk;
	stk.push(std::make_pair(0, vec.size() - 1));

	while (!stk.empty()) {
		std::pair<int, int> range = stk.top();
		if (range.first >= range.second) return;
		stk.pop();

		T key = vec[range.second];
		int left = range.first;
		int right = range.second;

		while (left < right) {
			while (left < right && vec[left] < key) left++;
			while (left < right && vec[right] >= key) right--;
			std::swap(vec[left], vec[right]);
		}

		if (vec[left] >= vec[range.second]) {
			std::swap(vec[left], vec[range.second]);
		}
		else {
			left++;
		}

		stk.push(std::make_pair(range.first, left - 1));
		stk.push(std::make_pair(left, range.second));
	}

	return;
}