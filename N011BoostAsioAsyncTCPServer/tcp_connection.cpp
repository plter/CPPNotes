//
// Created by plter on 2019-09-13.
//


#include "tcp_connection.h"

using boost::asio::ip::tcp;


std::string make_daytime_string() {
    using namespace std; // For time_t, time and ctime;
    time_t now = time(0);
    return ctime(&now);
}

tcp_connection::tcp_connection(boost::asio::io_service &io_service) : socket_(io_service) {

}

tcp::socket &tcp_connection::socket() {
    return socket_;
}

tcp_connection::pointer tcp_connection::create(boost::asio::io_service &io_service) {
    return pointer(new tcp_connection(io_service));
}

void tcp_connection::start() {
    message_ = make_daytime_string();

    boost::asio::async_write(socket_, boost::asio::buffer(message_),
                             boost::bind(&tcp_connection::handle_write, shared_from_this(),
                                         boost::asio::placeholders::error,
                                         boost::asio::placeholders::bytes_transferred));
}

void tcp_connection::handle_write(const boost::system::error_code &, size_t) {
}
