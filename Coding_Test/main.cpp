#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n, 1);
    for (int i = 0; i < lost.size(); ++i)
    {
        --students[lost[i] - 1];
    }
    for (int i = 0; i < reserve.size(); ++i)
    {
        ++students[reserve[i] - 1];
    }
    for (int i = 0; i < students.size(); ++i)
    {
        if (0 == students[i])
        {
            if (2 == students[i + 1])
            {
                ++students[i];
                --students[i + 1];
            }
        }
    }
    for (int i = 1; i < students.size(); ++i)
    {
        if (0 == students[i])
        {
            if (2 == students[i - 1])
            {
                ++students[i];
                --students[i - 1];
            }
        }
    }

    for (int i = 0; i < students.size(); ++i)
    {
        if (0 < students[i])
            ++answer;
    }


    return answer;
}