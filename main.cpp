#include<iostream>
#include<fstream>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include <windows.h>

# define PI 3.14159265358979323846

void initGL() {

   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

GLfloat position = -1.0f;
GLfloat speed = 0.01f;
void update(int value) {
if(position >2.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);


}

GLfloat position2 = 1.0f;
GLfloat speed2 = 0.0022f;
void update2(int value) {
if(position2 <-1.9)
        position2 = 1.0f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);


}

GLfloat position3 = 1.4f;
GLfloat speed3 = 0.01f;
void update3(int value) {
if(position3 <-1.9)
        position3 = 1.4f;

    position3 -= speed3;

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);


}

GLfloat position4 = 1.0f;
GLfloat speed4 = 0.01f;
void update4(int value) {
if(position4 <-1.6)
        position4 = 1.0f;

    position4 -= speed4;

	glutPostRedisplay();


	glutTimerFunc(100, update4, 0);


}

GLfloat position5 = -1.0f;
GLfloat speed5 = 0.01f;
void update5(int value) {
if(position5 >2.0)
        position5 = -1.0f;

    position5 += speed5;

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);


}

GLfloat position6 = -1.0f;
GLfloat speed6 = 0.01f;
void update6(int value) {
if(position6 >2.0)
        position6 = -1.0f;

    position6 += speed6;

	glutPostRedisplay();


	glutTimerFunc(100, update6, 0);


}


void Idle()

{

    glutPostRedisplay();

}

void display_day() {
     glClearColor(0.87f, 0.97f, 1.0f, 0.2f);
   glClear(GL_COLOR_BUFFER_BIT);



   glBegin(GL_POLYGON);
   glColor3ub(23,138,34);
   glVertex2f(-1,-1);
   glVertex2f(1,-1);                //grasss bg color
   glVertex2f(1,-0.6);
   glVertex2f(-1,-0.6);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(157,159,157);
   glVertex2f(-1,-0.6);             //road
   glVertex2f(1,-0.6);
   glVertex2f(1,0.1);
   glVertex2f(-1,0.1);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.9,-0.3);
   glVertex2f(-0.7,-0.3);
   glVertex2f(-0.7,-0.27);          //divider
   glVertex2f(-0.9,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.5,-0.3);
   glVertex2f(-0.3,-0.3);
   glVertex2f(-0.3,-0.27);          //divider
   glVertex2f(-0.5,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.1,-0.3);
   glVertex2f(0.1,-0.3);
   glVertex2f(0.1,-0.27);          //divider
   glVertex2f(-0.1,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.3,-0.3);
   glVertex2f(0.5,-0.3);
   glVertex2f(0.5,-0.27);          //divider
   glVertex2f(0.3,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.7,-0.3);
   glVertex2f(0.9,-0.3);
   glVertex2f(0.9,-0.27);          //divider
   glVertex2f(0.7,-0.27);
   glEnd();



   glBegin(GL_POLYGON);
   glColor3ub(66, 140, 244);
   glVertex2f(-1,0.1);
   glVertex2f(1,0.1);
   glVertex2f(1,1);          //sea
   glVertex2f(-1,1);
   glEnd();


   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.9,0.1);
   glVertex2f(-0.87,0.1);
   glVertex2f(-0.87,0.23);          //road er upor
   glVertex2f(-0.9,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.6,0.1);
   glVertex2f(-0.57,0.1);
   glVertex2f(-0.57,0.23);          //road er upor
   glVertex2f(-0.6,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.3,0.1);
   glVertex2f(-0.27,0.1);
   glVertex2f(-0.27,0.23);          //road er upor
   glVertex2f(-0.3,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.0,0.1);
   glVertex2f(0.03,0.1);
   glVertex2f(0.03,0.23);          //road er upor
   glVertex2f(0.0,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.3,0.1);
   glVertex2f(0.33,0.1);
   glVertex2f(0.33,0.23);          //road er upor
   glVertex2f(0.3,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.6,0.1);
   glVertex2f(0.63,0.1);
   glVertex2f(0.63,0.23);          //road er upor
   glVertex2f(0.6,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.9,0.1);
   glVertex2f(0.93,0.1);
   glVertex2f(0.93,0.23);          //road er upor
   glVertex2f(0.9,0.23);
   glEnd();

   glLineWidth(2.5);
   glColor3ub(122, 51, 33);
   glBegin(GL_LINES);
   glVertex2f(-1, 0.2);         //dori
   glVertex2f(1, 0.2);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-1,0.7);
   glVertex2f(1,0.7);
   glVertex2f(1,1);          //sky
   glVertex2f(-1,1);
   glEnd();

   //ship
   glLoadIdentity();
   glPushMatrix();
   glTranslatef(position,0.0, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(9,36,47);
   glVertex2f(-0.8,0.3);
   glVertex2f(-0.3,0.3);
   glVertex2f(-0.23,0.37);
   glVertex2f(-0.8,0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(55,57,58);
   glVertex2f(-0.6,0.37);
   glVertex2f(-0.8,0.37);
   glVertex2f(-0.8,0.48);
   glVertex2f(-0.68,0.48);
   glVertex2f(-0.65,0.45);
   glVertex2f(-0.6,0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(55,57,58);
   glVertex2f(-0.6,0.37);
   glVertex2f(-0.23,0.37);
   glVertex2f(-0.2,0.4);
   glVertex2f(-0.6,0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(9,36,47);
   glVertex2f(-0.2,0.4);
   glVertex2f(-0.1,0.5);
   glVertex2f(-0.3,0.5);
   glVertex2f(-0.35,0.44);
   glVertex2f(-0.4,0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(167,169,169);
   glVertex2f(-0.58,0.4);
   glVertex2f(-0.53,0.4);
   glVertex2f(-0.53,0.53);
   glVertex2f(-0.58,0.53);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(167,169,169);
   glVertex2f(-0.68,0.48);
   glVertex2f(-0.68,0.63);
   glVertex2f(-0.72,0.63);
   glVertex2f(-0.73,0.61);
   glVertex2f(-0.73,0.59);
   glVertex2f(-0.77,0.59);
   glVertex2f(-0.77,0.48);

   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(55,57,58);
   glVertex2f(-0.76,0.59);
   glVertex2f(-0.76,0.68);
   glVertex2f(-0.725,0.68);
   glVertex2f(-0.725,0.62);
   glVertex2f(-0.73,0.61);;
   glVertex2f(-0.73,0.59);
   glEnd();

   glLineWidth(2.2);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.12, 0.5);         //dori
   glVertex2f(-0.12, 0.535);
   glEnd();

    glLineWidth(2.2);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.12, 0.535);
   glVertex2f(-0.27,0.535);
   glVertex2f(-0.27,0.5);
   glEnd();

   glLineWidth(2.2);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.27,0.535);
   glVertex2f(-0.29,0.5);
   glEnd();


   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.59);
   glVertex2f(-0.72,0.59);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.57);
   glVertex2f(-0.72,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.55);
   glVertex2f(-0.72,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.53);
   glVertex2f(-0.72,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.51);
   glVertex2f(-0.72,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.59);
   glVertex2f(-0.7,0.59);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.57);
   glVertex2f(-0.7,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.55);
   glVertex2f(-0.7,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.53);
   glVertex2f(-0.7,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.51);
   glVertex2f(-0.7,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.51);
   glVertex2f(-0.736,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.53);
   glVertex2f(-0.736,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.55);
   glVertex2f(-0.736,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.57);
   glVertex2f(-0.736,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.51);
   glVertex2f(-0.764,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.53);
   glVertex2f(-0.764,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.55);
   glVertex2f(-0.764,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.57);
   glVertex2f(-0.764,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.51);
   glVertex2f(-0.545,0.51);
   glEnd();



   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.49);
   glVertex2f(-0.545,0.49);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.47);
   glVertex2f(-0.545,0.47);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.45);
   glVertex2f(-0.545,0.45);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.43);
   glVertex2f(-0.545,0.43);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.41);
   glVertex2f(-0.545,0.41);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.51);
   glVertex2f(-0.57,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.49);
   glVertex2f(-0.57,0.49);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.47);
   glVertex2f(-0.57,0.47);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.45);
   glVertex2f(-0.57,0.45);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.43);
   glVertex2f(-0.57,0.43);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.41);
   glVertex2f(-0.57,0.41);
   glEnd();
   glPopMatrix();
