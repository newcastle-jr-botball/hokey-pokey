/**
Hokey Pokey
Newcastle Junior Botball Team
2nd - 4th Grade

This is a tutorial script to show various aspects of basic coding. We will command the 
robot (powered by the KIPR Link -- http://www.kipr.org/hardware-software) to do the Hokey Pokey.
*/

// first, let's declare our constants
#define LEFT_WHEEL 1   // left motor is plugged into M1 (motor port 1)
#define RIGHT_WHEEL 3    // right motor is plugged into M3 (motor port 3)

// now let's declare our functions
int doTheHokeyPokey();
void moveWheel(direction, wheel);
void shakeWheel(wheel);
void turnYourselfAround();
void printMessage(msg);
void haveSomeFun();

// When we touch the "Run" button on the Link, this function is called. This is the entry point 
// into our program. 
int main()
{
	return doTheHokeyPokey(); // the function returns 0 here to turn off the program
}

// the hokey pokey code
// this function returns 0 at the end to turn off the program
int doTheHokeyPokey()
{
	// You put your right wheel in
	moveWheel(1, RIGHT_WHEEL);
	
	// You put your right wheel out
	moveWheel(-1, RIGHT_WHEEL);
	
	// You put your right wheel in
	moveWheel(1, RIGHT_WHEEL);
	
	// and you shake it all about
	shakeWheel(RIGHT_WHEEL);
	
	// you do the hokey pokey and you turn yourself around
	turnYourselfAround();
	
	// That's what it's all about!
	printMessage("That's what it's all about!");
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// You put your left wheel in
	moveWheel(1, LEFT_WHEEL);
	
	// You put your left wheel out
	moveWheel(-1, LEFT_WHEEL);
	
	// You put your left wheel in
	moveWheel(1, LEFT_WHEEL);
	
	// and you shake it all about
	shakeWheel(LEFT_WHEEL);
	
	// you do the hokey pokey and you turn yourself around
	turnYourselfAround();
	
	// That's what it's all about!
	printMessage("That's what it's all about!");
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// You put your whole self in
	moveWheel(1, RIGHT_WHEEL);
	moveWheel(1, LEFT_WHEEL);
	
	// You put your whole self out
	moveWheel(-1, RIGHT_WHEEL);
	moveWheel(-1, LEFT_WHEEL);
	
	// You put your whole self in
	moveWheel(1, RIGHT_WHEEL);
	moveWheel(1, LEFT_WHEEL);
	
	// and you shake it all about
	shakeWheel(RIGHT_WHEEL);
	shakeWheel(LEFT_WHEEL);
	
	// you do the hokey pokey and you turn yourself around
	turnYourselfAround();
	
	// That's what it's all about!
	printMessage("That's what it's all about!");
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// then we're done!
	return 0;
}
