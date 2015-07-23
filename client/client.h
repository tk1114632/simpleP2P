#ifndef _CLIENT_H
#define _CLIENT_H

// return sockfd
int connectToServer(char* serverIP, int port);

void disconnectToServer(int sockfd);

void publishTorrent(int sockfd, FILE* oFile);

#endif
