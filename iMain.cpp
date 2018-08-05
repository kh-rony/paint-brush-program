/*
	author: S. M. Shahriar Nirjon
	last modified: August 8, 2008
*/
#include "iGraphics.h"

int window = 1, hasan_sir = 0, next1 = 0, next1_x = 1340;

int rony = 0, rony_y = 860, rizve_sir_x = 1500;

int color = 1, draw_type = 1, draw[10000000][6], p = -1, q;

int radius, rectangle_x[1000000], rectangle_y[1000000], length[1000000], height[1000000];

/* 
	function iDraw() is called again and again by the system.
*/

void iDraw()
{
	//place your drawing codes here
	
	iClear();
	
	if(window == 1)
	{
		iSetColor(200, 210, 225);//background
		iFilledRectangle(0, 0, 1340, 680);

		iShowBMP(60, 340, "UIU.bmp");

		if(hasan_sir % 3 == 0)
		{
			iShowBMP(1000, 420, "hasan_sir_1.bmp");
		}
		else if(hasan_sir % 3 == 1)
		{
			iShowBMP(1000, 420, "hasan_sir_2.bmp");
		}
		else if(hasan_sir % 3 == 2)
		{
			iShowBMP(1000, 420, "hasan_sir_3.bmp");
		}
	
		iShowBMP(next1_x, 21, "next.bmp");

		iSetColor(0, 0, 0);//black
		iText(280, 280,"Paint Brush by Rony (version 3.0)",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(970, 380,"\" And special thanks to our",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(1030, 340,"Hasan Sarwar sir  \"",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	else if(window == 2)
	{
		iSetColor(200, 210, 225);//background
		iFilledRectangle(0, 0, 1340, 680);

		iSetColor(0, 0, 0);//black

		iShowBMP(360, rony_y, "rony.bmp");

		iShowBMP(rizve_sir_x, 210, "rizve_sir.bmp");

		if(rony >= 110)
		{
			iText(620, 600,"Developed by",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(rony >= 140)
		{
			iText(620, 560,"Khaled Hasan Rony",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(rony >= 180)
		{
			iText(630, 300,"Guided by",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(rony >= 210)
		{
			iText(640, 260,"Rizve sir",GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(rony >= 250)
		{
			iShowBMP(470, 21, "next.bmp");
		}
	}
	
	else if(window == 3)
	{
		iSetColor(255, 255, 255);//white
		iFilledRectangle(0, 0, 1340, 560);

		for(q=0; q<=p; q++)
		{
			if(draw[q][5] == 1)
			{
				iSetColor(0, 0, 0);//black
			}
			else if(draw[q][5] == 2)
			{
				iSetColor(140, 140, 140);//ash
			}
			else if(draw[q][5] == 3)
			{
				iSetColor(0, 0, 255);//blue_dark
			}
			else if(draw[q][5] == 4)
			{
				iSetColor(0, 162, 232);//blue_light
			}
			else if(draw[q][5] == 5)
			{
				iSetColor(35, 180, 75);//green_dark
			}
			else if(draw[q][5] == 6)
			{
				iSetColor(160, 255, 30);//green_light
			}
			else if(draw[q][5] == 7)
			{
				iSetColor(255, 255, 0);//yellow
			}
			else if(draw[q][5] == 8)
			{
				iSetColor(255, 170, 60);//orange
			}
			else if(draw[q][5] == 9)
			{
				iSetColor(255, 0, 0);//red
			}
			else if(draw[q][5] == 10)
			{
				iSetColor(255, 255, 255);//eraser (white)
			}


			if(draw[q][4] == 1)
			{
				iFilledCircle(draw[q][0], draw[q][1], 4);
			}
			else if(draw[q][4] == 2)
			{
				iLine(draw[q][0] - 3, draw[q][1] + 3, draw[q][2] + 3, draw[q][3] + 3);
				iLine(draw[q][0] - 4, draw[q][1] + 2, draw[q][2] + 4, draw[q][3] + 2);
				iLine(draw[q][0] - 5, draw[q][1] + 1, draw[q][2] + 5, draw[q][3] + 1);
				
				iLine(draw[q][0] - 5, draw[q][1], draw[q][2] + 5, draw[q][3]);
				
				iLine(draw[q][0] - 5, draw[q][1] - 1, draw[q][2] + 5, draw[q][3] - 1);
				iLine(draw[q][0] - 4, draw[q][1] - 2, draw[q][2] + 4, draw[q][3] - 2);
				iLine(draw[q][0] - 3, draw[q][1] - 3, draw[q][2] + 3, draw[q][3] - 3);
			}
			else if(draw[q][4] == 3)
			{
				iLine(draw[q][0] + 3, draw[q][1] + 3, draw[q][2] + 3, draw[q][3] - 3);
				iLine(draw[q][0] + 2, draw[q][1] + 4, draw[q][2] + 2, draw[q][3] - 4);
				iLine(draw[q][0] + 1, draw[q][1] + 5, draw[q][2] + 1, draw[q][3] - 5);
				
				iLine(draw[q][0], draw[q][1] + 5, draw[q][2], draw[q][3] - 5);
				
				iLine(draw[q][0] - 1, draw[q][1] + 5, draw[q][2] - 1, draw[q][3] - 5);
				iLine(draw[q][0] - 2, draw[q][1] + 4, draw[q][2] - 2, draw[q][3] - 4);
				iLine(draw[q][0] - 3, draw[q][1] + 3, draw[q][2] - 3, draw[q][3] - 3);
			}
			else if(draw[q][4] == 4)
			{
				radius = ((draw[q][0] - draw[q][2]) * (draw[q][0] - draw[q][2])) + ((draw[q][1] - draw[q][3]) * (draw[q][1] - draw[q][3]));
				radius = (int)sqrt((double)radius);
				
				iCircle(draw[q][0], draw[q][1], radius - 2);
				iCircle(draw[q][0], draw[q][1], radius - 1);
				
				iCircle(draw[q][0], draw[q][1], radius);
				
				iCircle(draw[q][0], draw[q][1], radius + 1);
				iCircle(draw[q][0], draw[q][1], radius + 2);
				iCircle(draw[q][0], draw[q][1], radius + 3);
			}
			else if(draw[q][4] == 5)
			{
				if(draw[q][0] < draw[q][2] && draw[q][1] > draw[q][3])
				{
					rectangle_x[q] = draw[q][0];
					rectangle_y[q] = draw[q][3];
					length[q] = (draw[q][2] - draw[q][0]);
					height[q] = (draw[q][1] - draw[q][3]);
				}
				else if(draw[q][0] > draw[q][2] && draw[q][1] > draw[q][3])
				{
					rectangle_x[q] = draw[q][2];
					rectangle_y[q] = draw[q][3];
					length[q] = (draw[q][0] - draw[q][2]);
					height[q] = (draw[q][1] - draw[q][3]);
				}
				else if(draw[q][0] < draw[q][2] && draw[q][1] < draw[q][3])
				{
					rectangle_x[q] = draw[q][0];
					rectangle_y[q] = draw[q][1];
					length[q] = (draw[q][2] - draw[q][0]);
					height[q] = (draw[q][3] - draw[q][1]);
				}
				else if(draw[q][0] > draw[q][2] && draw[q][1] < draw[q][3])
				{
					rectangle_x[q] = draw[q][2];
					rectangle_y[q] = draw[q][1];
					length[q] = (draw[q][0] - draw[q][2]);
					height[q] = (draw[q][3] - draw[q][1]);
				}
				
				iRectangle(rectangle_x[q] + 2, rectangle_y[q] + 2, length[q] - 4, height[q] - 4);
				iRectangle(rectangle_x[q] + 1, rectangle_y[q] + 1, length[q] - 2, height[q] - 2);
				
				iRectangle(rectangle_x[q], rectangle_y[q], length[q], height[q]);
				
				iRectangle(rectangle_x[q] - 1, rectangle_y[q] - 1, length[q] + 2, height[q] + 2);
				iRectangle(rectangle_x[q] - 2, rectangle_y[q] - 2, length[q] + 4, height[q] + 4);
			}
			else if(draw[q][4] == 6)
			{
				iFilledRectangle(draw[q][0] - 7, draw[q][1] - 7, 14, 14);
			}
		}

		iSetColor(200, 210, 225);//background
		iFilledRectangle(0, 560, 1340, 680);

		iSetColor(0, 0, 0);//black
		iText(300, 575,"choose a color",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(860, 575,"choose a drawing type",GLUT_BITMAP_TIMES_ROMAN_24);

		iSetColor(170, 75, 170);//color_pointer

		if(color == 1)//black
		{
			iFilledRectangle(15, 605, 60, 60);
		}
		else if(color == 2)//ash
		{
			iFilledRectangle(85, 605, 60, 60);
		}
		else if(color == 3)//blue_dark
		{
			iFilledRectangle(155, 605, 60, 60);
		}
		else if(color == 4)//blue_light
		{
			iFilledRectangle(225, 605, 60, 60);
		}
		else if(color == 5)//green_dark
		{
			iFilledRectangle(295, 605, 60, 60);
		}
		else if(color == 6)//green_light
		{
			iFilledRectangle(365, 605, 60, 60);
		}
		else if(color == 7)//yellow
		{
			iFilledRectangle(435, 605, 60, 60);
		}
		else if(color == 8)//orange
		{
			iFilledRectangle(505, 605, 60, 60);
		}
		else if(color == 9)//red
		{
			iFilledRectangle(575, 605, 60, 60);
		}
		else if(color == 10)//eraser (white)
		{
			iFilledRectangle(645, 600, 130, 70);
		}

		if(draw_type == 1)//curve line
		{
			iFilledRectangle(795, 605, 62, 62);
		}
		else if(draw_type == 2)//horizontal line
		{
			iFilledRectangle(867, 605, 62, 62);
		}
		else if(draw_type == 3)//vertical line
		{
			iFilledRectangle(939, 605, 62, 62);
		}
		else if(draw_type == 4)//circle
		{
			iFilledRectangle(1011, 605, 62, 62);
		}
		else if(draw_type == 5)//rectangle
		{
			iFilledRectangle(1083, 605, 62, 62);
		}
		
		iSetColor(0, 0, 0);//black
		iFilledRectangle(20, 610, 50, 50);

		iSetColor(140, 140, 140);//ash
		iFilledRectangle(90, 610, 50, 50);

		iSetColor(0, 0, 255);//blue_dark
		iFilledRectangle(160, 610, 50, 50);
		
		iSetColor(0, 162, 232);//blue_light
		iFilledRectangle(230, 610, 50, 50);

		iSetColor(35, 180, 75);//green_dark
		iFilledRectangle(300, 610, 50, 50);

		iSetColor(160, 255, 30);//green_light
		iFilledRectangle(370, 610, 50, 50);

		iSetColor(255, 255, 0);//yellow
		iFilledRectangle(440, 610, 50, 50);

		iSetColor(255, 170, 65);//orange
		iFilledRectangle(510, 610, 50, 50);
		
		iSetColor(255, 0, 0);//red
		iFilledRectangle(580, 610, 50, 50);

		iShowBMP(650, 605, "eraser.bmp");
		
		iShowBMP(800, 610, "curve_line.bmp");
		iShowBMP(872, 610, "horizontal_line.bmp");
		iShowBMP(944, 610, "vertical_line.bmp");
		iShowBMP(1016, 610, "circle.bmp");
		iShowBMP(1088, 610, "rectangle.bmp");
		
		iShowBMP(1220, 600, "next_small.bmp");
	}
	else if(window == 4)
	{
		iSetColor(200, 210, 225);//background
		iFilledRectangle(0, 0, 1340, 680);
		
		iShowBMP(30, 600, "back_small.bmp");
		iShowBMP(440, 340, "shahriar_nirjon.bmp");
		
		iSetColor(0, 0, 0);//black
		iText(460, 310,"We are grateful to Shahriar Nirjon sir.",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(495, 270,"(father of iGraphics header file)",GLUT_BITMAP_TIMES_ROMAN_24);
		
		iSetColor(150, 150, 150);//ash
		iFilledRectangle(0, 100, 1340, 60);
		
		iSetColor(0, 0, 0);//black
		iText(600, 125,"Thank you.",GLUT_BITMAP_TIMES_ROMAN_24);
	}
}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
	
	printf("%d %d\n",mx,my);

	if(window == 3)
	{
		if((draw_type == 1 || draw_type == 6) && mx>=0 && mx<=1340 && my>=0 && my<=555)
		{
			p++;
			
			draw[p][0] = mx;
			draw[p][1] = my;

			draw[p][4] = draw_type;
			draw[p][5] = color;
		}
		else if((draw_type == 2 || draw_type == 3 || draw_type == 4 || draw_type == 5) && mx>=0 && mx<=1340 && my>=0 && my<=555)
		{
			draw[p][2] = mx;
			draw[p][3] = my;

			draw[p][4] = draw_type;
			draw[p][5] = color;
		}
	}
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		printf("%d %d\n",mx,my);
		
		if(window == 1)
		{
			if(mx>=470 && mx<=870 && my>=21 && my<=120)
			{
				window = 2;
				printf("window = 2\n");
			}
		}

		else if(window == 2)
		{
			if(mx>=470 && mx<=870 && my>=21 && my<=120)
			{
				window = 3;
				printf("window = 3\n");
			}
		}

		else if(window == 3)
		{
			if(mx>=1220 && mx<=1320 && my>=600 && my<=650)
			{
				window = 4;
				printf("window = 4\n");
			}

			if(mx>=20 && mx<=70 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 1;
				printf("black\n");
			}
			else if(mx>=90 && mx<=140 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 2;
				printf("ash\n");
			}
			else if(mx>=160 && mx<=210 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 3;
				printf("blue_dark\n");
			}
			else if(mx>=230 && mx<=280 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 4;
				printf("blue_light\n");
			}
			else if(mx>=300 && mx<=350 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 5;
				printf("green_dark\n");
			}
			else if(mx<=420 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 6;
				printf("green_light\n");
			}
			else if(mx>=440 && mx<=490 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 7;
				printf("yellow\n");
			}
			else if(mx>=510 && mx<=560 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 8;
				printf("orange\n");
			}
			else if(mx>=580 && mx<=630 && my>=610 && my<=660)
			{
				if(draw_type == 6)
				{
					draw_type = 1;
				}
				color = 9;
				printf("red\n");
			}
			else if(mx>=650 && mx<=780 && my>=605 && my<=665)
			{
				color = 10;
				draw_type = 6;
				printf("eraser pressed\n");
			}
			
			if(mx>=800 && mx<=852 && my>=610 && my<=662)
			{
				if(draw_type == 6)
				{
					color = 1;
				}
				draw_type = 1;
				printf("curve line\n");
			}
			else if(mx>=872 && mx<=924 && my>=610 && my<=662)
			{
				if(draw_type == 6)
				{
					color = 1;
				}
				draw_type = 2;
				printf("horizontal line\n");
			}
			else if(mx>=944 && mx<=996 && my>=610 && my<=662)
			{
				if(draw_type == 6)
				{
					color = 1;
				}
				draw_type = 3;
				printf("vertical line\n");
			}
			else if(mx>=1016 && mx<=1068 && my>=610 && my<=662)
			{
				if(draw_type == 6)
				{
					color = 1;
				}
				draw_type = 4;
				printf("circle\n");
			}
			else if(mx>=1088 && mx<=1140 && my>=610 && my<=662)
			{
				if(draw_type == 6)
				{
					color = 1;
				}
				draw_type = 5;
				printf("rectangle\n");
			}

			if(mx>=0 && mx<=1340 && my>=0 && my<=555)
			{
				p++;
				
				draw[p][0] = mx;
				draw[p][1] = my;
				
				draw[p][2] = mx;
				draw[p][3] = my;

				draw[p][4] = draw_type;
				draw[p][5] = color;
			}
		}
		else if(window == 4)
		{
			if(mx>=30 && mx<=130 && my>=600 && my<=650)
			{
				window = 3;
				printf("window = 3\n");
			}
		}
	}

	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here	
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
void hasan_sir_function()
{
	if(window == 1)
	{
		hasan_sir++;
	}
}
void next1_function()
{
	if(next1_x == 470 || next1_x == 0)
	{
		next1++;
	}
	
	if(next1 == 0 || next1 == 1)
	{
		next1_x -= 10;
	}
	else if(next1 == 2)
	{
		next1_x += 10;
	}
}
void rony_function()
{
	if(window == 2)
	{
		if(rony_y > 420)
		{
			rony_y -= 10;
		}
		else
		{
			rony++;
		}
	}
}
void rizve_sir_function()
{
	if(window == 2 && rony > 0)
	{
		if(rizve_sir_x > 760)
		{
			rizve_sir_x -= 10;
		}
	}
}
int main()
{
	//place your own initialization codes here.

	iSetTimer(1600, hasan_sir_function);
	iSetTimer(5, next1_function);
	iSetTimer(10, rony_function);
	iSetTimer(10, rizve_sir_function);

	iInitialize(1340, 680, "Paint Brush by Rony (version 3.0)");
	return 0;
}