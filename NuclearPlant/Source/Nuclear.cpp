#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<Windows.h>

float x,y,r1=80,r2=5,r3=27.5,r4=6,r5=6,r6=23,r7=2,r8=3,r9=6,r10=18,r11=10,r12=26,r13=14,angle, angle_radians;

void SteamGenerator()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(25, 150);
	glVertex2i(25, 75);
	glVertex2i(75, 75);
	glVertex2i(75, 150);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
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
	glColor3f(0.0, 0.0, 0.0);
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
		x = 49.5 + r2 * (float)cos(angle_radians);
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
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(10, 200);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(10, 30);
	glVertex2i(170, 30);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(170, 200);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
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

void Container()
{
	glLineWidth(6.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(220, 170);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(220, 30);
	glVertex2i(330, 30);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2i(330, 220);
	glEnd();
}

void Pipe1()
{
	glLineWidth(3.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(30, 135);
	glVertex2i(20, 135);
	glVertex2i(20, 48);
	glVertex2i(80, 48);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(80, 44);
	glVertex2i(16, 44);
	glVertex2i(16, 139);
	glVertex2i(30, 139);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(70, 117);
	glVertex2i(115, 117);
	glVertex2i(115, 160);
	glVertex2i(135, 160);
	glVertex2i(135, 48);
	glVertex2i(92, 48);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(92, 44);
	glVertex2i(139, 44);
	glVertex2i(139, 164);
	glVertex2i(111, 164);
	glVertex2i(111, 121);
	glVertex2i(70, 121);
	glEnd();
}

void Pump1()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (angle = 0; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 86 + r4 * (float)cos(angle_radians);
		y = 46 + r4 * (float)sin(angle_radians);
		glVertex2f(x, y);
	}
	glEnd();
}

void Pipe2()
{
	glLineWidth(3.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(240, 170);
	glVertex2f(240, 178);
	glVertex2f(240, 180);
	glVertex2i(240, 206);
	glVertex2i(240, 206);
	glVertex2i(124, 206);
	glVertex2i(124, 206);
	glVertex2f(124, 198);
	glVertex2f(124, 196);
	glVertex2i(124, 185);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(120, 185);
	glVertex2i(120, 195);
	glVertex2i(120, 197);
	glVertex2i(120, 210);
	glVertex2i(120, 210);
	glVertex2i(244, 210);
	glVertex2i(244, 210);
	glVertex2i(244, 182);
	glVertex2i(244, 180);
	glVertex2i(244, 170);
	glEnd();

	glBegin(GL_LINES);
	glVertex2i(350, 85);
	glVertex2f(331, 85);
	glVertex2f(329, 85);
	glVertex2i(244, 85);
	glVertex2i(244, 85);
	glVertex2i(244, 65);
	glVertex2i(244, 65);
	glVertex2i(329, 65);
	glVertex2i(331, 65);
	glVertex2i(350, 65);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(350, 89);
	glVertex2i(331, 89);
	glVertex2i(329, 89);
	glVertex2i(240, 89);
	glVertex2i(240, 89);
	glVertex2i(240, 61);
	glVertex2i(240, 61);
	glVertex2i(329, 61);
	glVertex2i(331, 61);
	glVertex2i(350, 61);
	glEnd();
}

void ControlRods()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(48, 120);
	glVertex2i(48, 165);
	glVertex2i(50, 120);
	glVertex2i(50, 165);
	glVertex2i(52, 120);
	glVertex2i(52, 165);
	glEnd();
}

void Turbine()
{
	glLineWidth(3.0);
	glBegin(GL_LINE_LOOP);
	for (angle = 0; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 255 + r6 * (float)cos(angle_radians);
		y = 138 + r6 * (float)sin(angle_radians);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2f(x, y);
	}
	glEnd();

	glLineWidth(3.0);
	glBegin(GL_LINE_STRIP);
	for (angle = 0; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 255 + r12 * (float)cos(angle_radians);
		y = 138 + r12 * (float)sin(angle_radians);
		glColor3f(0.0, 0.0, 0.0);
		glVertex2f(x, y);
	}
	glEnd();

	glPointSize(6);
	glBegin(GL_POINTS);
	glVertex2f(255, 138);
	glEnd();
}

void Generator()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3i(343, 120, 0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3i(343, 150, 0);
	glVertex3i(348, 150, 0);
	glVertex3i(348, 120, 0);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3i(356, 120, 0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3i(356, 150, 0);
	glVertex3i(361, 150, 0);
	glVertex3i(361, 120, 0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3i(369, 120, 0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3i(369, 150, 0);
	glVertex3i(374, 150, 0);
	glVertex3i(374, 120, 0);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3i(380, 144, 0);
	glVertex3i(282, 144, 0);
	glVertex3i(282, 137, 0);
	glVertex3i(380, 137, 0);
	glEnd();

	glLineWidth(6.0);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(330, 170);
	glVertex2f(385, 170);
	glVertex2f(385, 111);
	glVertex2f(330, 111);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3i(335, 111, 0);
	glVertex3i(335, 120, 0);
	glVertex3i(380, 120, 0);
	glVertex3i(380, 111, 0);
	glEnd();
}

void ConnectingPipe()
{
	glLineWidth(3.0);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2i(150, 104);
	glVertex2i(180, 104);
	glVertex2i(150, 108);
	glVertex2i(180, 108);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(185, 100);
	glVertex2i(185, 50);
	glVertex2i(185, 50);
	glVertex2i(224, 50);
	glVertex2i(189, 100);
	glVertex2i(189, 54);
	glVertex2i(189, 54);
	glVertex2i(224, 54);
	glEnd();
}

void Pump2()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	for (angle = 0; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 186 + r5 * (float)cos(angle_radians);
		y = 106 + r5 * (float)sin(angle_radians);
		glLineWidth(6.0);
		glVertex2f(x, y);
	}
	glEnd();
}

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 400.0, 0.0, 300.0);
	glMatrixMode(GL_MODELVIEW);
}

void disp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	OuterStructure();
	Core();
	SteamGenerator();
	Container();
	Pipe1();
	Pump1();
	Pipe2();
	ControlRods();
	Turbine();
	Generator();
	ConnectingPipe();
	Pump2();
	glFlush();
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(1280, 720);
	glutCreateWindow("Nuclear Plant");
	init();
	glutDisplayFunc(disp);
	glutMainLoop();
}
