#include <arpa/inet.h>
#include <iostream>
#include <string>
#include <sys/socket.h>

int main()
{
    // FD represents file descriptor
    const int sockFD = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in serverAddress
    {
    };

    bzero(&serverAddress, sizeof(serverAddress));
    serverAddress.sin_family      = AF_INET;
    serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1");
    serverAddress.sin_port        = htons(8888);

    (void) bind(sockFD, reinterpret_cast<sockaddr*>(&serverAddress), sizeof(serverAddress)); // NOLINT

    listen(sockFD, SOMAXCONN);

    struct sockaddr_in clientAddress
    {
    };

    socklen_t clientAddressLength = sizeof(clientAddress);
    bzero(&clientAddress, sizeof(clientAddress));

    const int clientSocketFD = accept(sockFD, reinterpret_cast<sockaddr*>(&clientAddress), &clientAddressLength); // NOLINT

    std::cout << "New Client fd " << clientSocketFD << "! IP: "
              << inet_ntoa(clientAddress.sin_addr) << " Port: "
              << ntohs(clientAddress.sin_port) << std::endl;
    return 0;
}