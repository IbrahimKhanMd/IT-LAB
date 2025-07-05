#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int choice;
    cout << "Select metric:\n1. PV\n2. FV\n3. Simple Interest\n4. Compound Interest\n5. Discount Rate\n6. NPV\n7. Payback\n8. Break-even\n9. IRR\n";
    cin >> choice;

    // Case 1–4: Time value of money formulas
    if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
        double val, rate; int time;
        cout << "Enter Value (PV or FV or Principal), Rate (%) and Time: ";
        cin >> val >> rate >> time; rate /= 100;
        if (choice == 1) // Present Value = FV / (1 + r)^t
            cout << "Present Value = " << val / pow(1 + rate, time);
        else if (choice == 2) // Future Value = PV * (1 + r)^t
            cout << "Future Value = " << val * pow(1 + rate, time);
        else if (choice == 3) // Simple Interest = P * r * t
            cout << "Simple Interest = " << val * rate * time;
        else // Compound Interest = P * (1 + r)^t - P
            cout << "Compound Interest = " << val * pow(1 + rate, time) - val;
    }

    // Case 5: Discount Rate
    else if (choice == 5) {
        double rf, rp, ip, lp;
        cout << "Enter Risk-free rate, Risk premium, Inflation premium, Liquidity premium: ";
        cin >> rf >> rp >> ip >> lp;
        // Discount Rate = rf + rp + ip + lp
        cout << "Discount Rate = " << rf + rp + ip + lp;
    }

    // Case 6: Net Present Value
    else if (choice == 6) {
        int n; double rate, inv, npv = 0;
        cout << "Enter number of years: ";
        cin >> n;
        cout << "Enter discount rate (%): ";
        cin >> rate; rate /= 100;
        vector<double> cf(n);
        cout << "Enter cash flows for each year: ";
        for (double &v : cf) cin >> v;
        cout << "Enter initial investment: ";
        cin >> inv;
        // NPV = Sum[CF / (1 + r)^t] - initial investment
        for (int i = 0; i < n; ++i) npv += cf[i] / pow(1 + rate, i + 1);
        cout << "NPV = " << npv - inv;
    }

    // Case 7: Simple Payback Period
    else if (choice == 7) {
        double inv, inflow;
        cout << "Enter initial investment and annual cash inflow: ";
        cin >> inv >> inflow;
        // Payback = Initial Investment / Annual Cash Flow
        cout << "Payback Period = " << inv / inflow;
    }

    // Case 8: Break-even Analysis
    else if (choice == 8) {
        double fc, sp, vc;
        cout << "Enter Fixed Cost, Selling Price per unit, Variable Cost per unit: ";
        cin >> fc >> sp >> vc;
        // Break-even Units = Fixed Cost / (SP - VC)
        // Break-even Revenue = Units * SP
        double units = fc / (sp - vc);
        cout << "Break-even Units = " << units << "\nBreak-even Revenue = " << units * sp;
    }

    // Case 9: Internal Rate of Return (IRR)
    else if (choice == 9) {
        int n;
        cout << "Enter number of years: ";
        cin >> n;
        vector<double> cf(n);
        cout << "Enter cash flows for each year: ";
        for (double &v : cf) cin >> v;
        double inv, irr = 0.01, step = 0.0001, npv;
        cout << "Enter initial investment: ";
        cin >> inv;
        // Try values of IRR until NPV ≈ 0
        while (irr < 1.0) {
            npv = -inv;
            for (int i = 0; i < n; ++i) npv += cf[i] / pow(1 + irr, i + 1);
            if (fabs(npv) < 0.01) break; //fabs = floating point absolute value
            irr += step;
        }
        if (irr >= 1.0) cout << "IRR not found";
        else {
            double coc;
            cout << "Enter Cost of Capital (%): ";
            cin >> coc;
            cout << "IRR: " << irr * 100 << "%\n";
            cout << (irr * 100 > coc ? "ACCEPT" : (irr * 100 < coc ? "REJECT" : "INDIFFERENT"));
        }
    }

    else cout << "Invalid choice";

    return 0;
}
