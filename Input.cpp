/**
 * Created by emily on 16.11.2022.
 */

#include "Input.h"
#include <iostream>
#include <limits>

using namespace std;

int Input::askUserInt(int min) {
    int value;
    while (true) {
        cout << "Enter a value greater than " << min << ": ";
        while (!(cin >> value)) {
            cout << "The value you entered is not an integer, try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (value >= min) {
            break;
        }
        cout << "The value is smaller than " << min << endl;
    }
    return value;
}

int Input::askUserInt(int min, int max) {
    int value;
    while (true) {
        cout << "Enter a value between " << min << " and " << max << ": ";
        while (!(cin >> value)) {
            cout << "The value you entered is not an integer, try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (value >= min && value <= max) {
            break;
        }
        cout << "The value you entered is not in the range." << endl;
    }
    return value;
}

float Input::askUserFloat(float min) {
    float value;
    while (true) {
        cout << "Enter a value greater than " << min << ": ";
        while (!(cin >> value)) {
            cout << "The value you entered is invalid, try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (value >= min) {
            break;
        }
        cout << "The value is smaller than " << min << endl;
    }
    return value;
}

float Input::askUserFloat(float min, float max) {
    float value;
    while (true) {
        cout << "Enter a value between " << min << " and " << max << ": ";
        while (!(cin >> value)) {
            cout << "The value you entered is invalid, try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (value >= min && value <= max) {
            break;
        }
        cout << "The value you entered is not in the range." << endl;
    }
    return value;
}

double Input::askUserDouble(double min) {
    double value;
    while (true) {
        cout << "Enter a value greater than " << min << ": ";
        while (!(cin >> value)) {
            cout << "The value you entered is invalid, try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (value >= min) {
            break;
        }
        cout << "The value is smaller than " << min << endl;
    }
    return value;
}

double Input::askUserDouble(double min, double max) {
    double value;
    while (true) {
        cout << "Enter a value between " << min << " and " << max << ": ";
        while (!(cin >> value)) {
            cout << "The value you entered is invalid, try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (value >= min && value <= max) {
            break;
        }
        cout << "The value you entered is not in the range." << endl;
    }
    return value;
}