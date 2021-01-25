#include "alerter.h"

void emailAlerter () {
  emailAlertCallCount = 1;
}

void ledAlerter () {
  ledAlertCallCount = 1;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats) {
  if (maxThreshold > computedStats.max) {
    emailAlerter();
    ledAlerter();
    }
}
    
