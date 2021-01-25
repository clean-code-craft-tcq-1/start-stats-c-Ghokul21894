#include "alerter.h"

alerter_funcptr emailAlerter () {
  emailAlertCallCount = 1;
  return 0;
}

alerter_funcptr ledAlerter () {
  ledAlertCallCount = 1;
  return 0;
}

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats) {
  if (maxThreshold > computedStats.max) {
    *alerters[0]();
    *alerters[1]();
    }
}
    
