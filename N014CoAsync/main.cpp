#include <iostream>
#include <boost/asio.hpp>

using namespace std;

boost::asio::awaitable<int> async_add(int a, int b) {
    co_return a + b;
}


boost::asio::awaitable<void> asyncMain() {
    auto d = co_await async_add(10, 1);
    std::cout << d << std::endl;
    co_return;
}


int main() {
    boost::asio::io_context io_context;

    boost::asio::co_spawn(io_context, asyncMain, [](auto err) {
        std::cout << "Completed." << std::endl;
    });
    io_context.run();
    return 0;
}