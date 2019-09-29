#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/uuid/uuid_io.hpp>         // streaming operators etc.
#include <iostream>

int main() {
    boost::uuids::random_generator generator;

    auto uuid = generator();
    std::cout << uuid << std::endl;

    uuid = generator();
    std::cout << uuid << std::endl;

    uuid = generator();
    std::cout << uuid << std::endl;
}