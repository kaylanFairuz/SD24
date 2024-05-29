#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int hours, minutes;
} _time;

int compare_t(_time ta, _time tb, int* minute_diff) {
    if(ta.hours > tb.hours) {
        *minute_diff = 1440 + (tb.hours - ta.hours)*60 + (tb.minutes - ta.minutes);
    } else if(ta.hours == tb.hours && ta.minutes > tb.minutes) {
        *minute_diff = 1440 + (tb.minutes - ta.minutes);
    } else {
        *minute_diff = (tb.hours - ta.hours)*60 + (tb.minutes - ta.minutes);
    }
   
    return 0;
}

int main() {
    _time t1, t2;
    int minute = 0;
    scanf("%d %d %d %d", &t1.hours, &t1.minutes, &t2.hours, &t2.minutes);
    compare_t(t1, t2, &minute);
    printf("%d", minute);
    
    return 0;
}