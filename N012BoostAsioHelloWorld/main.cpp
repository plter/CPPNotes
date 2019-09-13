#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <boost/log/trivial.hpp>

using namespace boost::asio;
using namespace boost::asio::ip;


io_service io;
tcp::acceptor acceptor(io, tcp::endpoint(tcp::v4(), 8000));

void start_new_accept();

void accept_handler(const boost::system::error_code &error) {
    if (!error) {
        // Accept succeeded.
        BOOST_LOG_TRIVIAL(trace) << "Accepted";
    }

    start_new_accept();
}


void start_new_accept() {
    tcp::socket socket(io);

    acceptor.async_accept(socket, boost::bind(&accept_handler, placeholders::error));
}


int main() {
    start_new_accept();
    io.run();
    return 0;
}