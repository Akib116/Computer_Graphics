/*
* GL02Primitive.cpp: Vertex, Primitive and Color
* Draw Simple 2D colored Shapes: quad, triangle and polygon.
*/
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.0f, 0.0f); // Red
      glVertex2f(0.0f, 0.9f);
	glVertex2f(0.9f, 0.9f);
	glVertex2f(0.9f, 0.8f);
	glVertex2f(0.0f, 0.8f);

	glColor3f(1.0f, 0.6f, 0.0f); // Orange
	glVertex2f(0.9f, 0.8f);
	glVertex2f(0.0f, 0.8f);
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.9f, 0.7f);

	glColor3f(1.0f, 0.9f, 0.0f); //yellow
	glVertex2f(0.0f, 0.7f);
	glVertex2f(0.9f, 0.7f);
	glVertex2f(0.9f, 0.6f);
	glVertex2f(0.0f, 0.6f);

	glColor3f(0.0f, 1.0f, 0.0f); //green
	glVertex2f(0.9f, 0.6f);
	glVertex2f(0.0f, 0.6f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.9f, 0.5f);

	glColor3f(0.0f, 0.0f, 1.0f); //blue
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.9f, 0.5f);
	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.0f, 0.4f);

	glColor3f(0.2f, 0.0f, 0.5f); //indigo
	glVertex2f(0.9f, 0.4f);
	glVertex2f(0.0f, 0.4f);
	glVertex2f(0.0f, 0.3f);
	glVertex2f(0.9f, 0.3f);

	glColor3f(0.0f, 0.4f, 0.5f); //violet
    	glVertex2f(0.0f, 0.3f);
	glVertex2f(0.9f, 0.3f);
	glVertex2f(0.9f, 0.2f);
	glVertex2f(0.0f, 0.2f);


	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Rainbow Flag");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
