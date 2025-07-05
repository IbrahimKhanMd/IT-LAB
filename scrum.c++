#include <iostream>
#include <vector>
using namespace std;

// 1. Velocity & Average Velocity
int velocity(const vector<int>& storyPoints) {
    int sum = 0;
    for (int p : storyPoints) sum += p;
    return sum;
}
double avgVelocity(const vector<int>& storyPoints) {
    return (double)velocity(storyPoints) / storyPoints.size();
}

// 2. Sprint Burndown
int sprintBurndown(int totalScope, int completedWork) {
    return totalScope - completedWork;
}

// 3. Release Burndown
int releaseBurndown(int totalScope, int completedWork) {
    return totalScope - completedWork;
}

// 4. Cycle Time & Average Cycle Time
int cycleTime(int completionDate, int startDate) {
    return completionDate - startDate;
}
double avgCycleTime(const vector<int>& cycleTimes) {
    int sum = 0;
    for (int t : cycleTimes) sum += t;
    return (double)sum / cycleTimes.size();
}

// 5. Throughput
double throughput(int itemsCompleted, int timePeriod) {
    return (double)itemsCompleted / timePeriod;
}

// 6. Defect Density
double defectDensity(int defects, int size) {
    return (double)defects / size;
}

// 7. Sprint Goal Success Rate
double sprintGoalSuccessRate(int achieved, int total) {
    return (double)achieved / total * 100;
}

// 8. Customer Satisfaction (CSAT)
double csat(int satisfied, int total) {
    return (double)satisfied / total * 100;
}

// 9. Team Satisfaction
double teamSatisfaction(const vector<int>& ratings) {
    int sum = 0;
    for (int r : ratings) sum += r;
    return (double)sum / ratings.size();
}

int main() {
    // Example usage:
    vector<int> storyPoints = {24, 28, 26};
    cout << "Velocity: " << velocity(storyPoints) << endl;
    cout << "Average Velocity: " << avgVelocity(storyPoints) << endl;
    cout << "Sprint Burndown: " << sprintBurndown(50, 35) << endl;
    cout << "Release Burndown: " << releaseBurndown(300, 200) << endl;
    cout << "Cycle Time: " << cycleTime(8, 5) << endl;
    vector<int> cycleTimes = {3, 6, 2};
    cout << "Average Cycle Time: " << avgCycleTime(cycleTimes) << endl;
    cout << "Throughput: " << throughput(54, 4) << endl;
    cout << "Defect Density: " << defectDensity(5, 1000) << endl;
    cout << "Sprint Goal Success Rate: " << sprintGoalSuccessRate(6, 8) << "%" << endl;
    cout << "CSAT: " << csat(65, 100) << "%" << endl;
    vector<int> ratings = {4, 5, 3, 4, 5, 4, 3};
    cout << "Team Satisfaction: " << teamSatisfaction(ratings) << endl;
    return 0;
}
