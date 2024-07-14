#include <iostream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main() {
    // 读取一行输入
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    // 使用 unordered_map 统计数字的出现频率和首次出现的位置
    std::unordered_map<int, std::pair<int, int>> freq;
    int num, index = 0;
    char comma;  // 用于跳过逗号

    // 循环读取每个数字
    while (iss >> num) {
        if (!freq.count(num)) freq[num] = {0, index};  // 初始化出现位置
        freq[num].first++;  // 增加频率计数
        index++;
        iss >> comma;  // 跳过逗号
    }

    // 将 map 中的 keys 放入 vector 以排序
    std::vector<int> keys;
    for (const auto& kv : freq) {
        keys.push_back(kv.first);
    }

    // 根据频率高到低，相同频率时按首次出现顺序低到高排序
    std::sort(keys.begin(), keys.end(), [&](int a, int b) {
        return freq[a].first > freq[b].first || (freq[a].first == freq[b].first && freq[a].second < freq[b].second);
    });

    // 输出排序后的 keys
    bool first = true;
    for (int key : keys) {
        if (!first) std::cout << ",";
        std::cout << key;
        first = false;
    }

    return 0;
}
