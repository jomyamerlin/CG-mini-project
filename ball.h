#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int ballXpos[12]={15,55,100,145,190,235,280,325,370,415};
int ballYpos[6]={435,400,365,330,295,260};
int x2[20],y2[20],i;
float y5=150;
int xpos,ypos;
void drawball(int xpos,int ypos)
{
			float deginrad;
			glBegin(GL_POLYGON);
			for(int i=0;i<=360;i++)
			{
	   			deginrad=i*(3.14/180);
	   			glVertex2f((xpos+(10*cos(deginrad))),(ypos+(15*sin(deginrad))));
	    	}
    		glEnd();	
}
void dispBalls()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<6;j++) 
		{
			if(i==0||i==3||i==6||i==9)
				glColor3d(1,0,0);
			else if(i==1||i==4||i==7)
				glColor3d(0,1,0);
			else if(i==2||i==5||i==8)
				glColor3d(0,0,1);
			glPushMatrix();
				glTranslatef(0,y5,0);
				 drawball(ballXpos[i],ballYpos[j]);	
			glPopMatrix();
			y5=y5-0.010;	
			if(y5<=-280)
			{
				y5=280;
				dispBalls();
			}				
		}
	}	
  
}
