#include "stats.h"

alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
void emailAlerter (void);
void ledAlerter (void);
