class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        vector<string> weekDays = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                                   "Thursday", "Friday", "Saturday"};
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int totalDays = 0;
        for (int y = 1971; y < year; y++) {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
                totalDays += 366;
            } else {
                totalDays += 365;
            }
        }

        for (int i = 1; i < month; i++) {
            totalDays += days[i - 1];
            if (i == 2 &&
                (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
                totalDays += 1;
            }
        }
        totalDays += day;

        return weekDays[(totalDays + 4) % 7];
    }
};