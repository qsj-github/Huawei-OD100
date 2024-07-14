#include <bits/stdc++.h>
using namespace std;

struct Project {
    string name;
    int heat;

    // 构造函数
    Project(string n, int h) : name(std::move(n)), heat(h) {}

    // 自定义排序规则
    bool operator<(const Project& other) const {
        if (heat == other.heat) {
            return name < other.name; // 热度相同，按名字字典序升序
        }
        return heat > other.heat; // 按热度降序
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> weights(5);
    for (int& weight : weights) {
        cin >> weight;
    }

    vector<Project> projects;

    for (int i = 0; i < n; ++i) {
        string name;
        int nr_watch, nr_star, nr_fork, nr_issue, nr_mr;
        cin >> name >> nr_watch >> nr_star >> nr_fork >> nr_issue >> nr_mr;

        int heat = nr_watch * weights[0] + nr_star * weights[1] + nr_fork * weights[2] +
                   nr_issue * weights[3] + nr_mr * weights[4];

        projects.emplace_back(name, heat);
    }

    // 根据自定义的排序规则排序项目
    sort(projects.begin(), projects.end());

    // 输出项目名称
    for (const Project& project : projects) {
        cout << project.name << endl;
    }

    return 0;
}