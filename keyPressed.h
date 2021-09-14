#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
void keyPress(unsigned char key,int x,int y);
long points=0;
int point[35]={0};
char str1[10];
char str2[20];
int dispFrontScreen=1,gameScreen=0,clickCount=1,shoot=0,startGame=0,dispInstruction=0,gameOver=0;
void scores()
{
	sprintf(str1,"Points:%d",points);

	glColor3d(0,1,0);
	glRasterPos2d(440,485);
	for(i=0;i<sizeof(str1);i++)
 	{
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str1[i]);
 	}
    
}
void gameOvers()
{
	char msg1[]="GAME OVER";
/*	char msg2="WOOHOO YOU WON!!!";
	char msg3="Sorry You Lost";
	char msg4="Better Luck Nextime";*/
	if(points ==100)
    {
    	startGame=0;
    	gameOver=1;
    	glColor3d(1,1,0);
    	sprintf(str1,"You Scored:%d",points);
		glRasterPos2d(155,350);
			for(i=0;i<sizeof(str2);i++)
 			{
				glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str2[i]);
 			}
		glColor3d(1,1,1);
        glRasterPos2d(155,350);
        for(i=0;i<sizeof(msg1);i++)
	    {
	      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
	    }	
	}
}
void keyPressed(unsigned char key,int x,int y)
{
	switch(key)
	{
		case 13:
		{
			if(clickCount==1)
			{
				gameScreen=1;
				startGame=0;
				dispInstruction=0;
				dispFrontScreen=0;
				clickCount++;
			}
			else if(clickCount>=2)
			{
				dispInstruction=0;
				gameScreen=0;
				startGame=1;
				clickCount++;
			}
			break;
		}
		case 's':
		{
			for(int i=0;i<10;i++)
			{
				for(int j=0;j<6;j++)
				{
					if(y5>=-100)
					{
					if(ballXpos[i]==15+xr || ballXpos[i]==15+xr+5 || ballXpos[i]==15+xr-5 )
					{
					points+=10;
					glPushMatrix();
					glTranslatef(ballXpos[i],ballYpos[j],0);
					ballXpos[i]=rand()%452020;
                 	glPopMatrix();
					}
					}
				}
			}
			break;
		}
		case 'q':
			exit(0);
	}
	
	
}
