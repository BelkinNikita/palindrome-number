﻿#include <iostream>
using namespace std;
#include <vector>


//vectors
vector<int> reversed_numberVEC = {};
vector<int> numbersVEC = {};
//variables
int length = 1;

//ref to the functions
int countingAndReversing(long long number);
void originalNumbersVEC();
bool comparingNumbers(long long num);


int main() {
    long long x;
    cout << "Type your number: ";
    cin >> x;
    countingAndReversing(x);
    originalNumbersVEC();
    bool answer = comparingNumbers(x);
    if (answer == true) {
        cout << endl << "Number " << x << " is a palindrome" << "\n\n\n";}
    else {
        cout << endl << "Number " << x << " is not a palindrome" << endl;
    }
    ;

}
// here I've started to count characters in integers and these numbers to add in a vector
int countingAndReversing(long long number) {
    long long  i = number;
    reversed_numberVEC.push_back(i % 10);
    if (i >= 10) {
        length++;
        countingAndReversing(i / 10);
    }
    else {
        cout << "amount of characters: " << length << endl;
        cout << "reversed number: ";
        for (int num : reversed_numberVEC) {
            cout << num;
        }
        cout << endl;

    }
    return 0;
}

// here I'm reversing again the reversed vector for getting the original number 
void originalNumbersVEC() {
    numbersVEC = reversed_numberVEC;
    std::reverse(numbersVEC.begin(), numbersVEC.end());
    cout << "original number: ";
    for (int num : numbersVEC) {
        cout << num;
    }
    cout << endl;
}

// start to compare reversed and normal characters in vectors
bool comparingNumbers(long long num) {
    int i = length - 1;
    cout << endl << "Comparing has started" << "\n\n";
    for (i; i > -1; i--) {
        cout << "iterable:" << i << "  we're comparing now: " << numbersVEC.at(i) << " and " << reversed_numberVEC.at(i) << endl;
        if (numbersVEC.at(i) == reversed_numberVEC.at(i)) {
        }
        else {
            return false;
        }
    }
    return true;
}