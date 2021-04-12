/*
   Copyright 2021 Daniel S. Buckstein

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

	   http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

/*
	GPRO Net SDK: Networking framework.
	By Daniel S. Buckstein

	main-server.cpp
	Main source for console server application.
*/

#include "gpro-net/gpro-net-server/gpro-net-RakNet-Server.hpp"


int main(int const argc, char const* const argv[])
{
	gproNet::cRakNetServer server;

	while (1)
	{
		server.MessageLoop();
	}

	printf("\n\n");
	system("pause");
}

//function for distrubting the calculations based on number of clients
/*{
* case for 1 client
*  distribute calculations between server and client by half
* 
* case for more than one client
*
* int total num clients (we would divide based on that)
* list of which client is in charge of what 
}*/


//proposed changes to the data structure 
/*
* keep the float arrays the same
* 
* char = 32 bits
* 0 bits x 
* 10 bits y
* 20 bits z
* 
* (two largest values, 10 bits each and the last 2 go to their sign. the smaller value has 9 bits to their value and that last one goes to sign)
* char s
* char r (in case of rotation, we can use all 10 for storing value)
* char t
* we will have a char for each array
* 
* read //we will do the same for write
* {
* bitstream.Read(s);
* bitstream.Read(r);
* bistream.Read(t);
}

//decompression is the opposite of compression (divide)
//the values we are taking are absolute values because their sign will be stored anyway
compress rotation()
[0,359] * ???
//we can use the last two bits for the two higher numbers

//bitshift r to store the correct numbers

compress translation()
[0, maxDistance] * ???
(potential fix)
[0, levelBoundry) <- this could be different for x, y, and z

//bitshift t to store the correct numbers

compress scale ()
[0, maxScale] * ???
//we can use the last two bits for the two higher numbers

//bitshift r to store the correct numbers
*/
