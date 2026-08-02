#include <string>
#include <vector>
using namespace std;

bool logicalCalc(const vector<bool>& items, const string& op) {
    bool result = items[0];

    for (size_t i = 1; i < items.size(); i++) {
        if (op == "AND") result = result && items[i];
        else if (op == "OR") result = result || items[i];
        else if (op == "XOR") result = result != items[i];
    }

    return result;
}
