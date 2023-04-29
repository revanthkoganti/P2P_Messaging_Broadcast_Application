#include <stdio.h>      /* for printf() and fprintf() */
#include <sys/socket.h> /* for socket(), bind(), and connect() */
#include <arpa/inet.h>  /* for sockaddr_in and inet_ntoa() */
#include <stdlib.h>     /* for atoi() and exit() */
#include <string.h>     /* for memset() */
#include <unistd.h>     /* for close() */

/* MySQL connection settings */
#define DB_HOST "localhost"
#define DB_USER "debian-sys-maint"
#define DB_PASS "y5AyLlBo4PUnqOTJ"
#define DB_NAME "mydb"


void DieWithError(char *errorMessage);  /* Error handling function */
void HandleTCPClient(int clntSocket, char clntAddr[20]);   /* TCP client handling function */
int CreateTCPServerSocket(unsigned short port); /* Create TCP server socket */
int AcceptTCPConnection(int servSock, struct sockaddr_in **ClntAddr);  /* Accept TCP connection request */