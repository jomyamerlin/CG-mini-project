#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int x6=0,x7=0,y7=0;
void barriers1()
{
	glBegin(GL_POLYGON);
	glColor3d(0,0,0);
		glVertex2d(0,120);
		glVertex2d(50,120);
		glVertex2d(50,150);
		glVertex2d(0,150);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3d(0.39f,0.19f,0);
		glVertex2d(2,124);
		glVertex2d(48,124);
		glVertex2d(48,146);
		glVertex2d(2,146);
	glEnd();
}
/*void barriers2()
{
	glBegin(GL_POLYGON);
	glColor3d(0,0,0);
		glVertex2d(0,120);
		glVertex2d(35,120);
		glVertex2d(35,90);
		glVertex2d(0,90);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3d(0.39f,0.19f,0);
		glVertex2d(2,120);
		glVertex2d(33,120);
		glVertex2d(33,94);
		glVertex2d(2,94);
	glEnd();
}*/
void barrierSpread()
{
for(int y7=0;y7>-150;y7-=26)
{
	for(int x6=0;x6<500;x6+=35)
	{
		glPushMatrix();
		glTranslated(x6,y7,0);
		barriers1();
		glPopMatrix();	
	}
}
}
