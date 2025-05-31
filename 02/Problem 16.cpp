#include <iostream>

using namespace std;

int main() {  // Corrected main signature
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;

    int time1_minutes = h1 * 60 + m1;
    int time2_minutes = h2 * 60 + m2;
    // Assuming h2,m2 is always after h1,m1 on the same day for parking duration
    int total_minutes = time2_minutes - time1_minutes;

    int cost = 0;
    if (total_minutes <= 0) {  // No time or negative time, no cost
        cost = 0;
    } else if (total_minutes <= 120) {              // Up to 2 hours (120 minutes)
        cost = (total_minutes / 30) * 30;           // 30 per 30 min block
    } else if (total_minutes <= 240) {              // 2 to 4 hours (120 to 240 minutes)
        cost = 120;                                 // Cost for first 2 hours (4 blocks * 30)
        cost += ((total_minutes - 120) / 30) * 40;  // Additional cost: 40 per 30 min block
    } else {                                        // More than 4 hours (240 minutes)
        cost = 120 + 160;  // Cost for first 4 hours ( (120/30)*30 + (120/30)*40 = 120 + 160 = 280)
        cost += ((total_minutes - 240) / 30) * 60;  // Additional cost: 60 per 30 min block
    }
    cout << cost << endl;
    return 0;
}
