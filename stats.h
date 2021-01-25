/**********************Types********************************/
typedef struct {
    float average;
    float max;
    float min;
}Stats;
typedef void (*alerter_funcptr)();
extern int emailAlertCallCount;
extern int ledAlertCallCount;

/********************Protoypes & Resources************************/
Stats compute_statistics(const float* numberset, int setlength);
void emailAlerter();
void ledAlerter();
alerter_funcptr alerters[] = {emailAlerter, ledAlerter};
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats);
