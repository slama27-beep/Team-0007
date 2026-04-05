#include <kipr/wombat.h>

void drive (int power){
    motor (0, power); //remember to add actual motor motor
    motor (3, power);
}

void turnleft (int power, int time){
    motor (0, power); //remember to add motor, power
    motor (3, -power);
}
void turnright (int power, int time){
    motor (0, -power); //remember to add motor
    motor (3, power);
}
void arm (int degree){
    enable_servos();
    set_servo_position (0, degree);
    msleep (100);	//random port until the bot is completely fixed, servos not connected + wobbly
}
void initialization(){
    arm(540);
}
    
int main()
{
    initialization();
    //wait_for_light(port);
    
    
    arm (1100);
    
    arm (1365);
    //
    while ((analog (0)< 3900) && (analog (5)< 3900)){      
        drive (60);
        if ((analog (0)> 3900) && (analog (5)> 3900)){
            break;
        }}
    while ((analog (0)> 3900) && (analog (5)> 3900)){      
        drive (60);
        if ((analog (0)< 3900) && (analog (5)< 3900)){
            break;
        }}
    
    drive (45);
    msleep (2200);
    
    /*turnright (60,  400);
    msleep (1000);  
    turnright (60,  400);
    msleep (1000);
    reverse (70, 4000);
    msleep (2000);
    drive (75, 2000);
    msleep (5000); //added random time, will fix later ofc 
    turnright (50, 200);
    msleep (1000);
    drive (75, 2000);
    msleep (5000);
    */
    return 0;
}
