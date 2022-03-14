#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool compare(const pair<int, string> &a, const pair<int, string> &b)
{
    return a.first < b.first; //어린 나이가 먼저 오게 함
}

int main(void)
{
    int N;
    cin >> N;

    vector<pair<int, string>> v(N);

    for (int i = 0; i < N; i++)
        cin >> v[i].first >> v[i].second;

    stable_sort(v.begin(), v.end(), compare); //안정 정렬

    for (int i = 0; i < N; i++)
        cout << v[i].first << " " << v[i].second << "\n";
}

// git remote add origin https://github.com/JunseoParKK/BaekJoon-Algorithm.git