#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    int difference = 999999;
    int total = 0, result = 0;

    cin >> N >> M;

    vector<int> card(N);

    for (int i = 0; i < N; i++)
        cin >> card[i];

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                total = card[i] + card[j] + card[k];
                if (M - total >= 0 && M - total < difference)
                {
                    difference = M - total;
                    result = total;
                }
            }
        }
    }
    cout << result;
}