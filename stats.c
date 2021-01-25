#include "stats.h"
#include <math.h>

Stats compute_statistics(const float* numberset, int setlength) {
	Stats s;
	s.average = 0;
	s.min = 0;
	s.max = 0;
	if ((numberset == 0)||(setlength == 0)) {
		s.average = isnan(s.average/s.min);
		s.min = isnan(s.average/s.min);
		s.max = isnan(s.average/s.min);
		return s;
	}
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
