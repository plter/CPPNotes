#include <iostream>
#include <boost/log/trivial.hpp>


#define LOG(level) BOOST_LOG_TRIVIAL(level) << __FILE__ << "(" << __LINE__ << ") "

int main() {
    LOG(trace) << "Hello World";
    LOG(info) << "Hello World";
    LOG(debug) << "Hello World";
    LOG(warning) << "Hello World";
    LOG(error) << "Hello World";
    LOG(fatal) << "Hello World";
    return 0;
}