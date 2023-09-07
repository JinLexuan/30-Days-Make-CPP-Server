#include <arpa/inet.h>
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

    (void) connect(sockFD, reinterpret_cast<sockaddr*>(&serverAddress), sizeof(serverAddress)); // NOLINT

    return 0;
}