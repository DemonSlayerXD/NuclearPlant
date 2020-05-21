#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<Windows.h>

float i,j,x,y,r1=80,r2=5,r3=27.5,r4=6,r5=6,r6=23,r7=2,r8=3,r9=6,r10=18,r11=10,r12=26,r13=14,angle, angle_radians;
int flag=0,p=0;

void Diagram();

void Delay(int x)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < i * 1000; j++);
	}
}

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
	glVertex3i(335, 120, 0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3i(335, 150, 0);
	glVertex3i(340, 150, 0);
	glVertex3i(340, 120, 0);
	glEnd();


	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3i(335, 150, 0);
	glVertex3i(335, 160, 0);
	glVertex3i(380, 160, 0);
	glVertex3i(380, 150, 0);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3i(375, 120, 0);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3i(375, 150, 0);
	glVertex3i(380, 150, 0);
	glVertex3i(380, 120, 0);
	glEnd();


	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3i(335, 142, 0);
	glVertex3i(282, 142, 0);
	glVertex3i(282, 135, 0);
	glVertex3i(335, 135, 0);
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

void Bulb()
{
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(350, 170);
	glVertex2f(350, 240);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(350, 240);
	glVertex2f(300, 240);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(360, 170);
	glVertex2f(360, 250);
	glEnd();
	glBegin(GL_LINES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(360, 250);
	glVertex2f(300, 250);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(290, 235);
	glVertex2f(300, 235);
	glVertex2f(300, 255);
	glVertex2f(290, 255);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINE_LOOP);
	for (angle = 0; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 285 + 11 * (float)cos(angle_radians);
		y = 245 + 11 * (float)sin(angle_radians);
		glVertex2f(x, y);
	}
	glEnd();
}

void BulbGlow()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 0.0);
	for (angle = 0; angle <= 360; angle = angle + 5)
	{
		angle_radians = angle * (float)3.14159 / (float)180;
		x = 285 + 11 * (float)cos(angle_radians);
		y = 245 + 11 * (float)sin(angle_radians);
		glVertex2f(x, y);
	}
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

void Coolant()
{
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(25.5, 122);
	glColor3f(0.9, 0.0, 0.5);
	glVertex2f(25.5, 76);
	glVertex2f(74, 76);
	glColor3f(0.9, 0.0, 0.5);
	glVertex2f(74, 122);
	glEnd();
}

void ContainerWater1()
{
	glColor3f(0.0, 0.6, 0.8);
	glBegin(GL_POLYGON);
	glVertex2i(100, 100);
	glVertex2i(155, 100);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(155, 113);
	glVertex2i(100, 113);
	glEnd();
	glColor3f(0.0, 0.6, 0.8);
	glBegin(GL_POLYGON);
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

void ContainerWater2()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.6, 0.8);
	glVertex2f(221, 31);
	glVertex2f(329, 31);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(329, 57);
	glVertex2f(221, 57);
	glEnd();
}

void TurbineBlades()
{
	glBegin(GL_POINTS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(255, 138);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(255, 138);
	glVertex2f(265, 158);
	glVertex2f(245, 158);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(255, 138);
	glVertex2f(277, 135);
	glVertex2f(263, 118);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.0, 0.0, 0.0);
	glVertex2f(255, 138);
	glVertex2f(233, 133);
	glVertex2f(247, 118);
	glEnd();
}

void Rotation()
{
	float th = 2.0;
	for (int k = 0; k < 10; k++)
	{
		glTranslatef(255, 138, 0.0);
		glRotatef(th, 0.0, 0.0, 1.0);
		glTranslatef(-255, -138, 0.0);
		TurbineBlades();
		th+=2;
		Delay(1000);
		glBegin(GL_POLYGON);
		for (angle = 0; angle <= 360; angle = angle + 5)
		{
			angle_radians = angle * (float)3.14159 / (float)180;
			x = 255 + r6 * (float)cos(angle_radians);
			y = 138 + r6 * (float)sin(angle_radians);
			glColor3f(1.0, 1.0, 1.0);
			glLineWidth(6.0);
			glVertex2f(x, y);
		}
		glEnd();
		glTranslatef(255, 138, 0.0);
		glRotatef(th, 0.0, 0.0, 1.0);
		glTranslatef(-255, -138, 0.0);
		TurbineBlades();
		glFlush();
	}
	glFlush();
}

