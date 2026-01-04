#include <stdafx.h>

/// Utility functions
/// ====================================================
template<class T1, class T2>
bool callEvent(T1 *start_time, T2 interval_time) {    
    if (millis() > *start_time + event_time) {
        *start_time = millis();
        return true;
    } else {
        return false;
    }
}
