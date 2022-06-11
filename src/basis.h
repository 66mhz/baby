/*
    Basis of everything.
    It all starts with a white dot.
    We define it as white. 8 of 64bit integers. All 8 digits are set to zero.
*/

#include <algorithm>
#include <limits>
#include <vector>
#include <boost/python.hpp>

namespace baby{

u_int64_t imax = std::numeric_limits<u_int64_t>::max();

class basis{
 public:
    std::vector<u_int64_t> desc = std::vector<u_int64_t>(8);
    void initBasis();
};

}