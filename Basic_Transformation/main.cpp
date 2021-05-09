#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>

using namespace std;

int pntX1,pntY1,c=0,edge,transX,transY;
double scaleX,scaleY;
vector<int> pntX;
vector<int> pntY;

double round(double x){
return floor(x+.5);
}
void drawPolygon(){
glBegin(GL_POLYGON);
glColor3f(0.0,0.0,0.0);
for(int i=0;i<edge;i++){
    glVertex2i(pntX[i],pntY[i]);
}
glEnd();
}
void drawPolygonTrans(int x,int y){
glBegin(GL_POLYGON);
glColor3f(1.0,1.0,0.0);
for(int i=0;i<edge;i++){
    glVertex2i(pntX[i]+x,pntY[i]+y);
}
glEnd();
}
void drawPolygonScale(double x,double y){
glBegin(GL_POLYGON);
glColor3f(0.0,1.0,0.0);
for(int i=0;i<edge;i++){
    glVertex2i(round(pntX[i]*x),round(pntY[i]*y));
}
glEnd();
}


void display (void)
{

    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    if(c==1){
        drawPolygon();
        drawPolygonTrans(transX,transY);
    }
    if(c==2){
        drawPolygon();
        drawPolygonScale(scaleX,scaleY);
    }

    glFlush();

}

void init(void)
{
    glClearColor (1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}



int main(int argc, char** argv)
{
    cout<<("Enter your choice:\n\n\n1. Translation\n2. Scaling\n3. Exit\n");
    cin>>c;
    if(c==3){
        return 0;
    }
    cout<<"\nfor polygon: \n";
    cout<<"Enter no of edges: \n";
    cin>>edge;
for(int i=0;i<edge;i++){
        cout<<"enter co-ordinate for vertex"<<i+1<<": ";
        cin>>pntX1>>pntY1;
        pntX.push_back(pntX1);
        pntY.push_back(pntY1);
    }
    if(c==1){
        cout<<"Enter translation factor for x, y: ";
        cin>>transX>>transY;
    }
    if(c==2){
        cout<<"Enter Scaling factor for x, y: ";
        cin>>scaleX>>scaleY;
    }

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (500, 500);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("2d ");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

}
