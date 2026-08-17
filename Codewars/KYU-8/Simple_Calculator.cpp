#include <stdexcept>
using namespace std;

double calculator(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: 
            throw invalid_argument("unknown value");
    }
}
