
#include <iostream>
using namespace std;

#define MAX 100000

int main()
{
    int sum[MAX + 1] = {0};
    int L, R, i, j, count;

    for(i = 1; i <= MAX / 2; i++)
    {
        for(j = i * 2; j <= MAX; j += i)
        {
            sum[j] += i;
        }
    }

    while(true)
    {
        cin >> L >> R;

        if(L == 0 && R == 0)
            break;

        count = 0;

        for(i = L; i <= R; i++)
        {
            j = sum[i];

            if(j > i && j >= L && j <= R)
            {
                if(sum[j] == i)
                    count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
