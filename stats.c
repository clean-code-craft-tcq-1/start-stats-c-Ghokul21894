#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    Stats s = { 0 };
    for (int i = 0; i < setlength ; i++) {
        s.average = s.average + numberset[i];
    }
    s.average = s.average / setlength;
    s.min = s.max = numberset[0];
    for (int i = 1 ; i < setlength ; i++) {
        if (s.min > numberset[i]) {
            s.min = numberset[i];
        }
		if (s.max < numberset[i]) {
		    s.max = numberset[i];
        }
    }
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
