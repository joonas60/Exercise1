/**
  * Version:0.0.1
  * Author: Jouni Palokangas
  */

#include "operations.h"

/**
  * this is a main execution oint of this application
  * @param argc number of command line arguments
  * @param argv pointer to array containing the cmd arguments
  * @return integer containing the exit status 
  */

int main(int argc, char **argv) {
 	int ret_val = printEnvironment();

	if (ret_val == 0) {
	printOneEnvironment("HOME");
	}

return 0;
}
