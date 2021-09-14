#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
float xr=0.0,yr=0.0;
void gun();
void moveGun(int key,int x,int y);
void gun()
{
	float deginrad;
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	   for(int i=0;i<=360;i++)
	   {
	   	deginrad=i*(3.14/180);
	   	glVertex2f((15+xr+(10*cos(deginrad))),(25+(15*sin(deginrad))));
	   }
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2d(10+xr,40);
		glVertex2d(20+xr,40);
		glVertex2d(20+xr,60);
		glVertex2d(10+xr,60);
	glEnd();	  
	glBegin(GL_POLYGON);
		glVertex2d(10+xr,60);
		glVertex2d(20+xr,60);
		glVertex2d(15+xr,70);
	glEnd();
   	
}

void moveGun(int key,int x,int y)
{
	switch(key)
	{			  
		case GLUT_KEY_RIGHT:
			xr+=5;
			if(xr>500)
			{ 
				 xr=1;
				 moveGun(key,x,y);	
			} 
			break;
			
		case GLUT_KEY_LEFT:
			xr-=5;
			if(xr<0)
			{
				 xr=1;
				 moveGun(key,x,y);	
			}	
	}
}

