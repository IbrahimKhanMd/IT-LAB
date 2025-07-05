#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double PV, EV, AC;

    cout << "=== Earned Value Management (EVM) Calculator ===\n\n";

    cout << "Enter Planned Value (PV): ";
    cin >> PV;

    cout << "Enter Earned Value (EV): ";
    cin >> EV;

    cout << "Enter Actual Cost (AC): ";
    cin >> AC;

    double CV = EV - AC;
    double SV = EV - PV;
    double CPI = EV / AC;
    double SPI = EV / PV;
    double BAC = PV * 2;
    double EAC = BAC / CPI;

    string budget_status = (CV > 0) ? "Under Budget" : "Over Budget";
    string schedule_status = (SV > 0) ? "Ahead of Schedule" : "Behind Schedule";
    string cost_eff = (CPI > 1) ? "Cost Efficient" : "Cost Inefficient";
    string sched_eff = (SPI > 1) ? "Schedule Efficient" : "Schedule Lagging";

    cout << fixed << setprecision(2);
    cout << "\n=== EVM Analysis Results ===\n";
    cout << "- Planned Value (PV): $" << PV << endl;
    cout << "- Earned Value (EV): $" << EV << endl;
    cout << "- Actual Cost (AC): $" << AC << "\n\n";

    cout << "--- Variance Analysis ---\n";
    cout << "- Cost Variance (CV): $" << CV << " (" << budget_status << ")\n";
    cout << "- Schedule Variance (SV): $" << SV << " (" << schedule_status << ")\n\n";

    cout << "--- Performance Indices ---\n";
    cout << "- CPI: " << CPI << " (" << cost_eff << ")\n";
    cout << "- SPI: " << SPI << " (" << sched_eff << ")\n\n";

    cout << "--- Forecast ---\n";
    cout << "- Estimate at Completion (EAC): $" << EAC << endl;
    return 0;
}
