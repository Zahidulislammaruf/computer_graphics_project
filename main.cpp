#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include<stdlib.h>
int windowWidth = 800;
int windowHeight = 600;
double  r=.2,s=.3;
int i;
static float	tx	=  0.0; //for car to right
static float	ta	=  0.0; //for boat to right
static float	tb	=  0.0; //for boat to left
static float	tc	=  0.0; //for cloud to right
static float	td	=  0.0; //for cloud to left

void circle0(int x,int y)
{
    float th;
    glBegin(GL_TRIANGLE_FAN);
    glColor3f (0.0, 0.0, 0.0);
    for(int i=0;i<360;i++)
    {
        th=i*3.142/180;
        glVertex2d(x+1.5*cos(th),y+1.5*sin(th));


    }

    glEnd();
}
void sun(int x,int y)
{
    float th;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(253,254,2);
    for(int i=0;i<360;i++)
    {
        th=i*3.142/180;
        glVertex2d(x+3.5*cos(th),y+3.5*sin(th));


    }

    glEnd();
}
void cloud (int x,int y)
{
    float th;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(255,255,255);
    for(int i=0;i<360;i++)
    {
        th=i*3.142/180;
        glVertex2d(x+2.5*cos(th),y+2.5*sin(th));


    }

    glEnd();
}
void pond (int x,int y)
{
    float th;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(51,178,255);
    for(int i=0;i<360;i++)
    {
        th=i*3.142/180;
        glVertex2d(x+12*cos(th),y+2.5*sin(th));


    }

    glEnd();
}

void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);

 glColor3f (1.0, 1.0, 1.0);



 glBegin(GL_QUADS);
 // road -----------------------------------
 glColor3ub (80.0, 85.0, 78.0);
 glVertex2d(0,4);
 glVertex2d(100,4);
 glVertex2d(100,15);
 glVertex2d(0,15);

 //sky------------------------------


  glColor3ub(152,222,245);
 glVertex2d(0,67);
 glVertex2d(100,70);
 glVertex2d(100,80);
 glVertex2d(0,80);


 //river------------------------------

  glColor3ub(51,178,255);
 glVertex2d(0,50);
 glVertex2d(100,53);
 glVertex2d(100,70);
 glVertex2d(0,67);

 glEnd();
 sun(90,75);
 // cloud-----------------------------
glPushMatrix();

 glTranslatef(tc,0,0);
  cloud(7,74);
  cloud(9,76);
  cloud(9,73);

  cloud(25,76);
  cloud(27,74);
  cloud(28,76);

glTranslatef(td,0,0);
  cloud(70,76);
  cloud(72,74);
  cloud(73,76);





 glPopMatrix();
 // Ship---------------------------

 glPushMatrix();
 glTranslatef(tb,0,0);
 glBegin(GL_QUADS);
 glColor3ub (32.0, 33.0, 36.0);
// body
 glVertex2d(20,60);
 glVertex2d(30,60);
 glVertex2d(30,62);
 glVertex2d(20,62);
 //upper box
 glColor3ub (207.0, 55.0, 0.0);
 glVertex2d(21,62);
 glVertex2d(29,62);
 glVertex2d(29,65);
 glVertex2d(21,65);
 glEnd();
 glBegin(GL_TRIANGLES);
 glColor3ub (32.0, 33.0, 36.0);
 glVertex2d(20,60);
 glVertex2d(15,65);
 glVertex2d(20,62);

 glVertex2d(30,60);
 glVertex2d(35,65);
 glVertex2d(30,62);
 glEnd();
 glPopMatrix();






 //2nd ship -----------------------------


  glPushMatrix();
 glTranslatef(ta,0,0);
 glBegin(GL_QUADS);
 glColor3ub (32.0, 33.0, 36.0);