//end ship

   glLoadIdentity();
   glPushMatrix();
   glTranslatef(position3,0.0, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(46,11,85);
   glVertex2f(0.55,-0.18);                  //car
   glVertex2f(0.55,-0.1);
   glVertex2f(0.6,-0.06);
   glVertex2f(0.8,-0.06);
   glVertex2f(0.8,-0.18);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.569,-0.105);
   glVertex2f(0.63,-0.105);     //windshelid
   glVertex2f(0.63,-0.07);
   glVertex2f(0.61,-0.07);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.65,-0.105);
   glVertex2f(0.68,-0.105);     //windshelid
   glVertex2f(0.68,-0.07);
   glVertex2f(0.65,-0.07);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.7,-0.105);
   glVertex2f(0.73,-0.105);     //windshelid
   glVertex2f(0.73,-0.07);
   glVertex2f(0.7,-0.07);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.75,-0.105);
   glVertex2f(0.78,-0.105);     //windshelid
   glVertex2f(0.78,-0.07);
   glVertex2f(0.75,-0.07);
   glEnd();
   glPopMatrix();


    glLoadIdentity();
   glPushMatrix();
   glTranslatef(position4,0.0, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(82,5,18);
   glVertex2f(-0.55,-0.15);
   glVertex2f(-0.4,-0.15);     //car2
   glVertex2f(-0.4,-0.1);
   glVertex2f(-0.41,-0.07);
   glVertex2f(-0.5,-0.07);
   glVertex2f(-0.53,-0.1);
   glVertex2f(-0.55,-0.1);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.515,-0.1);
   glVertex2f(-0.47,-0.1);     //windshelid
   glVertex2f(-0.47,-0.08);
   glVertex2f(-0.50,-0.08);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.45,-0.1);
   glVertex2f(-0.42,-0.1);     //windshelid
   glVertex2f(-0.42,-0.08);
   glVertex2f(-0.45,-0.08);
   glEnd();

   glPopMatrix();

    glLoadIdentity();
   glPushMatrix();
   glTranslatef(position5,0.0, 0.0f);

   glBegin(GL_POLYGON);
   glColor3ub(69,84,61);
   glVertex2f(-0.65,-0.5);                  //car3
   glVertex2f(-0.3,-0.5);
   glVertex2f(-0.3,-0.42);
   glVertex2f(-0.34,-0.35);
   glVertex2f(-0.65,-0.35);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.4,-0.43);
   glVertex2f(-0.312,-0.43);     //windshelid
   glVertex2f(-0.34,-0.37);
   glVertex2f(-0.4,-0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.47,-0.43);
   glVertex2f(-0.42,-0.43);     //windshelid
   glVertex2f(-0.42,-0.37);
   glVertex2f(-0.47,-0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.54,-0.43);
   glVertex2f(-0.49,-0.43);     //windshelid
   glVertex2f(-0.49,-0.37);
   glVertex2f(-0.54,-0.37);
   glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.61,-0.43);
   glVertex2f(-0.56,-0.43);     //windshelid
   glVertex2f(-0.56,-0.37);
   glVertex2f(-0.61,-0.37);
   glEnd();
   glPopMatrix();

    glLoadIdentity();
   glPushMatrix();
   glTranslatef(position6,0.0, 0.0f);

   glBegin(GL_POLYGON);
   glColor3ub(91,43,37);
   glVertex2f(0.3,-0.5);                  //car4
   glVertex2f(0.48,-0.5);
   glVertex2f(0.48,-0.41);
   glVertex2f(0.45,-0.41);
   glVertex2f(0.42,-0.37);
   glVertex2f(0.3,-0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.38,-0.38);
   glVertex2f(0.38,-0.42);     //windshelid
   glVertex2f(0.445,-0.42);
   glVertex2f(0.415,-0.38);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.32,-0.38);
   glVertex2f(0.32,-0.42);     //windshelid
   glVertex2f(0.36,-0.42);
   glVertex2f(0.36,-0.38);
   glEnd();
   glPopMatrix();



   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(0.7,-0.9);
   glVertex2f(0.8,-0.9);
   glVertex2f(0.85,-0.78);
   glVertex2f(0.79,-0.81);          //grass
   glVertex2f(0.75,-0.75);
   glVertex2f(0.71,-0.81);
   glVertex2f(0.66,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(0.4,-0.9);
   glVertex2f(0.5,-0.9);
   glVertex2f(0.55,-0.78);
   glVertex2f(0.49,-0.81);          //grass
   glVertex2f(0.45,-0.75);
   glVertex2f(0.41,-0.81);
   glVertex2f(0.36,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(0.1,-0.9);
   glVertex2f(0.2,-0.9);
   glVertex2f(0.25,-0.78);
   glVertex2f(0.19,-0.81);          //grass
   glVertex2f(0.15,-0.75);
   glVertex2f(0.11,-0.81);
   glVertex2f(0.06,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(-0.2,-0.9);
   glVertex2f(-0.1,-0.9);
   glVertex2f(-0.05,-0.78);
   glVertex2f(-0.11,-0.81);          //grass
   glVertex2f(-0.15,-0.75);
   glVertex2f(-0.19,-0.81);
   glVertex2f(-0.24,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(-0.5,-0.9);
   glVertex2f(-0.4,-0.9);
   glVertex2f(-0.35,-0.78);
   glVertex2f(-0.41,-0.81);          //grass
   glVertex2f(-0.45,-0.75);
   glVertex2f(-0.49,-0.81);
   glVertex2f(-0.54,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(-0.8,-0.9);
   glVertex2f(-0.7,-0.9);
   glVertex2f(-0.65,-0.78);
   glVertex2f(-0.71,-0.81);          //grass
   glVertex2f(-0.75,-0.75);
   glVertex2f(-0.79,-0.81);
   glVertex2f(-0.84,-0.78);
   glEnd();


   glLoadIdentity();
   glPushMatrix();
   glTranslatef(position2,0.0, 0.0f);
    int i;
                        GLfloat x=-.6f; GLfloat y=.94f; GLfloat radius =.1f;
                        int triangleAmount = 20;
                       glColor3ub(211, 211, 211);
                        GLfloat twicePi = 2.0f * PI;
                        glBegin(GL_TRIANGLE_FAN);                                   //CLOUD
                            glVertex2f(x, y);
                        for(i = 0; i <= triangleAmount;i++) {
                        glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount))
                            );
                                        }

    glEnd();

                            x=-.5; y=0.97f; radius = 0.1f;                 //clouds
                            triangleAmount = 90;
                            glColor3ub(211, 211, 211);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

                            x=-.7; y=0.97f; radius = 0.1f;                 //clouds
                            triangleAmount = 90;
                            glColor3ub(211, 211, 211);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();
        glPopMatrix();

   glLoadIdentity();
   glPushMatrix();
   glTranslatef(position3,0.0, 0.0f);

        x=.6; y=-0.18f; radius = 0.02f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

         x=.75; y=-0.18f; radius = 0.02f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //1stwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();
        glPopMatrix();

         glLoadIdentity();
   glPushMatrix();
   glTranslatef(position4,0.0, 0.0f);

        x=-.51; y=-0.15f; radius = 0.016f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //2mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=-.43; y=-0.15f; radius = 0.016f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //2mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();
        glPopMatrix();


                 glLoadIdentity();
   glPushMatrix();
   glTranslatef(position5,0.0, 0.0f);
                x=-0.6; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //3mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=-0.59; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //3mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=-0.35; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //3mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        glPopMatrix();


         glLoadIdentity();
   glPushMatrix();
   glTranslatef(position6,0.0, 0.0f);

        x=0.34; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //4mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=0.44; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //4mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();
        glPopMatrix();


         glBegin(GL_POLYGON);
   glColor3ub(23,124,139);
   glVertex2f(-1,-1);
   glVertex2f(-0.65,-1);                //building 1 according to left
   glVertex2f(-0.65,-0.2);
   glVertex2f(-1,-0.2);
   glEnd();

   //windowss

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.95,-0.25);
   glVertex2f(-0.95,-0.35);
   glVertex2f(-0.85,-0.35);
   glVertex2f(-.85,-0.25);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.8,-0.25);
   glVertex2f(-0.8,-0.35);
   glVertex2f(-0.7,-0.35);
   glVertex2f(-.7,-0.25);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.8,-0.4);
   glVertex2f(-0.8,-0.5);
   glVertex2f(-0.7,-0.5);
   glVertex2f(-.7,-0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.95,-0.4);
   glVertex2f(-0.95,-0.5);
   glVertex2f(-0.85,-0.5);
   glVertex2f(-.85,-0.4);
   glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.95,-0.55);
   glVertex2f(-0.95,-0.65);
   glVertex2f(-0.85,-0.65);
   glVertex2f(-.85,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.8,-0.55);
   glVertex2f(-0.8,-0.65);
   glVertex2f(-0.7,-0.65);
   glVertex2f(-.7,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.95,-0.7);
   glVertex2f(-0.95,-0.8);
   glVertex2f(-0.85,-0.8);
   glVertex2f(-.85,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.8,-0.7);
   glVertex2f(-0.8,-0.8);
   glVertex2f(-0.7,-0.8);
   glVertex2f(-.7,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.95,-0.85);
   glVertex2f(-0.95,-0.95);
   glVertex2f(-0.85,-0.95);
   glVertex2f(-.85,-0.85);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.8,-0.85);
   glVertex2f(-0.8,-0.95);
   glVertex2f(-0.7,-0.95);
   glVertex2f(-.7,-0.85);
   glEnd();

            glBegin(GL_POLYGON);
   glColor3ub(0,100,53);
   glVertex2f(-0.65,-1);
   glVertex2f(-0.3,-1);                //building 2 according to left
   glVertex2f(-0.3,-0.35);
   glVertex2f(-0.65,-0.35);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.6,-0.4);
   glVertex2f(-0.6,-0.5);
   glVertex2f(-0.5,-0.5);
   glVertex2f(-.5,-0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.45,-0.4);
   glVertex2f(-0.45,-0.5);
   glVertex2f(-0.35,-0.5);
   glVertex2f(-.35,-0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.6,-0.55);
   glVertex2f(-0.6,-0.65);
   glVertex2f(-0.5,-0.65);
   glVertex2f(-.5,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.45,-0.55);
   glVertex2f(-0.45,-0.65);
   glVertex2f(-0.35,-0.65);
   glVertex2f(-.35,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.6,-0.7);
   glVertex2f(-0.6,-0.8);
   glVertex2f(-0.5,-0.8);
   glVertex2f(-.5,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.45,-0.7);
   glVertex2f(-0.45,-0.8);
   glVertex2f(-0.35,-0.8);
   glVertex2f(-.35,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.6,-0.85);
   glVertex2f(-0.6,-0.95);
   glVertex2f(-0.5,-0.95);
   glVertex2f(-.5,-0.85);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.45,-0.85);
   glVertex2f(-0.45,-0.95);
   glVertex2f(-0.35,-0.95);
   glVertex2f(-.35,-0.85);
   glEnd();