void Points()
{
	glPointSize(4);
	glColor3f(0.4, 0.4, 0.4);
	glBegin(GL_POINTS);
	glVertex2f(243, 134);
	glVertex2f(249, 128);
	glVertex2f(246, 122);
	glVertex2f(256, 115);
	glVertex2f(251, 110);
	glVertex2f(264, 108);
	glVertex2f(272, 104);
	glVertex2f(242, 110);
	glVertex2f(247, 100);
	glVertex2f(256, 104);
	glVertex2f(230, 100);
	glVertex2f(235, 105);
	glVertex2f(239, 110);
	glVertex2f(264, 104);
	glVertex2f(249, 123);
	glVertex2f(269, 130);
	glVertex2f(264, 128);
	glVertex2f(270, 100);
	glVertex2f(274, 104);
	glVertex2f(272, 90);
	glVertex2f(275, 130);
	glVertex2f(265, 127);
	glVertex2f(255, 133);
	glEnd();
}

void Steam()
{
	for (i = 0; i < 21; i = i + 1)
	{
		glColor4f(0.4, 0.4, 0.4, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(120, 185.5 + i);
		glVertex2f(120, 189.5 + i);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glVertex2f(124, 189.5 + i);
		glVertex2f(124, 185.5 + i);
		glEnd();
		glFlush();
		Delay(200);
	}
	for (i = 0; i < 117; i = i + 1)
	{
		glBegin(GL_QUADS);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glVertex2f(124 + i, 210);
		glVertex2f(128 + i, 210);
		glColor4f(0.4, 0.4, 0.4, 1.0);
		glVertex2f(128 + i, 206);
		glVertex2f(124 + i, 206);
		glEnd();
		glFlush();
		Delay(200);
	}
	for (i = 0; i < 33; i = i + 1)
	{
		glBegin(GL_QUADS);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glVertex2f(240, 206 - i);
		glColor4f(0.4, 0.4, 0.4, 1.0);
		glVertex2f(244, 206 - i);
		glVertex2f(244, 202 - i);
		glColor4f(1.0, 1.0, 1.0, 1.0);
		glVertex2f(240, 202 - i);
		glEnd();
		glFlush();
		Delay(200);
	}
	glColor3f(0.4, 0.4, 0.4);
	glBegin(GL_QUADS);
	glVertex2f(240, 170);
	glVertex2f(244, 170);
	glVertex2f(252, 159);
	glVertex2f(232, 159);
	glEnd();
}


void Points1()
{
	glPointSize(5.0);
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POINTS);
	glVertex2f(46, 124);
	glVertex2f(44, 130);
	glVertex2f(48, 135);
	glVertex2f(49, 126);
	glVertex2f(42, 140);
	glVertex2f(46, 139);
	glVertex2f(54, 128);
	glVertex2f(38, 148);
	glVertex2f(32, 143);
	glVertex2f(57, 124);
	glVertex2f(61, 138);
	glVertex2f(51, 134);
	glEnd();
}

