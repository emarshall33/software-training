#include <STSL/RJRobot.h>

void driveForward(double feet, RJRobot& robot);
void turn(double degrees, RJRobot& robot);
int main()
{
    RJRobot robot; //Initialize a RJ Robot
    driveForward(1, robot);
    turn(90, robot);
    //can you see me
    // Drive forwards
    // for (int i = 0; i < 4; i++) {
    //     robot.setDriveMotors(1, -1);
    //     robot.wait(2000ms);
    //     robot.setDriveMotors(0, 0);
    //     robot.wait(800ms);
    //     robot.setDriveMotors(1, 1);
    //     robot.wait(135ms);
    //     robot.setDriveMotors(0, 0);
    //     robot.wait(800ms);
    // }
    
    
 
    // robot.setDriveMotors(1.0, -1.0); //Drive both robot motors forward at max speed
    // robot.wait(2500ms); //Wait for 2000 milliseconds (2 seconds)
    // robot.stopMotors(); //Stop the motors

// <<<<<<<<< saved version

// =========
// =========

// >>>>>>>>> local version
// >>>>>>>>> local version
    return 0;
}


    void driveForward(double feet, RJRobot& robot)
    {
        robot.setDriveMotors(0.25, -0.25);
        int a = (int)feet;
        int b = a*2000;
        robot.wait(std::chrono::milliseconds(b));
    }
    void turn(double degrees, RJRobot& robot)
    {
        robot.setDriveMotors(-0.25, -0.25);
        int a = (int)degrees;
        int b = a*9;
        robot.wait(std::chrono::milliseconds(b));
    }
