#pragma once

#include <vector>
#include <string>
#include "Vehicle.h"

using namespace std;

class Race {
public:
    Race(const string& type) : type(type) {}

    const string& getType() const;

protected:
    string type;
};
