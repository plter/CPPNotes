#include <iostream>
#include <boost/regex.hpp>

int main() {
    std::string str = "/a/";
    boost::regex r("^/([^/]*).*$");
    boost::smatch matcher;
    if (boost::regex_match(str, matcher, r, boost::match_flag_type::match_default)) {
        std::cout << "First: " << matcher[1] << std::endl;
    } else {
        std::cout << "End" << std::endl;
    }
    return 0;
}