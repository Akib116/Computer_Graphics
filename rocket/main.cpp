#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat bullet_position = 0.0f;
GLfloat bullet_speed = 0.1f;

void update(int value) {
    if(position < -2.0)
    position = 2.0f;
    position -= speed;
    if(bullet_position > 1.0)
    bullet_position = -1.2f;
    bullet_position +=speed;
    glutPostRedisplay();
    glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}
void handleMouse(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON)
    {
        if (state == GLUT_DOWN)
        {
            glTranslatef(0.0f,bullet_position, 0.0f);
        }
    }
    glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
                   case 'a':
                   speed = 0.0f;
                   break;
                   case 'w':
                   speed += 0.1f;
                   break;

                   glutPostRedisplay();

    }
}


void display() {

   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();

   glPushMatrix();
   glBegin(GL_QUADS);// rocket body
      glColor3f(0.3f, 0.9f, 0.9f);
      glVertex2f(-0.1f, -0.1f);
      glVertex2f( -0.1f, -0.8f);
      glVertex2f( 0.1f,  -0.8f);
      glVertex2f(0.1f,  -0.1f);
   glEnd();
   glBegin(GL_TRIANGLES);// rocket top
   glColor3f(0.4f, 0.4f, 1.0f);
   glVertex2f(-0.1f, -0.1f);
   glVertex2f(0.1f,  -0.1f);
   glVertex2f(0.0f,  0.1f);
   glEnd();

   glBegin(GL_TRIANGLES);// rocket wing left
   glColor3f(0.4f, 0.4f, 1.0f);
   glVertex2f(-0.1f, -0.4f);
   glVertex2f(-0.2f,  -0.8f);
   glVertex2f(-0.1f,  -0.8f);
   glEnd();
   glBegin(GL_TRIANGLES);// rocket wing right
   glColor3f(0.4f, 0.4f, 1.0f);
   glVertex2f(0.1f, -0.4f);
   glVertex2f(0.2f, -0.8f);
   glVertex2f(0.1f, -0.8f);
   glEnd();



   glPopMatrix();
   glTranslatef(0.0f,position, 0.0f);
   glBegin(GL_TRIANGLES);// enemy 1
   glColor3f(1.0f, 1.0f, 0.0f);
   glVertex2f(-0.9f, 0.7f);
   glVertex2f(-0.7f, 0.7f);
   glVertex2f(-0.8f, 0.9f);
   glEnd();
   glBegin(GL_TRIANGLES);// enemy 2
   glColor3f(1.0f, 0.0f, 1.0f);
   glVertex2f(-0.3f, 0.7f);
   glVertex2f(-0.1f, 0.7f);
   glVertex2f(-0.2f, 0.9f);
   glEnd();
   glBegin(GL_TRIANGLES);// enemy 3
   glColor3f(0.0f, 1.0f, 0.4f);
   glVertex2f(0.9f, 0.7f);
   glVertex2f(0.7f, 0.7f);
   glVertex2f(0.8f, 0.9f);
   glEnd();

   glPushMatrix();
   glTranslatef(0.0f,bullet_position, 0.0f);
   glBegin(GL_QUADS);// bullet body
   glColor3f(0.6f, 0.4f, 0.0f);
      glVertex2f(-0.02f,  0.1f);
      glVertex2f(0.02f,  0.1f);
      glVertex2f(0.02f,  0.17f);
      glVertex2f(-0.02f,  0.17f);
      glEnd();
      glPopMatrix();
      glFlush();
      glFlush();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(800, 600);
   glutInitWindowPosition(100, 150);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