glutSwapBuffers();

   glFlush();
}

void display_night() {
     glClearColor(0.0f, 0.0f, 0.0f, 0.2f);
   glClear(GL_COLOR_BUFFER_BIT);



   glBegin(GL_POLYGON);
   glColor3ub(70,100,53);
   glVertex2f(-1,-1);
   glVertex2f(1,-1);                //grasss
   glVertex2f(1,-0.6);
   glVertex2f(-1,-0.6);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(72,75,70);
   glVertex2f(-1,-0.6);             //road
   glVertex2f(1,-0.6);
   glVertex2f(1,0.1);
   glVertex2f(-1,0.1);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.9,-0.3);
   glVertex2f(-0.7,-0.3);
   glVertex2f(-0.7,-0.27);          //divider
   glVertex2f(-0.9,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.5,-0.3);
   glVertex2f(-0.3,-0.3);
   glVertex2f(-0.3,-0.27);          //divider
   glVertex2f(-0.5,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.1,-0.3);
   glVertex2f(0.1,-0.3);
   glVertex2f(0.1,-0.27);          //divider
   glVertex2f(-0.1,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.3,-0.3);
   glVertex2f(0.5,-0.3);
   glVertex2f(0.5,-0.27);          //divider
   glVertex2f(0.3,-0.27);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.7,-0.3);
   glVertex2f(0.9,-0.3);
   glVertex2f(0.9,-0.27);          //divider
   glVertex2f(0.7,-0.27);
   glEnd();



   glBegin(GL_POLYGON);
   glColor3ub(53,50,100);
   glVertex2f(-1,0.1);
   glVertex2f(1,0.1);
   glVertex2f(1,1);          //sea
   glVertex2f(-1,1);
   glEnd();


   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.9,0.1);
   glVertex2f(-0.87,0.1);
   glVertex2f(-0.87,0.23);          //road er upor
   glVertex2f(-0.9,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.6,0.1);
   glVertex2f(-0.57,0.1);
   glVertex2f(-0.57,0.23);          //road er upor
   glVertex2f(-0.6,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-0.3,0.1);
   glVertex2f(-0.27,0.1);
   glVertex2f(-0.27,0.23);          //road er upor
   glVertex2f(-0.3,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.0,0.1);
   glVertex2f(0.03,0.1);
   glVertex2f(0.03,0.23);          //road er upor
   glVertex2f(0.0,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.3,0.1);
   glVertex2f(0.33,0.1);
   glVertex2f(0.33,0.23);          //road er upor
   glVertex2f(0.3,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.6,0.1);
   glVertex2f(0.63,0.1);
   glVertex2f(0.63,0.23);          //road er upor
   glVertex2f(0.6,0.23);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(0.9,0.1);
   glVertex2f(0.93,0.1);
   glVertex2f(0.93,0.23);          //road er upor
   glVertex2f(0.9,0.23);
   glEnd();

   glLineWidth(2.5);
   glColor3ub(122, 51, 33);
   glBegin(GL_LINES);
   glVertex2f(-1, 0.2);         //dori
   glVertex2f(1, 0.2);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(0,0,0);
   glVertex2f(-1,0.7);
   glVertex2f(1,0.7);
   glVertex2f(1,1);          //sky
   glVertex2f(-1,1);
   glEnd();

   //ship
   glLoadIdentity();
   glPushMatrix();
   glTranslatef(position,0.0, 0.0f);
   glBegin(GL_POLYGON);
   glColor3ub(9,36,47);
   glVertex2f(-0.8,0.3);
   glVertex2f(-0.3,0.3);
   glVertex2f(-0.23,0.37);
   glVertex2f(-0.8,0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(55,57,58);
   glVertex2f(-0.6,0.37);
   glVertex2f(-0.8,0.37);
   glVertex2f(-0.8,0.48);
   glVertex2f(-0.68,0.48);
   glVertex2f(-0.65,0.45);
   glVertex2f(-0.6,0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(55,57,58);
   glVertex2f(-0.6,0.37);
   glVertex2f(-0.23,0.37);
   glVertex2f(-0.2,0.4);
   glVertex2f(-0.6,0.4);
   glEnd();

  glBegin(GL_POLYGON);
   glColor3ub(9,36,47);
   glVertex2f(-0.2,0.4);
   glVertex2f(-0.1,0.5);
   glVertex2f(-0.3,0.5);
   glVertex2f(-0.35,0.44);
   glVertex2f(-0.4,0.4);
   glEnd();

   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,255);
   glVertex2f(0.25,0.35);
   glVertex2f(-0.15,0.45);
   glVertex2f(0.25,.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(167,169,169);
   glVertex2f(-0.58,0.4);
   glVertex2f(-0.53,0.4);
   glVertex2f(-0.53,0.53);
   glVertex2f(-0.58,0.53);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(167,169,169);
   glVertex2f(-0.68,0.48);
   glVertex2f(-0.68,0.63);
   glVertex2f(-0.72,0.63);
   glVertex2f(-0.73,0.61);
   glVertex2f(-0.73,0.59);
   glVertex2f(-0.77,0.59);
   glVertex2f(-0.77,0.48);

   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(55,57,58);
   glVertex2f(-0.76,0.59);
   glVertex2f(-0.76,0.68);
   glVertex2f(-0.725,0.68);
   glVertex2f(-0.725,0.62);
   glVertex2f(-0.73,0.61);;
   glVertex2f(-0.73,0.59);
   glEnd();

   glLineWidth(2.2);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.12, 0.5);         //dori
   glVertex2f(-0.12, 0.535);
   glEnd();

    glLineWidth(2.2);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.12, 0.535);
   glVertex2f(-0.27,0.535);
   glVertex2f(-0.27,0.5);
   glEnd();

   glLineWidth(2.2);
   glColor3ub(0,0,0);
   glBegin(GL_LINES);
   glVertex2f(-0.27,0.535);
   glVertex2f(-0.29,0.5);
   glEnd();


   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.59);
   glVertex2f(-0.72,0.59);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.57);
   glVertex2f(-0.72,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.55);
   glVertex2f(-0.72,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.53);
   glVertex2f(-0.72,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.712,0.51);
   glVertex2f(-0.72,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.59);
   glVertex2f(-0.7,0.59);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.57);
   glVertex2f(-0.7,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.55);
   glVertex2f(-0.7,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.53);
   glVertex2f(-0.7,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.692,0.51);
   glVertex2f(-0.7,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.51);
   glVertex2f(-0.736,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.53);
   glVertex2f(-0.736,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.55);
   glVertex2f(-0.736,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.73,0.57);
   glVertex2f(-0.736,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.51);
   glVertex2f(-0.764,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.53);
   glVertex2f(-0.764,0.53);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.55);
   glVertex2f(-0.764,0.55);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.755,0.57);
   glVertex2f(-0.764,0.57);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.51);
   glVertex2f(-0.545,0.51);
   glEnd();



   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.49);
   glVertex2f(-0.545,0.49);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.47);
   glVertex2f(-0.545,0.47);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.45);
   glVertex2f(-0.545,0.45);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.43);
   glVertex2f(-0.545,0.43);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.536,0.41);
   glVertex2f(-0.545,0.41);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.51);
   glVertex2f(-0.57,0.51);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.49);
   glVertex2f(-0.57,0.49);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.47);
   glVertex2f(-0.57,0.47);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.45);
   glVertex2f(-0.57,0.45);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.43);
   glVertex2f(-0.57,0.43);
   glEnd();

   glLineWidth(3.8);
   glColor3ub(255,255,255);
   glBegin(GL_LINES);
   glVertex2f(-0.56,0.41);
   glVertex2f(-0.57,0.41);
   glEnd();
   glPopMatrix();
