#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(void) {
    int recv_length, sockfd;
    u_char buffer[9000];

    // Create a raw socket that listens to all Ethernet traffic
    if ((sockfd = socket(PF_INET, SOCK_RAW, IPPROTO_TCP)) == -1) {
        perror("Error creating socket");
        exit(1);
    }

    for(int i=0; i < 5; i++) {
        recv_length = recv(sockfd, buffer, 9000, 0);
        printf("Got a %d byte packet\n", recv_length);
        // Print the first 20 bytes of the packet in hex
        for(int j=0; j < 20; j++)
            printf("%02x ", buffer[j]);
        printf("\n");
    }
    return 0;
}
