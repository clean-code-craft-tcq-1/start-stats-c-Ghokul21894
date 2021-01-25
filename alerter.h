#include "stats.h"

alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
alerter_funcptr emailAlerter();
alerter_funcptr ledAlerter();