void Points2()
{
	glPointSize(3.0);
	glColor3f(0.4, 0.4, 0.4);
	glBegin(GL_POINTS);
	glVertex2f(107, 117);
	glVertex2f(109, 120);
	glVertex2f(110, 123);
	glVertex2f(106, 125);
	glVertex2f(113, 120);
	glVertex2f(113, 131);
	glVertex2f(108, 141);
	glVertex2f(111, 130);
	glVertex2f(107, 127);
	glVertex2f(111, 131);
	glVertex2f(123, 145);
	glVertex2f(131, 145);
	glVertex2f(142, 151);
	glVertex2f(133, 148);
	glVertex2f(137, 133);
	glVertex2f(139, 157);
	glVertex2f(128, 160);
	glVertex2f(146, 163);
	glVertex2f(149, 170);
	glVertex2f(150, 124);
	glVertex2f(153, 119);
	glVertex2f(148, 136);
	glVertex2f(137, 115);
	glVertex2f(149, 127);
	glVertex2f(108, 170);
	glVertex2f(104, 145);
	glVertex2f(109, 175);
	glVertex2f(111, 156);
	glVertex2f(118, 164);
	glVertex2f(127, 166);
	glVertex2f(129, 169);
	glVertex2f(126, 132);
	glVertex2f(123, 128);
	glVertex2f(126, 140);
	glVertex2f(119, 141);
	glVertex2f(127, 151);
	glVertex2f(126, 155);
	glVertex2f(121, 171);
	glVertex2f(126, 180);
	glVertex2f(133, 185);
	glVertex2f(141, 190);
	glVertex2f(138, 176);
	glEnd();
}

