#include "stats.h"

alerter_funcptr alerters[] = {emailAlerter, ledAlerter};

void emailAlerter() {
  emailAlertCallCount++;
}

void ledAlerter() {
  ledAlertCallCount++;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats) {
  if (maxThreshold < computedStats.max) {
    alerters[0]();
    alerters[1]();
    }
}
    
