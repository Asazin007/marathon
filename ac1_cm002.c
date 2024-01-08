#include <stdio.h>
#include <math.h>
int calword(int num)
{
    int c = 0;
    int sum = 0;
    int pt = 0;
    if (num == 0)
        return 4;
    while (num > 0)
    {
        int t = num % 10;
        if (c == 0 || c == 2 || c == 3)
        {
            if (t == 0)
                sum = 4;
            if (t == 1)
            {
                sum += 3;
                pt = 1;
            }
            if (t == 2)
            {
                sum += 3;
                pt = 2;
            }
            if (t == 3)
            {
                sum += 5;
                pt = 3;
            }
            if (t == 4)
            {
                sum += 4;
                pt = 4;
            }
            if (t == 5)
            {
                sum += 4;
                pt = 5;
            }
            if (t == 6)
            {
                sum += 3;
                pt = 6;
            }
            if (t == 7)
            {
                sum += 5;
                pt = 7;
            }
            if (t == 8)
            {
                sum += 5;
                pt = 8;
            }
            if (t == 9)
            {
                sum += 4;
                pt = 9;
            }
        }
        if (c == 1)
        {
            if (pt == 0)
                sum = 0;

            if (t == 1)
            {

                sum = 0;
                if (pt == 0)
                    sum = 3;
                if (pt == 1)
                    sum += 6;
                if (pt == 2)
                    sum += 6;
                if (pt == 3)
                    sum += 8;
                if (pt == 4)
                    sum += 7;
                if (pt == 5)
                    sum += 7;
                if (pt == 6)
                    sum += 7;
                if (pt == 7)
                    sum += 9;
                if (pt == 8)
                    sum += 8;
                if (pt == 9)
                    sum += 8;
            }
            if (t == 2)
                sum += 6;
            if (t == 3)
                sum += 6;
            if (t == 4)
                sum += 5;
            if (t == 5)
                sum += 5;
            if (t == 6)
                sum += 5;
            if (t == 7)
                sum += 7;
            if (t == 8)
                sum += 6;
            if (t == 9)
                sum += 6;
        }
        if (c == 2)
        {
            sum += 7;
        }
        if (c == 3)
            sum += 8;
        c++;
        num /= 10;
    }
    return sum;
}
void sortArrDesc(int a[], int n)
{
    int da[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        da[i] = abs(a[i] - a[i + 1]);
        da[i] = calword(da[i]);
    }
    // sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            if (da[j] < da[j + 1])
            {
                int temp = da[j];
                da[j] = da[j + 1];
                da[j + 1] = temp;
            }
        }
    }
    int dup = da[0];
    printf("%d ", da[0]);
    for (int i = 1; i < n - 1; i++)
    {
        if (da[i] != dup)
        {
            printf("%d ", da[i]);
            dup = da[i];
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        a[i] = t;
    }
    sortArrDesc(a, n);

    return 0;
}