#include<bits/stdc++.h>
using namespace std;

void eliminateLeftRecursion(const string& input) {
    char nonTerminal = input[0];

    vector<string> productions;
    stringstream ss(input.substr(3));
    string token;
    while (getline(ss, token, '|')) {
        productions.push_back(token);
    }

    vector<string> withRecursion;
    vector<string> withoutRecursion;

    for (const auto& production : productions) {
        if (production[0] == nonTerminal) {
            withRecursion.push_back(production.substr(1) + nonTerminal + "'");
        } else {
            withoutRecursion.push_back(production + nonTerminal + "'");
        }
    }

    if (withRecursion.empty()) {
        cout << nonTerminal << "->";
        for (size_t i = 0; i < withoutRecursion.size(); ++i) {
            cout << withoutRecursion[i] << (i == withoutRecursion.size() - 1 ? "" : "|");
        }
        cout << endl << nonTerminal << "'->e" << endl;
        cout << "No left recursion detected." << endl;
    } else {
        cout << nonTerminal << "->";
        for (size_t i = 0; i < withoutRecursion.size(); ++i) {
            cout << withoutRecursion[i] << (i == withoutRecursion.size() - 1 ? "" : "|");
        }
        cout << endl;

        cout << nonTerminal << "'->";
        for (size_t i = 0; i < withRecursion.size(); ++i) {
            cout << withRecursion[i] << (i == withRecursion.size() - 1 ? "|e" : "|");
        }
        cout << endl;
    }
}

int main() {
    vector<string> inputs;
    int numInputs;
    cout << "Enter the number of inputs: ";
    cin >> numInputs;
    cin.ignore(); // Clear newline character from the buffer

    for (int i = 0; i < numInputs; ++i) {
        string input;
        cout << "Enter Input " << i + 1 << ": ";
        getline(cin, input);
        inputs.push_back(input);
    }

    for (const auto& input : inputs) {
        eliminateLeftRecursion(input);
    }

    return 0;
}
