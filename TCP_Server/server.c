/*
 * main.c
 *
 *  Created on: Jul 12, 2018
 *      Author: sourav-sg
 */

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//Create a tcp socket()
//Assign a port number to the socket with bind()
/*Tell the system to allow the connection to be made
	to that port using listen*/
//Repeat
	// call accept
	//Communicate with the client using send() and recv()
	//close client connection using close()

