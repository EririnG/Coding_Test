#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int coupon = 0;
    while (0 != chicken)
    {
        answer += chicken / 10;
        coupon += chicken % 10;
        chicken /= 10;
        if (coupon >= 10)
        {
            ++answer;
            coupon -= 9;
        }
    }

    return answer;
}

int main()
{
    int a = 1081;
    solution(a);
	return 0;
}