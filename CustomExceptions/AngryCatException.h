#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAT_EXCEPTION_H
#include <stdexcept>
#include <string>
using namespace std;

class AngryCatException : public runtime_error{
public:
    AngryCatException(const string& errorText): runtime_error(errorText){

    }
    AngryCatException(): runtime_error("Made kitty angry!"){

    }
};


#endif