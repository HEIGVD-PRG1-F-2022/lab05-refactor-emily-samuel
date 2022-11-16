//
// Created by emily on 16.11.2022.
//
#include "Input.h"
#include <iostream>
#include <limits>

using namespace std;

int Input::askUserInt(int min) {
    cout << "Enter a value: ";
    int value;
    while (!(cin >> value)) {
        cout << "The value you entered is not an integer, try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n ');
    }
};

int Input::askUserInt(int min, int max) {

};

float Input::askUserFloat(float min) {
    cout << "Enter a value: ";
    float value;
    while (!(cin >> value)) {
        cout << "The value you entered is invalid, try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n ');
    }
};

float Input::askUserFloat(float min, float max) {

};

double Input::askUserDouble(double min) {
    cout << "Enter a value: ";
    double value;
    while(!(cin >> value)){
        cout << "The value you entered is invalid, try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n ');
    }
};

double Input::askUserDouble(double min, double max) {

};