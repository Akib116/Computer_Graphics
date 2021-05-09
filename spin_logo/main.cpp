#include<cstdio>
#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

static GLfloat spin = 0.0;
static GLfloat spin_speed = 0.3;
float spin_x = 0;
float spin_y = 1;
float spin_z = 0;

void setSpin(float x, float y, float z)
{
spin_x = x;
spin_y = y;
spin_z = z;
}


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);
   glLineWidth(1.5);


    glPushMatrix();
    glRotatef(spin,spin_x,spin_y,spin_z);
    glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( 0.0f, 0.0f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.1f);
      glVertex2f( 0.05f,  0.1f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( 0.0f, 0.0f);
    glEnd();

    glScalef(0.4f,0.4f,0.0f);
    glTranslatef(1.7f,1.3f,0.0f);
    glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( 0.0f, 0.0f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.1f);
      glVertex2f( 0.05f,  0.1f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( 0.0f, 0.0f);
    glEnd();
    glTranslatef(-3.4f,0.0f,0.0f);
    glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( 0.0f, 0.0f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.1f);
      glVertex2f( 0.05f,  0.1f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( 0.0f, 0.0f);
    glEnd();
    glTranslatef(0.0f,-3.1f,0.0f);
    glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( 0.0f, 0.0f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.1f);
      glVertex2f( 0.05f,  0.1f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( 0.0f, 0.0f);
    glEnd();
    glTranslatef(3.4f,0.0f,0.0f);
    glBegin(GL_LINES);
      glColor3f(1.0f, 1.0f, 1.0f);
      glVertex2f( 0.0f, 0.0f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.05f);
      glVertex2f( 0.05f, 0.1f);
      glVertex2f( 0.05f,  0.1f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.1f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.025f,  0.15f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.075f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.125f,  0.25f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.15f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.030f,  0.3f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.085f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.175f,  0.385f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.205f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.05f,  0.435f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( 0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.15f,  0.5f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.05f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.205f,  0.435f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.175f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.085f,  0.385f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.030f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.15f,  0.3f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.125f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.075f,  0.25f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.025f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.1f,  0.15f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f,  0.1f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( -0.05f, 0.05f);
      glVertex2f( 0.0f, 0.0f);
    glEnd();
glPopMatrix();
   glFlush();
}
void spinDisplay(void)
{
spin=spin+spin_speed;
if(spin>360.0)
{
spin=spin-360.0;
}
glutPostRedisplay();
}

void spinDisplayReverse(void)
{
spin=spin-spin_speed;
if(spin<360.0)
{
spin=spin+360.0;
}
glutPostRedisplay();
}

void handleMouse(int button, int state, int x, int y)
{
if (button == GLUT_LEFT_BUTTON)
	{
    glutIdleFunc(spinDisplay);
    }
else if (button == GLUT_RIGHT_BUTTON)
	{
    glutIdleFunc(spinDisplayReverse);
    }

glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y) {

if(key=='x')
{
setSpin(1.0,0.0,0.0);
glutPostRedisplay();
}

else if(key=='y')
{
setSpin(0.0,1.0,0.0);
glutPostRedisplay();
}

else if(key=='z')
{
setSpin(0.0,0.0,1.0);
glutPostRedisplay();
}

}


int main(int argc, char** argv)
{

   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Spin logo");
   glutDisplayFunc(display);
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutMainLoop();
   return 0;
}