// body
 glVertex2d(85,55);
 glVertex2d(95,55);
 glVertex2d(95,57);
 glVertex2d(85,57);
 //upper box
 glColor3ub (207.0, 55.0, 0.0);
 glVertex2d(86,57);
 glVertex2d(94,57);
 glVertex2d(94,60);
 glVertex2d(86,60);
 glEnd();
 glBegin(GL_TRIANGLES);
 glColor3ub (32.0, 33.0, 36.0);
 glVertex2d(85,55);
 glVertex2d(80,60);
 glVertex2d(85,57);

 glVertex2d(95,55);
 glVertex2d(100,60);
 glVertex2d(95,57);
 glEnd();
 glPopMatrix();




  glBegin(GL_QUADS);
 //grass--------------------------

 glColor3ub(0,230,0);
 glVertex2d(0,15);
 glVertex2d(100,15);
 glVertex2d(100,53);
 glVertex2d(0,50);

 // football Field---------------------------
 //main field
 glColor3ub(137,94,41);
 glVertex2d(45,35);
 glVertex2d(45,45);
 glVertex2d(65,45);
 glVertex2d(65,35);

 // d-box
 glColor3ub(17,9,41);
 glVertex2d(45,38);
 glVertex2d(45,42);
 glVertex2d(48,42);
 glVertex2d(48,38);

 glColor3ub(17,9,41);
 glVertex2d(62,38);
 glVertex2d(62,42);
 glVertex2d(65,42);
 glVertex2d(65,38);
 glEnd();

 glBegin(GL_LINES);
 glColor3ub(17,9,41);
 glVertex2d(55,35);
 glVertex2d(55,45);
 glEnd();
 circle0(55,40);
 pond(80,45);



 //tree---------------------------------------
 glBegin(GL_QUADS);
 glColor3ub(137,94,41);
 glVertex2d(6,20);
 glVertex2d(6,30);
 glVertex2d(9,30);
 glVertex2d(9,20);


 glVertex2d(15,22);
 glVertex2d(15,30);
 glVertex2d(17,30);
 glVertex2d(17,22);


 glEnd();

 glBegin(GL_TRIANGLES);
 glColor3ub(34,139,34);
 glVertex2d(4,29);
 glVertex2d(7.5,35);
 glVertex2d(11,29);

 glVertex2d(4,32);
 glVertex2d(7.5,37);
 glVertex2d(11,32);


 glVertex2d(13,28);
 glVertex2d(16,35);
 glVertex2d(18,28);

 glVertex2d(13,31);
 glVertex2d(16,37);
 glVertex2d(18,31);




 glEnd();



 // House 1 ----------------------
 //body

 glBegin(GL_QUADS);
 glColor3ub(190,118,34);
 glVertex2d(53,20);
 glVertex2d(70,20);
 glVertex2d(70,30);
 glVertex2d(53,30);

 //uperside
 glColor3ub(86,0,0);
 glVertex2d(51,30);
 glVertex2d(72,30);
 glVertex2d(69,34);
 glVertex2d(54,34);

 //door
 glColor3ub(0,94,93);
 glVertex2d(60,20);
 glVertex2d(63,20);
 glVertex2d(63,25);
 glVertex2d(60,25);

 //window 1
 glColor3ub(0,94,93);
 glVertex2d(55,26);
 glVertex2d(58,26);
 glVertex2d(58,28);
 glVertex2d(55,28);

 //window 2
 glColor3ub(0,94,93);
 glVertex2d(65,26);
 glVertex2d(68,26);
 glVertex2d(68,28);
 glVertex2d(65,28);


// House 2 ----------------------
 //body
 glColor3ub(190,118,34);
 glVertex2d(78,25);
 glVertex2d(95,25);
 glVertex2d(95,35);
 glVertex2d(78,35);

 //uperside
 glColor3ub(86,0,0);
 glVertex2d(76,35);
 glVertex2d(97,35);
 glVertex2d(94,39);
 glVertex2d(79,39);

 //door
 glColor3ub(0,94,93);
 glVertex2d(85,25);
 glVertex2d(88,25);
 glVertex2d(88,30);
 glVertex2d(85,30);

 //window 1
 glColor3ub(0,94,93);
 glVertex2d(80,31);
 glVertex2d(83,31);
 glVertex2d(83,33);
 glVertex2d(80,33);

 //window 2
 glColor3ub(0,94,93);
 glVertex2d(90,31);
 glVertex2d(93,31);
 glVertex2d(93,33);
 glVertex2d(90,33);

//house ----------------------------  end



 //Road-----------------------
 glColor3ub(167,167,167);
 glVertex2d(18,15);
 glVertex2d(31,15);
 glVertex2d(33,51);
 glVertex2d(22,50.5);

 //football field road--------------------
 glColor3ub(167,167,167);
 glVertex2d(32,35);
 glVertex2d(32,38);
 glVertex2d(45,38);
 glVertex2d(45,35);

 // house 2 Road
 glColor3ub(167,167,167);
 glVertex2d(83,15);
 glVertex2d(86,15);
 glVertex2d(88,25);
 glVertex2d(85,25);


 glEnd();




//car---------------------
  glPushMatrix();
glTranslatef(tx,0,0);
 glBegin(GL_POLYGON);
 glColor3ub (253.0, 154.0, 54.0);
 glVertex2d(12,6);
 glVertex2d(12,10);
 glVertex2d(15,10);
 glVertex2d(17,13);
 glVertex2d(27,13);
 glVertex2d(30,10);
 glVertex2d(34,10);
 glVertex2d(34,6);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0,0.0,0.0);

 glVertex2d(17,9);
 glVertex2d(17,12);
 glVertex2d(20,12);
 glVertex2d(20,9);


 glVertex2d(24,9);
 glVertex2d(24,12);
 glVertex2d(27,12);
 glVertex2d(27,9);


 glEnd();



 circle0(16,7);
 circle0(29,7);

 glPopMatrix();



glFlush();



}
void my_keyboard(unsigned char key, int x, int y)
{
	switch (key) {

		case 'd':
		case 'D':
			tx ++;
			ta -=0.3;
			tb +=0.2;
			tc +=0.05;
			td -=0.15;
            glutPostRedisplay();
            break;

		case 'a':
		case 'A':
			tx --;
			ta +=0.3;
			tb -=0.2;

            glutPostRedisplay();
            break;

	  default:
			break;
	}
}
void reshape(int width, int height) {
    windowWidth = width;
    windowHeight = height;
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 100, 0, 80);
    if(width != 900 || height != 900) {
        glutPositionWindow(100, 100);
        glutReshapeWindow(900, 900);
        glutPostRedisplay();
    }
    glMatrixMode(GL_MODELVIEW);

}



/*void init (void)
{

glClearColor (1.0, 1.0, 1.0, 0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100.0, 0.0, 80.0, -10.0, 10.0);
}
*/

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 900);
glutInitWindowPosition (100, 100);
glutCreateWindow ("A Village scenario");
//init ();
glutReshapeFunc(reshape);
glutDisplayFunc(display);
glutKeyboardFunc(my_keyboard);
glutMainLoop();
return 0;
}
