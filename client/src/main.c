/*! \file main.c
 *
 *  Author:  Javier Montenegro (https://javiermontenegro.github.io/)
 *  Details: program file for methods implementation.
 */

#include "common.h"

    extern void client(const char* hostname, const unsigned int port, char *username);

    int main(int argc, char *argv[])
    {
        //TODO: use getopt
        char ipaddr[INET_ADDRSTRLEN];
        unsigned int port = 0;
        
        if(argc < 3)
        {
            printf("Client usage: chatclient <desired_username> <server_ip>:<server_port>\n");
            return 0;
        }
        
        sscanf(argv[2], "%[^:]:%u", ipaddr, &port);
        if(port == 0)
                port = DEFAULT_SERVER_PORT;

        client(ipaddr, port, argv[1]);
            
    }
