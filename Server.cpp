#include "thread.h"
#include "socketserver.h"
#include "socket.h"
#include <stdlib.h>
#include <time.h>
#include <list>
#include <vector>
#include <iostream>

using namespace Sync;

/*  create a socket process
*   IP:a.b.c
*   PORT NO: xxxx
*   STATUS: Listening for connections
*/
//

int main(void)
{
    std::cout << "I am a server." << std::endl;
    //create socket process
    SocketServer socketProcess (2002);


}

