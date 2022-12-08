#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;

    while (!s.empty())
    {
        char x = s[0];
        int a = 0, b = 0, i = 0;
        while(true)
        {
            if (x == s[i])
                ++a;
            else
                ++b;
            ++i;

            if (a == b)
                break;
        }
        s.erase(0, i);
        ++answer;
    }

    return answer;
}
int main()
{
    string s = "banana";
    int a = solution(s);
    return 0;
}