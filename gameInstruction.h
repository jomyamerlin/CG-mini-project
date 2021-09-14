#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
void gameInstructions()
{
        glColor3d(1,0.5,0.5);
        glBegin(GL_POLYGON);
        glVertex2d(150-10,144+10);
        glVertex2d(350+10,144+10);
        glVertex2d(350+10,393);
        glVertex2d(150-10,393);
        glEnd();
        glColor3d(1,0.5,0.5);
        glBegin(GL_POLYGON);
        glVertex2d(152-10,147+10);
        glVertex2d(348+10,147+10);
        glVertex2d(348+10,390);
        
        glVertex2d(152-10,390);
        glEnd();
        char str1[]="A:Use the left and right arrow keys to point the shooter to the balls";
        char str2[]="B:Press 's' to shoot the ball";
        char str3[]="C:Remember, the shooter should point exatly below the ball";
        char str4[]="D:Press Enter to start playing";
        glColor3d(0,0,0);
        glRasterPos2d(155,350);
        for(i=0;i<sizeof(str1);i++)
	    {
	      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str1[i]);
	    }
        glRasterPos2d(155,307);
        for(i=0;i<sizeof(str2);i++)
	    {
	      glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str2[i]);
	    }
        glRasterPos2d(155,264);
        for(i=0;i<sizeof(str3);i++)
	    {
	       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str3[i]);
	    }
        glRasterPos2d(155,221);
        for(i=0;i<sizeof(str4);i++)
	    {
	       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,str4[i]);
	    }

}


