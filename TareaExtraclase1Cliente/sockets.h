#ifndef SOCKETS_H
#define SOCKETS_H

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 8080

using namespace std;

class Sockets
{
private:
    int sock, valread;
    struct sockaddr_in serv_addr;
    char buffer[1024];

public:
    Sockets();
    void sendMessage(char* mensaje);
    char* getMessage();
};

#endif // SOCKETS_H
