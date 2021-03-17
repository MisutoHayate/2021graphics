#include <GL/glut.h>
int N=0,vx[3000],vy[3000];
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_LINE_STRIP);
    for(int i=0;i<N;i++){
        glVertex2f((vx[i]-150)/150.0,-(vy[i]-150)/150.0);
    }
    glEnd();

    glutSwapBuffers();
}
void motion(int x,int y)
{
    vx[N]=x; vy[N]=y;
    N++;
    display();
}
int main(int argc, char ** argv)
{
    glutInit( &argc, argv );
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("08160280");

    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
