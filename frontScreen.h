#include<GL/glut.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
void frontscreen()
{
      char collegeName[]="Gopalan College of Engineering and Management";
      char dept[]="Department of";
      char deptName[]="Computer Science and Engineering";
      char miniProj[]="A mini project on";
      char projTitle[]="BALL SHOOTER";
      char by[]="By";
      char name2[]="Jomya Merlin George (1GD17CS017)";
      char name1[]="S Heenasha (1GD17CS015)";
      char guided[]="Guided by";
      char guideName[]="Manju V";
      char start[]="Press Enter to start!";
      
      glColor3d(1,0,1);
      glColor3d(0,1,1);
      glBegin(GL_POLYGON);
      glVertex2d(100,0);
      glVertex2d(400,0);
      glVertex2d(400,500);
      glVertex2d(100,500);
      glEnd();
      
      
      glColor3d(0,0,0);
      glRasterPos2d(160,400);
       for(int i=0;i<sizeof(collegeName);i++)
      {
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,collegeName[i]);
      }
      
      glColor3d(0.4,0.3,0.6);
      glRasterPos2d(210,320+15);
      for(int i=0;i<sizeof(dept);i++)
      {
	    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,dept[i]);
      }
    glRasterPos2d(180,300+15);
    for(int i=0;i<sizeof(deptName);i++)
    {
     	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,deptName[i]);
    }
    glColor3d(0.9,0.1,0.5);
    glRasterPos2d(205,250+10);
    for(int i=0;i<sizeof(miniProj);i++)
    {
    	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,miniProj[i]);
    }
    glColor3d(1,0.0,0.1);
    glRasterPos2d(205,220+10);
    for(int i=0;i<sizeof(projTitle);i++)
    {
	  glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,projTitle[i]); 
    }
    glColor3d(0.5,0.1,5);
   glRasterPos2d(225,180);
   for(int i=0;i<sizeof(by);i++)
   {
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,by[i]);
   }
   glColor3d(0.2,0.3,1);
   glRasterPos2d(195,150);
   for(int i=0;i<sizeof(name1);i++)
   {
   	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,name1[i]);
   }
   glColor3d(0.2,0.3,1);
   glRasterPos2d(180,130);
   for(int i=0;i<sizeof(name2);i++)
   {
   	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,name2[i]);
   }
   
   glColor3d(0.9,0.5,0.1);
   glRasterPos2d(215,90);
   for(int i=0;i<sizeof(guided);i++)
   {
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,guided[i]);
   }
   glRasterPos2d(215,70);
   for(int i=0;i<sizeof(guideName);i++)
   {
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,guideName[i]);
   }

   glColor3d(1,0.2,0.2);
   glRasterPos2d(200,30);
   for(int i=0;i<sizeof(start);i++)
   {
	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,start[i]);
   }
}

