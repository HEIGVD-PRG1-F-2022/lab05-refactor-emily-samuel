//
// Created by emily on 16.11.2022.
//

#ifndef CONNECT4_INPUT_H
#define CONNECT4_INPUT_H
#include <string>

class Input {
public:
    static int askUserInt(int min);
    static int askUserInt(int min, int max);

    static float askUserFloat(float min);
    static float askUserFloat(float min, float max);

    static double askUserDouble(double min);
    static double askUserDouble(double min, double max);
    /*
private: possibility of having errorMessage in a variable
    const std::string errorOfTypeInput =  "The value you entered is not correct.";
    const std::string errorInputNotInRange = "The value you entered is not in the range.";
     */
};

#endif //CONNECT4_INPUT_H
