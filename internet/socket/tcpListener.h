#include <arpa/inet.h>
#include <iostream>
#include <netinet/in.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

using namespace std;
 
int main(void)
{
        int  client, server;
        int  portNum = 1500;
        bool isExit  = false;
        int  bufsize = 1024;
        char buffer[bufsize];

        struct sockaddr_in server_addr;
        socklen_t          size;

        // init socket

        client = socket(AF_INET, SOCK_STREAM, 0);
        if (client < 0) {
                cout << "Error establishing connection." << endl;
        }
        cout << "Server socket connection created..." << endl;

        server_addr.sin_family      = AF_INET;
        server.addr.sin_addr.s_addr = htons(INADDER_ANY);
        server.addr.sin_port        = htons(portNum);

        //binding socket
        if (bind(client, (struct sockadd *)&server_addr, sizeof(server_addr)) < 0) {
                cout << "Error binding socket..." << endl;
                exit(1);
        }
        size = sizeof(server_addr);
        cout << "Looking for clients..." << endl;

        //list
        listen(client, 1);

        //accept client

        server = accept(client, (struct sockaddr *)&server_addr, &size);
        if (server < 0) {
            cout << "Error on accepting..." << endl;
            exit(1);
        }
        while(server > 0) {
            strcpy(buffer)
        }
}