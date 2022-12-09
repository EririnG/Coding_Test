#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    answer += toupper(s[0]);
    for (int i = 1; i < s.size(); ++i) {
        if (' ' == s[i - 1])
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
    }J
    return answer;
}
int main()
{
    string a = "for the last week";
    solution(a);
	return 0;
}