/*
 * DieWithError.c
 *
 *  Created on: Jul 12, 2018
 *      Author: sourav-sg
 */
#include <stdio.h>
#include <stdlib.h>

void DieWithError(char *errorMessage){
	perror(errorMessage);
	exit(1);
}
