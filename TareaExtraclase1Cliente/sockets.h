#ifndef SOCKETS_H
#define SOCKETS_H

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#define PORT 8080

/*!
 *Declaración de la clase sockets que permite la comunicación con el servidor.
 */

using namespace std;

class Sockets
{
private:
    int sock, valread;
    struct sockaddr_in serv_addr;
    char buffer[4096];

public:
    /*!
      Constructor de la clase sockets.
     * \brief Sockets
     */
    Sockets();
    /*!
      Método que envía un mensaje al servidor.
     * \brief sendMessage
     * \param mensaje
     */
    void sendMessage(char* mensaje);
    /*!
      Método que recibe un mensaje del servidor.
     * \brief getMessage
     * \return
     */
    char* getMessage();
};

#endif // SOCKETS_H
