// Wap to find difference between two time periods using structure
#include <stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

struct time diff(struct time t1, struct time t2)
{
    struct time t3;
    int temp;
    t3.hour = t1.hour - t2.hour;
    temp = t1.min - t2.min;
    if (temp < 0)
    {
        t3.hour--;
        t3.min = temp + 60;
    }
    else
    {
        t3.min = temp;
    }
    temp = t1.sec - t2.sec;
    if (temp < 0)
    {
        t3.min--;
        t3.sec = temp + 60;
    }
    else
    {
        t3.sec = temp;
    }
    return t3;
}

int main()
{
    struct time t1, t2, t3;
    printf("Enter hour part of first time: ");
    scanf("%d", &t1.hour);
    printf("Enter minute part of first time: ");
    scanf("%d", &t1.min);
    printf("Enter second part of first time: ");
    scanf("%d", &t1.sec);
    printf("Enter hour part of second time: ");
    scanf("%d", &t2.hour);
    printf("Enter minute part of second time: ");
    scanf("%d", &t2.min);
    printf("Enter second part of second time: ");
    scanf("%d", &t2.sec);
    t3 = diff(t1, t2);
    printf("Difference of times is: %d hour %d min %d sec", t3.hour, t3.min, t3.sec);
    return 0;
}
