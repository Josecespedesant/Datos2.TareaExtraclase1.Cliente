#include "sockets.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <iostream>
/*!
  Basado en:
  https://www.geeksforgeeks.org/socket-programming-cc/
 * \brief Sockets::Sockets
 */

Sockets::Sockets()
{

    sock = 0;
    buffer[4096] = {0};

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        {
            printf("\n Socket creation error \n");
        }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)  {
        printf("\nInvalid address/ Address not supported \n");
    }

    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0){

        printf("\nConnection Failed \n");
    }

}

char* Sockets::getMessage(){
    read(sock, buffer, 4096);
    return buffer;
}

void Sockets::sendMessage(char *mensaje){
    send(sock, mensaje, strlen(mensaje), 0);
}
