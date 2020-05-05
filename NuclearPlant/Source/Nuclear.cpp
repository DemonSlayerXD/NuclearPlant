#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<Windows.h>

float x,y,r1=80,r2=5,r3=27.5,angle, angle_radians;

void SteamGenerator()
{
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_LINE_LOOP);
	glVertex2i(25, 150);
	glVertex2i(25, 75);
	glVertex2i(75, 75);
	glVertex2i(75, 150);
	glEnd();

	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_LINES);
	glVertex2i(100, 100);
	glVertex2i(100, 170);
	glVertex2i(155, 100);
	glVertex2i(155, 170);
	glEnd();

	glBegin(GL_LINE_STRIP);
	for (angle = 0; angle <= 180; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 127.5 + r3 * (float)cos(angle_radians);
		y = 170 + r3 * (float)sin(angle_radians);
		glLineWidth(6.0);
		glVertex2f(x, y);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	for (angle = 180; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 127.5 + r3 * (float)cos(angle_radians);
		y = 100 + r3 * (float)sin(angle_radians);
		glLineWidth(6.0);
		glVertex2f(x, y);
	}
	glEnd();
}

void Core()
{
	glLineWidth(5.0);
	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_LINE_LOOP);
	glVertex2i(42, 105);

	glVertex2i(57, 105);
	glVertex2i(57, 120);
	glVertex2i(42, 120);
	glEnd();

	glBegin(GL_POLYGON);
	for (angle = 0; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 49 + r2 * (float)cos(angle_radians);
		y = 112.5 + r2 * (float)sin(angle_radians);
		glColor3f(1.0, 0.4, 0.2);
		glLineWidth(6.0);
		glVertex2f(x, y);
	}
	glEnd();
}

void OuterStructure()
{
	glLineWidth(6.0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glBegin(GL_LINE_STRIP);
	glColor3f(0.6, 0.6, 0.6);
	glVertex2i(10, 200);
	glColor3f(0.1, 0.3, 0.0);
	glVertex2i(10, 30);
	glVertex2i(170, 30);
	glColor3f(0.6, 0.6, 0.6);
	glVertex2i(170, 200);
	glEnd();

	glColor3f(0.6, 0.6, 0.6);
	glBegin(GL_LINE_STRIP);
	for (angle = 0; angle <= 180; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 90 + r1 * (float)cos(angle_radians);
		y = 200 + r1 * (float)sin(angle_radians);
		glLineWidth(6.0);
		glVertex2f(x, y);
	}
	glEnd();
}

void init(void)
{
	glClearColor(0, 0, 0, 0);
	glEnable(GL_DEPTH_TEST);
	gluOrtho2D(0, 400, 0, 300);
}

void disp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	OuterStructure();
	Core();
	SteamGenerator();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(400, 300);
	glutCreateWindow("Nuclear Plant");
	init();
	glutDisplayFunc(disp);
	glutMainLoop();
	return 0;
}
