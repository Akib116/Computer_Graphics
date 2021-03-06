#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin


    //I
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.06,0.08);
    glVertex2f(-0.06,-0.06);
    glVertex2f(-0.02,-0.06);
    glVertex2f(-0.02,0.08);

    glEnd();

    //U
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.06,0.08);
    glVertex2f(0.02,0.08);
    glVertex2f(0.02,-0.06);
    glVertex2f(0.06,-0.06);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.02,-0.06);
    glVertex2f(0.02,-0.02);
    glVertex2f(0.17,-0.02);
    glVertex2f(0.17,-0.06);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.17,-0.06);
    glVertex2f(0.13,-0.06);
    glVertex2f(0.13,0.08);
    glVertex2f(0.17,0.08);

    glEnd();

    //B
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.21,-0.06);
    glVertex2f(0.29,-0.06);
    glVertex2f(0.29,0.08);
    glVertex2f(0.21,0.08);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.24,0.06);
    glVertex2f(0.24,0.03);
    glVertex2f(0.27,0.03);
    glVertex2f(0.27,0.06);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.27,-0.03);
    glVertex2f(0.27,0.0);
    glVertex2f(0.24,0.0);
    glVertex2f(0.24,-0.03);

    glEnd();

    //A
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.13,0.08);
    glVertex2f(-0.17,0.08);
    glVertex2f(-0.14,-0.06);
    glVertex2f(-0.10,-0.06);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.17,0.08);
    glVertex2f(-0.21,0.08);
    glVertex2f(-0.25,-0.06);
    glVertex2f(-0.21,-0.06);

    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);              // Initialize GLUT
	glutCreateWindow("Text AIUB"); // Create a window with the given title
	glutInitWindowSize(200, 100);
	glutInitWindowSize(1200, 1200);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
