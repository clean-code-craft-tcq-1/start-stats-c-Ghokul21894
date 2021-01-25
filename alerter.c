#include "stats.h"

void emailAlerter() {
  emailAlertCallCount = 1;
}

void ledAlerter() {
  ledAlertCallCount = 1;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats) {
  if (maxThreshold > computedStats.max) {
    alerters[0]();
    alerters[1]();
    }
}
    
