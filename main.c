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
void moveWheel(int direction, int wheel);
void moveWheels(int direction);
void shakeWheel(int wheel);
void shakeWheels();
void turnYourselfAround(int wheel);
void printMessage();
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
	turnYourselfAround(RIGHT_WHEEL);
	
	// That's what it's all about!
	printMessage();
	
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
	turnYourselfAround(LEFT_WHEEL);
	
	// That's what it's all about!
	printMessage();
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// You do the Hooooookey Pokey!
	haveSomeFun();
	
	// You put your whole self in
	moveWheels(1);
	
	// You put your whole self out
	moveWheels(-1);
	
	// You put your whole self in
	moveWheels(1);
	
	// and you shake it all about
	shakeWheels();
	
	// you do the hokey pokey and you turn yourself around
	turnYourselfAround(LEFT_WHEEL);
	
	// That's what it's all about!
	printMessage();
	
	// then we're done!
	return 0;
}

/**
 * TODO: document this function
 */
void moveWheel(int direction, int wheel)
{
	char *dir = "in";
	char *wh = "left wheel";
	if (direction < 0) {
		dir = "out";
	}
	if (wheel == RIGHT_WHEEL) {
		wh = "right wheel";
	}
	printf("You put your %s %s\n", wh, dir);
	motor(wheel, 25 * direction);
	msleep(1000);
	off(wheel);
}

/**
 * TODO: document this function
 */
void moveWheels(int direction) 
{
	char *dir = "in";
	if (direction < 0) {
		dir = "out";
	}
	printf("You put your whole self %s\n", dir);
	motor(RIGHT_WHEEL, 25 * direction);
	motor(LEFT_WHEEL, 25 * direction);
	msleep(1000);
	off(RIGHT_WHEEL);
	off(LEFT_WHEEL);
}

/**
 * TODO: document this function
 */
void shakeWheel(int wheel)
{
	printf("and you shake it all about.\n");
	for (int i = 0; i < 5; ++i) 
	{
		motor(wheel, 100);
		msleep(100);
		motor(wheel, -100);
		msleep(100);
	}
	motor(wheel, 100);
	msleep(100);
	off(wheel);
}

/**
 * TODO: document this function
 */
void shakeWheels()
{
	printf("and you shake it all about.\n");
	for (int i = 0; i < 5; ++i) 
	{
		motor(RIGHT_WHEEL, 100);
		motor(LEFT_WHEEL, -100);
		msleep(100);
		motor(RIGHT_WHEEL, -100);
		motor(LEFT_WHEEL, 100);
		msleep(100);
	}
	motor(RIGHT_WHEEL, 100);
	motor(LEFT_WHEEL, -100);
	msleep(100);
	off(RIGHT_WHEEL);
	off(LEFT_WHEEL);
}

/**
 * TODO: document this function
 */
void turnYourselfAround(int wheel)
{
	printf("You do the Hokey Pokey\n");
	printf("and you turn yourself around\n");
	motor(wheel, 100);
	msleep(2500);
	off(wheel);
}

/**
 * TODO: document this function
 */
void printMessage()
{
	printf("That's what it's all about!\n");
	msleep(1000);
}

/**
 * TODO: document this function
 */
void haveSomeFun()
{
	printf("You do the Hoooooookey Pokey!\n");
	motor(RIGHT_WHEEL, 100);
	msleep(2500);
	off(RIGHT_WHEEL);
}

