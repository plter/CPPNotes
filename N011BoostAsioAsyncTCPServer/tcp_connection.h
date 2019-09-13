//
// Created by plter on 2019-09-13.
//

#ifndef N011BOOSTASIOASYNCTCPSERVER_TCP_CONNECTION_H
#define N011BOOSTASIOASYNCTCPSERVER_TCP_CONNECTION_H

#include <ctime>
#include <iostream>
#include <string>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio.hpp>


class tcp_connection
        : public boost::enable_shared_from_this<tcp_connection> {
public:
    typedef boost::shared_ptr<tcp_connection> pointer;

    static pointer create(boost::asio::io_service &io_service);

    boost::asio::ip::tcp::socket &socket();

    void start();

private:
    explicit tcp_connection(boost::asio::io_service &io_service);

    void handle_write(const boost::system::error_code & /*error*/,
                      size_t /*bytes_transferred*/);

    boost::asio::ip::tcp::socket socket_;
    std::string message_;
};

#endif //N011BOOSTASIOASYNCTCPSERVER_TCP_CONNECTION_H
