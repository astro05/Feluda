//#include "iGraphics.h"
//#include "bitmap_loader.h"
//#include "pictures.h"
#include "allheader.h"
//int mposx,  mposy;
int x=0;
int i=0,j=0,u=0;
int gamestat=0;
int mimage,mpic,settingpic,scorepic,button1,button2,button3,button4,musicbutton;

//int mp[23];

void iDraw()
{
	
	iClear();
	
	if(gamestat==0)
	{
	iShowImage(0,0,1024,768,image2[j]);
	iDelayMS(100);
	j++;
	if(j>7)
     j=6;
	iText(420,100,"Press Mouse Button to Continue");
	}
	if(gamestat==1)
	{
	//iShowImage(0,0,1024,768,mimage);
	//iShowImage(650,0,500,430,mpic);
		
		iShowImage(0,0,1024,768,mp[u]);
	iDelayMS(250);
	u++;
	if(u>22)
		u=0;
	



	iShowImage(20,590,200,130,button1);
	iShowImage(20,410,200,130,button2);
	iShowImage(20,240,200,130,button3);
	iShowImage(20,70,200,130,button4);
	}
	if(gamestat==2)
	{
		iShowImage(0,0,1024,768,image1);
	
	iShowImage(x,0,80,180,image[i]);
	x=x+10;
	i++;
	if(i>8)
     i=0;
	iDelayMS(300);
	}
	if(gamestat==3)
	{
    iShowImage(0,0,1024,768,scorepic);
	}
	if(gamestat==4)
	{
	iShowImage(0,0,1024,768,settingpic);
	iShowImage(550,375,80,80,musicbutton);
	}
}

void iPassiveMouse(int x, int y)
{
	;
}


/*
 function iMouseMove() is called when the user presses and drags the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouseMove(int mx, int my)
{
	printf("x = %d, y= %d\n", mx, my);
	//place your codes here
}

/*
 function iMouse() is called when the user presses/releases the mouse.
 (mx, my) is the position where the mouse pointer is.
 */
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(gamestat==0)
		{
		gamestat=1;
		}
		if(mx>=20&&mx<=220&&my>=590&&my<=760)
		{
		if(gamestat==1)
			gamestat=2;
		}
		if(mx>=20&&mx<=220&&my>=240&&my<=370)
		{
		if(gamestat==1)
			gamestat=3;
		}
		if(mx>=20&&mx<=220&&my>=410&&my<=540)
		{
		if(gamestat==1)
			gamestat=4;
		}
		
		if(mx>=20&&mx<=220&&my>=70&&my<=130)
		{
		exit(0);
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
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
	if (key == 'q')
	{
		exit(0);
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

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
void changegstat()
{
	if(gamestat==0||gamestat==1)
	{
	gamestat++;
	}
}
int musicON=1;
void changemusic()
{
	musicON=0;
	PlaySound(0,0,0);
}
int main()
{
	//place your own initialization codes here.
	
	//iSetTimer(10000,changegstat);
	iSetTimer(20000,changemusic);
	PlaySound("music\\Intro 1.wav",NULL,SND_LOOP|SND_ASYNC);
	iInitialize(1024, 768, "Character Rendering");
	mimage=iLoadImage("Menu\\feludafinal1.jpg");
	button1=iLoadImage("Button\\startgame.png");
	button2=iLoadImage("Button\\settings.png");
	button3=iLoadImage("Button\\score.png");
	button4=iLoadImage("Button\\exit.png");
	//mpic=iLoadImage("Menu\\menupic.png");

	menuimage();









	scorepic=iLoadImage("score\\score.jpg");
	settingpic=iLoadImage("Settings\\settings2.png");
	musicbutton=iLoadImage("Button\\music.png");
	characterimage();//picture loading from picture.h
	intro();
	background();

	iStart(); // it will start drawing

	return 0;
}

