#include<GL/glut.h>
#include<windows.h>
#include<math.h>
#include<stdio.h>
#include "ball.h"
#include "shooter.h"
#include "frontScreen.h"
#include "keyPressed.h"
#include "brickBarriers.h"
#include "gameInstruction.h"
void myinit()
{
	 glClearColor(2,2,3,1);
     gluOrtho2D(0,500,0,500);  
}
void display()
{	

 	srand(0x98765432);
	glClear(GL_COLOR_BUFFER_BIT);
	if(dispFrontScreen)
	{
		frontscreen();		
	}   
    else if(gameScreen)
    {
    	gameInstructions();  
    }	 
    else if(startGame)
    {
    	scores();
    	dispBalls();
		barrierSpread();
		gun();	
    }
    else if(gameOver)
    {
    	gameOvers();
    	
    }

	glutSwapBuffers();	
	glutPostRedisplay();
    glFlush();
}

int main(int argc,char **argv)
{	
	
    glutInit(&argc,argv);
    glutInitWindowSize(1350,650);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutCreateWindow("Shooting game");
    glutKeyboardFunc(keyPressed);
    glutDisplayFunc(display);
    glutSpecialFunc(moveGun);
    myinit();
    glutMainLoop();
    //return 0;
}
