#include <iostream>
#include <string>
using namespace std;

// Calculator class for basic arithmetic operations
class Calculator {
private:
    double numA, numB;      // operands
    string opType;          // chosen operation

public:
    // Constructor to assign input values
    Calculator(double first, double second, const string &operation) {
        numA = first;
        numB = second;
        opType = operation;
    }

    // Method to execute the chosen operation
    double performOperation() {
        if (opType == "add") {
            return numA + numB;    // addition
        }
        else if (opType == "sub") {
            return numA - numB;    // subtraction
        }
        else if (opType == "mul") {
            return numA * numB;    // multiplication
        }
        else if (opType == "div") {
            if (numB != 0) {       // prevent division by zero
                return numA / numB;
            }
            cout << "Error: Cannot divide by zero." << endl;
            return 0.0;
        }
        else {
            cout << "Error: Unsupported operation type." << endl;
            return 0.0;
        }
    }
};

int main() {
    double firstNumber, secondNumber;
    string operationName;

    // User input section
    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    cout << "Choose operation (add, sub, mul, div): ";
    cin >> operationName;

    // Create calculator object with provided inputs
    Calculator calc(firstNumber, secondNumber, operationName);

    // Get result and display
    double finalResult = calc.performOperation();
    cout << "Calculated Result: " << finalResult << endl;

    return 0;
}
