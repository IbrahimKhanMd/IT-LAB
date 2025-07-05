#include <iostream>
using namespace std;

// 1. Velocity & Average Velocity
int velocity(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    return sum;
}
double avgVelocity(int a[], int n) {
    return (double)velocity(a, n) / n;
}

// 2 & 3. Sprint and Release Burndown
int burndown(int total, int completed) {
    return total - completed;
}

// 4. Cycle Time & Average
int cycleTime(int end, int start) {
    return end - start;
}
double avgCycleTime(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    return (double)sum / n;
}

// 5. Throughput
double throughput(int done, int time) {
    return (double)done / time;
}

// 6. Defect Density
double defectDensity(int defects, int size) {
    return (double)defects / size;
}

// 7. Sprint Goal Success Rate
double goalSuccess(int achieved, int total) {
    return (double)achieved / total * 100;
}

// 8. CSAT
double csat(int happy, int total) {
    return (double)happy / total * 100;
}

// 9. Team Satisfaction
double teamSatisfaction(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    return (double)sum / n;
}

int main() {
    int storyPoints[] = {24, 28, 26}, n1 = 3;
    int cycleTimes[] = {3, 6, 2}, n2 = 3;
    int ratings[] = {4, 5, 3, 4, 5, 4, 3}, n3 = 7;

    cout << "Velocity: " << velocity(storyPoints, n1) << endl;
    cout << "Avg Velocity: " << avgVelocity(storyPoints, n1) << endl;
    cout << "Sprint Burndown: " << burndown(50, 35) << endl;
    cout << "Release Burndown: " << burndown(300, 200) << endl;
    cout << "Cycle Time: " << cycleTime(8, 5) << endl;
    cout << "Avg Cycle Time: " << avgCycleTime(cycleTimes, n2) << endl;
    cout << "Throughput: " << throughput(54, 4) << endl;
    cout << "Defect Density: " << defectDensity(5, 1000) << endl;
    cout << "Goal Success Rate: " << goalSuccess(6, 8) << "%" << endl;
    cout << "CSAT: " << csat(65, 100) << "%" << endl;
    cout << "Team Satisfaction: " << teamSatisfaction(ratings, n3) << endl;
    return 0;
}
