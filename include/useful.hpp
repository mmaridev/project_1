
// include guard
#ifndef __useful_hpp__  
#define __useful_hpp__

// include headers
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

// Return a string with a double in scientific notation
std::string scientific_format(double d, const int& width, const int& prec);


// Return a string with a vector<double> in scientific notation
std::string scientific_format(const std::vector<double>& v, const int& width, const int& prec);


#endif  // end of include guard __useful_hpp__