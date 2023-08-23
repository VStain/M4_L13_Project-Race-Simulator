#include <vector>
#include "Race.h"


Race::Race(const string& type) : type(type) {}

const string& Race::getType() const
{
    return type;
}