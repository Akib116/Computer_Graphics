
#include <windows.h>

#include <GL/glut.h>





void display() {

glClearColor(1.0f, 0.0f, 1.0f, 0.0f);

glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(7.5);



         glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.25,0.17);

    glVertex2f(0.20,0.20);

    glVertex2f(0.20,-0.20);

    glVertex2f(0.25,-0.16);

   glEnd();

            glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.20,-0.10);

    glVertex2f(0.0,0.03);

    glVertex2f(0.0,-0.05);

    glVertex2f(0.20,-0.20);

   glEnd();

            glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(0.20,0.20);

    glVertex2f(0.0,0.05);

    glVertex2f(0.00,-0.04);

    glVertex2f(0.20,0.10);

   glEnd();

            glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.15,0.10);

    glVertex2f(-0.15,-0.10);

    glVertex2f(-0.10,-0.15);

    glVertex2f(-0.10,0.15);

   glEnd();

               glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.10,0.15);

    glVertex2f(-0.10,0.05);

    glVertex2f(0.0,-0.05);

    glVertex2f(0.0,0.05);

   glEnd();

               glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f);

    glVertex2f(-0.10,-0.07);

    glVertex2f(-0.10,-0.15);

    glVertex2f(0.0,-0.05);

    glVertex2f(0.0,0.01);

   glEnd();







glFlush();

}





int main(int argc, char argv) {

glutInit(&argc, argv);

glutInitDisplayMode(GLUT_RGB);

glutCreateWindow ("Lab exam");
glutInitWindowSize(200, 100);

glutInitWindowSize(1200, 1200);

glutDisplayFunc(display);

glutMainLoop();

return 0;
}
