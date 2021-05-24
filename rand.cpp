#include "rand.hpp"
#include <stdlib.h>

Rand::Rand() : Op(rand() % 100) {}