//end ship

   glLoadIdentity();
   glPushMatrix();
   glTranslatef(position3,0.0, 0.0f);

   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,255);
   glVertex2f(0.60,-0.14);
   glVertex2f(0.41,-0.18);
   glVertex2f(0.41,-.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3ub(46,11,85);
   glVertex2f(0.55,-0.18);                  //car
   glVertex2f(0.55,-0.1);
   glVertex2f(0.6,-0.06);
   glVertex2f(0.8,-0.06);
   glVertex2f(0.8,-0.18);
   glEnd();



   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.569,-0.105);
   glVertex2f(0.63,-0.105);     //windshelid
   glVertex2f(0.63,-0.07);
   glVertex2f(0.61,-0.07);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.65,-0.105);
   glVertex2f(0.68,-0.105);     //windshelid
   glVertex2f(0.68,-0.07);
   glVertex2f(0.65,-0.07);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.7,-0.105);
   glVertex2f(0.73,-0.105);     //windshelid
   glVertex2f(0.73,-0.07);
   glVertex2f(0.7,-0.07);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.75,-0.105);
   glVertex2f(0.78,-0.105);     //windshelid
   glVertex2f(0.78,-0.07);
   glVertex2f(0.75,-0.07);
   glEnd();
   glPopMatrix();


    glLoadIdentity();
   glPushMatrix();
   glTranslatef(position4,0.0, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,255);
   glVertex2f(-0.50,-0.125);
   glVertex2f(-0.7,-0.15);
   glVertex2f(-0.7,-.1);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3ub(82,5,18);
   glVertex2f(-0.55,-0.15);
   glVertex2f(-0.4,-0.15);     //car2
   glVertex2f(-0.4,-0.1);
   glVertex2f(-0.41,-0.07);
   glVertex2f(-0.5,-0.07);
   glVertex2f(-0.53,-0.1);
   glVertex2f(-0.55,-0.1);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.515,-0.1);
   glVertex2f(-0.47,-0.1);     //windshelid
   glVertex2f(-0.47,-0.08);
   glVertex2f(-0.50,-0.08);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.45,-0.1);
   glVertex2f(-0.42,-0.1);     //windshelid
   glVertex2f(-0.42,-0.08);
   glVertex2f(-0.45,-0.08);
   glEnd();

   glPopMatrix();

    glLoadIdentity();
   glPushMatrix();
   glTranslatef(position5,0.0, 0.0f);
   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,255);
   glVertex2f(-0.35,-0.435);
   glVertex2f(-0.2,-0.5);
   glVertex2f(-0.2,-.4);
   glEnd();
   glBegin(GL_POLYGON);
   glColor3ub(30,95,50);
   glVertex2f(-0.65,-0.5);                  //car3
   glVertex2f(-0.3,-0.5);
   glVertex2f(-0.3,-0.42);
   glVertex2f(-0.34,-0.35);
   glVertex2f(-0.65,-0.35);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.4,-0.43);
   glVertex2f(-0.312,-0.43);     //windshelid
   glVertex2f(-0.34,-0.37);
   glVertex2f(-0.4,-0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.47,-0.43);
   glVertex2f(-0.42,-0.43);     //windshelid
   glVertex2f(-0.42,-0.37);
   glVertex2f(-0.47,-0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.54,-0.43);
   glVertex2f(-0.49,-0.43);     //windshelid
   glVertex2f(-0.49,-0.37);
   glVertex2f(-0.54,-0.37);
   glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.61,-0.43);
   glVertex2f(-0.56,-0.43);     //windshelid
   glVertex2f(-0.56,-0.37);
   glVertex2f(-0.61,-0.37);
   glEnd();
   glPopMatrix();

    glLoadIdentity();
   glPushMatrix();
   glTranslatef(position6,0.0, 0.0f);

   glBegin(GL_TRIANGLES);
   glColor3ub(255,255,255);
   glVertex2f(0.4,-0.455);
   glVertex2f(0.7,-0.5);
   glVertex2f(0.7,-.41);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(91,43,37);
   glVertex2f(0.3,-0.5);                  //car4
   glVertex2f(0.48,-0.5);
   glVertex2f(0.48,-0.41);
   glVertex2f(0.45,-0.41);
   glVertex2f(0.42,-0.37);
   glVertex2f(0.3,-0.37);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.38,-0.38);
   glVertex2f(0.38,-0.42);     //windshelid
   glVertex2f(0.445,-0.42);
   glVertex2f(0.415,-0.38);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(0.32,-0.38);
   glVertex2f(0.32,-0.42);     //windshelid
   glVertex2f(0.36,-0.42);
   glVertex2f(0.36,-0.38);
   glEnd();
   glPopMatrix();



   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(0.7,-0.9);
   glVertex2f(0.8,-0.9);
   glVertex2f(0.85,-0.78);
   glVertex2f(0.79,-0.81);          //grass
   glVertex2f(0.75,-0.75);
   glVertex2f(0.71,-0.81);
   glVertex2f(0.66,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(0.4,-0.9);
   glVertex2f(0.5,-0.9);
   glVertex2f(0.55,-0.78);
   glVertex2f(0.49,-0.81);          //grass
   glVertex2f(0.45,-0.75);
   glVertex2f(0.41,-0.81);
   glVertex2f(0.36,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(0.1,-0.9);
   glVertex2f(0.2,-0.9);
   glVertex2f(0.25,-0.78);
   glVertex2f(0.19,-0.81);          //grass
   glVertex2f(0.15,-0.75);
   glVertex2f(0.11,-0.81);
   glVertex2f(0.06,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(-0.2,-0.9);
   glVertex2f(-0.1,-0.9);
   glVertex2f(-0.05,-0.78);
   glVertex2f(-0.11,-0.81);          //grass
   glVertex2f(-0.15,-0.75);
   glVertex2f(-0.19,-0.81);
   glVertex2f(-0.24,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(-0.5,-0.9);
   glVertex2f(-0.4,-0.9);
   glVertex2f(-0.35,-0.78);
   glVertex2f(-0.41,-0.81);          //grass
   glVertex2f(-0.45,-0.75);
   glVertex2f(-0.49,-0.81);
   glVertex2f(-0.54,-0.78);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(5,64,9);
   glVertex2f(-0.8,-0.9);
   glVertex2f(-0.7,-0.9);
   glVertex2f(-0.65,-0.78);
   glVertex2f(-0.71,-0.81);          //grass
   glVertex2f(-0.75,-0.75);
   glVertex2f(-0.79,-0.81);
   glVertex2f(-0.84,-0.78);
   glEnd();





   glLoadIdentity();
   glPushMatrix();
   glTranslatef(position3,0.0, 0.0f);

     int i;
       GLfloat x=.6; GLfloat y=-0.18f;GLfloat radius = 0.02f;
                           int triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                           GLfloat twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

         x=.75; y=-0.18f; radius = 0.02f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //1stwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();
        glPopMatrix();

         glLoadIdentity();
   glPushMatrix();
   glTranslatef(position4,0.0, 0.0f);

        x=-.51; y=-0.15f; radius = 0.016f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //2mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=-.43; y=-0.15f; radius = 0.016f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //2mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();
        glPopMatrix();


                 glLoadIdentity();
   glPushMatrix();
   glTranslatef(position5,0.0, 0.0f);
                x=-0.6; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //3mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=-0.59; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //3mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=-0.35; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //3mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        glPopMatrix();


         glLoadIdentity();
   glPushMatrix();
   glTranslatef(position6,0.0, 0.0f);

        x=0.34; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //4mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();

        x=0.44; y=-0.5f; radius = 0.024f;
                            triangleAmount = 90;
                            glColor3ub(0, 0, 0);
                            twicePi = 2.0f * PI;
                            glBegin(GL_TRIANGLE_FAN);               //4mdwheell
                            glVertex2f(x, y);
                            for(i = 0; i <= triangleAmount;i++) {
                            glVertex2f(
                            x + (radius * cos(i *  twicePi / triangleAmount)),
                            y + (radius * sin(i * twicePi / triangleAmount))
                                );
                            }
        glEnd();
        glPopMatrix();

        glBegin(GL_POLYGON);
   glColor3ub(16,81,91);
   glVertex2f(-1,-1);
   glVertex2f(-0.65,-1);                //building 1 according to left
   glVertex2f(-0.65,-0.2);
   glVertex2f(-1,-0.2);
   glEnd();

   //windowss

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.95,-0.25);
   glVertex2f(-0.95,-0.35);
   glVertex2f(-0.85,-0.35);
   glVertex2f(-.85,-0.25);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2f(-0.8,-0.25);
   glVertex2f(-0.8,-0.35);
   glVertex2f(-0.7,-0.35);
   glVertex2f(-.7,-0.25);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.8,-0.4);
   glVertex2f(-0.8,-0.5);
   glVertex2f(-0.7,-0.5);
   glVertex2f(-.7,-0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.95,-0.4);
   glVertex2f(-0.95,-0.5);
   glVertex2f(-0.85,-0.5);
   glVertex2f(-.85,-0.4);
   glEnd();

    glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.95,-0.55);
   glVertex2f(-0.95,-0.65);
   glVertex2f(-0.85,-0.65);
   glVertex2f(-.85,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.8,-0.55);
   glVertex2f(-0.8,-0.65);
   glVertex2f(-0.7,-0.65);
   glVertex2f(-.7,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.95,-0.7);
   glVertex2f(-0.95,-0.8);
   glVertex2f(-0.85,-0.8);
   glVertex2f(-.85,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.8,-0.7);
   glVertex2f(-0.8,-0.8);
   glVertex2f(-0.7,-0.8);
   glVertex2f(-.7,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.95,-0.85);
   glVertex2f(-0.95,-0.95);
   glVertex2f(-0.85,-0.95);
   glVertex2f(-.85,-0.85);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.8,-0.85);
   glVertex2f(-0.8,-0.95);
   glVertex2f(-0.7,-0.95);
   glVertex2f(-.7,-0.85);
   glEnd();

            glBegin(GL_POLYGON);
   glColor3ub(6,64,11);
   glVertex2f(-0.65,-1);
   glVertex2f(-0.3,-1);                //building 2 according to left
   glVertex2f(-0.3,-0.35);
   glVertex2f(-0.65,-0.35);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.6,-0.4);
   glVertex2f(-0.6,-0.5);
   glVertex2f(-0.5,-0.5);
   glVertex2f(-.5,-0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.45,-0.4);
   glVertex2f(-0.45,-0.5);
   glVertex2f(-0.35,-0.5);
   glVertex2f(-.35,-0.4);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.6,-0.55);
   glVertex2f(-0.6,-0.65);
   glVertex2f(-0.5,-0.65);
   glVertex2f(-.5,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.45,-0.55);
   glVertex2f(-0.45,-0.65);
   glVertex2f(-0.35,-0.65);
   glVertex2f(-.35,-0.55);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.6,-0.7);
   glVertex2f(-0.6,-0.8);
   glVertex2f(-0.5,-0.8);
   glVertex2f(-.5,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.45,-0.7);
   glVertex2f(-0.45,-0.8);
   glVertex2f(-0.35,-0.8);
   glVertex2f(-.35,-0.7);
   glEnd();

   glBegin(GL_POLYGON);
   glColor3ub(255,255,255);
   glVertex2f(-0.6,-0.85);
   glVertex2f(-0.6,-0.95);
   glVertex2f(-0.5,-0.95);
   glVertex2f(-.5,-0.85);
   glEnd();

   glBegin(GL_POLYGON);
  glColor3ub(255,255,255);
   glVertex2f(-0.45,-0.85);
   glVertex2f(-0.45,-0.95);
   glVertex2f(-0.35,-0.95);
   glVertex2f(-.35,-0.85);
   glEnd();


glutSwapBuffers();

   glFlush();
}


void handleKeypress(unsigned char key, int x, int y){
switch (key) {

case 'n':
    glutDisplayFunc(display_night);
    break;
case 'd':
    glutDisplayFunc(display_day);
    break;


glutPostRedisplay();


	}
}
int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Translation Animation");
   glutDisplayFunc(display_night);
   glutDisplayFunc(display_day);
   initGL();
   glutKeyboardFunc(handleKeypress);
   glutIdleFunc(Idle);

   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update2, 0);
   glutTimerFunc(100, update3, 0);
   glutTimerFunc(100, update4, 0);
   glutTimerFunc(100, update5, 0);
   glutTimerFunc(100, update6, 0);
   glutMainLoop();
   return 0;
}
