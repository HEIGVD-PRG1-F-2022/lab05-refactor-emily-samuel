//
// Created by emily on 16.11.2022.
//

#ifndef CONNECT4_INPUT_H
#define CONNECT4_INPUT_H

class Input {
public:
    static int askUserInt(int min);
    static int askUserInt(int min, int max);

    static float askUserFloat(float min);
    static float askUserFloat(float min, float max);

    static double askUserDouble(double min);
    static double askUserDouble(double min, double max);
};

#endif //CONNECT4_INPUT_H
