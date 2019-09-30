#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/uuid/uuid_io.hpp>         // streaming operators etc.
#include <iostream>
#include <sstream>

int main() {
    boost::uuids::random_generator generator;

    auto uuid = generator();
    std::cout << uuid << std::endl;

    uuid = generator();
    std::cout << uuid << std::endl;

    uuid = generator();
    std::stringstream ss;
    ss << uuid;
    std::cout << ss.str() << std::endl;
}