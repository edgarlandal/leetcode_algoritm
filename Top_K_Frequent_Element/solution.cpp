#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> topKFrequent(vector<int> &nums, int k)
{
    unordered_map<int, int> frequent{0};

    for (int i = 0; i < nums.size(); i++)
    {
        frequent[i]++;
    }

    for (int i = 0; i < frequent.size(); i++)
    {
    }

    return vector<int>{0};
}

int main()
{
    std::cout << "Hello World";

    return 0;
}