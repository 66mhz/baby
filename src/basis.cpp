#include "basis.h"

namespace baby{
void basis::initBasis(){
    std::fill(desc.begin(), desc.end(), imax);
}
}