//
// Created by plter on 2019-09-13.
//

#ifndef N011BOOSTASIOASYNCTCPSERVER_TCP_SERVER_H
#define N011BOOSTASIOASYNCTCPSERVER_TCP_SERVER_H

#include <ctime>
#include <iostream>
#include <string>
#include <boost/bind.hpp>
#include <boost/shared_ptr.hpp>
#include <boost/enable_shared_from_this.hpp>
#include <boost/asio.hpp>
#include "tcp_connection.h"

#define PORT 9000

using namespace boost::asio::ip;

class tcp_server {
public:
    explicit tcp_server(boost::asio::io_service &io_service);

private:
    void start_accept();

    void handle_accept(const tcp_connection::pointer &new_connection,
                       const boost::system::error_code &error);

    tcp::acceptor acceptor_;
};

#endif //N011BOOSTASIOASYNCTCPSERVER_TCP_SERVER_H