void Working()
{
	Diagram();
	glClearColor(0, 0, 0, 0);
	glColor3f(0.1, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex3i(48, 122, 1);
	glVertex3i(48, 140, 1);
	glVertex3i(50, 122, 1);
	glVertex3i(50, 140, 1);
	glVertex3i(52, 122, 1);
	glVertex3i(52, 140, 1);
	glEnd();

	glColor3f(0.6, 0.6, 0.4);
	glBegin(GL_LINES);
	glVertex2i(48, 140);
	glVertex2i(48, 185);
	glVertex2i(50, 140);
	glVertex2i(50, 185);
	glVertex2i(52, 140);
	glVertex2i(52, 185);
	glEnd();
	Delay(500);

	for (i = 0, j = 0; i < 40, j < 40; i = i + 1, j = i + 1)
	{
		glBegin(GL_QUADS);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(70 + i, 117);
		glVertex2f(74 + i, 117);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(74 + i, 121);
		glVertex2f(70 + i, 121);
		glEnd();

		glBegin(GL_QUADS);
		glColor3f(0.0, 0.6, 0.8);
		glVertex2f(350 - j, 89);
		glVertex2f(280 - j, 89);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(280 - j, 85);
		glVertex2f(350 - j, 85);
		glEnd();
		glFlush();
		Delay(200);
	}
	for (i = 0, j = 0; i < 32, j < 25; i = i + 1, j = j + 1)
	{
		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(111, 117 + i);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(114, 117 + i);
		glVertex2f(114, 136 + i);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(111, 136 + i);
		glEnd();

		glBegin(GL_QUADS);
		glColor3f(0.0, 0.6, 0.8);
		glVertex2f(240, 89 - j);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(244, 89 - j);
		glVertex2f(244, 85 - j);
		glColor3f(0.0, 0.6, 0.8);
		glVertex2f(240, 85 - j);
		glEnd();
		glFlush();
		Delay(200);
	}

	for (i = 0, j = 0; i < 25, j < 25; i = i + 1, j = j + 1)
	{
		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(111 + i, 160);
		glVertex2f(115 + i, 160);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(115 + i, 163.5);
		glVertex2f(111 + i, 163.5);
		glEnd();

		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(244 + j, 65);
		glVertex2f(326 + j, 65);
		glColor3f(0.0, 0.6, 0.8);
		glVertex2f(326 + j, 61);
		glVertex2f(244 + j, 61);
		glEnd();
		glFlush();
		Delay(200);
	}

	for (i = 0; i < 112; i = i + 1)
	{

		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(135.2, 160 - i);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(138.9, 160 - i);
		glVertex2f(138.9, 156 - i);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(135.2, 156 - i);
		glEnd();
		glFlush();
		Delay(100);
	}
	for (i = 0; i < 40; i = i + 1)
	{
		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(131 - i, 47.5);
		glVertex2f(135.3 - i, 47.5);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(135.3 - i, 44.5);
		glVertex2f(131 - i, 44.5);
		glEnd();
		glFlush();
		Delay(100);
	}
	Delay(500);
	for (i = 0; i < 58; i = i + 1)
	{
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(80 - i, 47.5);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(80 - i, 44.5);
		glVertex2f(76 - i, 44.5);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(76 - i, 47.5);
		glEnd();
		glFlush();
		Delay(100);
	}
	for (i = 0; i < 92; i = i + 1)
	{
		glBegin(GL_QUADS);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(16.5, 47.5 + i);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(19.5, 47.5 + i);
		glVertex2f(19.5, 44.5 + i);
		glColor3f(0.9, 0.0, 0.5);
		glVertex2f(16.5, 44.5 + i);
		glEnd();
		glFlush();
		Delay(100);
	}
	for (i = 0; i < 8; i = i + 1)
	{
		glColor3f(0.9, 0.0, 0.5);
		glBegin(GL_QUADS);
		glVertex2f(19.5 + i, 138.5);
		glVertex2f(23 + i, 138.5);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(23 + i, 135.5);
		glVertex2f(19.5 + i, 135.5);
		glEnd();
		glFlush();
		Delay(100);
	}
	for (i = 0; i < 3; i = i + 1)
	{
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(224 - i, 54);
		glVertex2f(189 - i, 54);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(189 - i, 50);
		glVertex2f(224 - i, 50);
		glEnd();
		glFlush();
		Delay(200);
	}
	for (i = 0; i < 4; i = i + 1)
	{
		glBegin(GL_QUADS);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(185, 100-i);
		glColor3f(0.0, 0.0, 1.0);
		glVertex2f(189, 100-i);
		glVertex2f(189, 53-i);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(185, 53-i);
		glEnd();
		glFlush();
		Delay(200);
	}
	for (i = 0; i < 3; i = i + 1)
	{
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(152 - i, 108);
		glVertex2f(180 - i, 108);
		glColor3f(1.0, 1.0, 1.0);
		glVertex2f(180 - i, 105);
		glVertex2f(152 - i, 105);
		glEnd();
		glFlush();
		Delay(200);
	}
	Points2();
	Steam();
	Points();
	BulbGlow();
	Rotation();
	glFlush();
}

void Welcome()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1, 0, 0);

	glRasterPos2f(175, 275);
	char msg1[] = "Nuclear Power Plant";
	for (int i = 0; i < strlen(msg1); i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);

	glRasterPos2f(125, 250);
	char msg2[] = "Submitted By:";
	for (int i = 0; i < strlen(msg2); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg2[i]);

	glRasterPos2f(200, 250);
	char msg3[] = "Aldrick Rasquinha   4SO17CS009";
	for (int i = 0; i < strlen(msg3); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg3[i]);

	glRasterPos2f(200, 240);
	char msg4[] = "Ashlesh B R K       4SO17CS019";
	for (int i = 0; i < strlen(msg4); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg4[i]);

	glRasterPos2f(200, 230);
	char msg5[] = "Blaze Dsouza        4SO17CS021";
	for (int i = 0; i < strlen(msg5); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg5[i]);

	glRasterPos2f(175, 75);
	char msg6[] = "Press RMB For Options";
	for (int i = 0; i < strlen(msg6); i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg6[i]);

	glutSwapBuffers();
}

void Diagram()
{
	glClear(GL_COLOR_BUFFER_BIT);
	Coolant();
	ContainerWater1();
	ContainerWater2();
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
	TurbineBlades();
	Bulb();
	glFlush();
}

void Functions(int id)
{
	switch (id)
	{
		case 1: glClear(GL_COLOR_BUFFER_BIT);
				Welcome();
				break;
		case 2: glClear(GL_COLOR_BUFFER_BIT);
				Diagram();
				break;
		case 3: glClear(GL_COLOR_BUFFER_BIT);
				Working();
				break;
		case 4: exit(0);
	}
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
	Welcome();
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
	glutCreateMenu(Functions);
	glutAddMenuEntry("Welcome Screen", 1);
	glutAddMenuEntry("Nuclear Plant Diagram", 2);	
	glutAddMenuEntry("Start Animation", 3);
	glutAddMenuEntry("Quit", 4);	
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
}
