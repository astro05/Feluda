#ifndef PICTURES_H_INCLUDED
#define PICTURES_H_INCLUDED

void characterimage();
void backgroundimage();
void intro();
void menu();
void menuimage();

////////////////////CHARACTERIMAGE/////////////////////
int image[9],k,mp[23];
char name[9][20]={"Characters\\1.png","Characters\\2.png","Characters\\3.png","Characters\\4.png","Characters\\5.png","Characters\\6.png","Characters\\7.png","Characters\\8.png","Characters\\9.png"};
void characterimage()
{
for(k=0;k<9;k++)
	{
	image[k]=iLoadImage(name[k]);
	}
}

///////////////////menu/////////////////////////

	
char lk[38][37]={"Menu\\e 031.jpg","Menu\\e 032.jpg","Menu\\e 033.jpg","Menu\\e 034.jpg","Menu\\e 035.jpg","Menu\\e 036.jpg","Menu\\e 037.jpg","Menu\\e 038.jpg","Menu\\e 039.jpg","Menu\\e 040.jpg","Menu\\e 041.jpg","Menu\\e 042.jpg","Menu\\e 043.jpg","Menu\\e 044.jpg","Menu\\e 045.jpg","Menu\\e 046.jpg","Menu\\e 047.jpg","Menu\\e 048.jpg","Menu\\e 049.jpg","Menu\\e 050.jpg","Menu\\e 051.jpg","Menu\\e 052.jpg"};
void menuimage()
{
	for(int i =0;i<23;i++)
	{
		mp[i]= iLoadImage(lk[i]);
	}

}






//////////////////Intro///////////////////

int image2[8];
char bname[8][25]={"Background\\Intro 1.bmp","Background\\Intro 2.bmp","Background\\Intro 3.bmp","Background\\Intro 4.bmp","Background\\Intro 5.bmp","Background\\Intro 6.bmp","Background\\Intro 7.bmp","Background\\Intro 8.bmp"};
void intro()
{
for(k=0;k<9;k++)
{
image2[k]=iLoadImage(bname[k]);
}
}
///////////////////Game background/////////////

int image1;
void background()
{
    image1=iLoadImage("gbg\\2.png");
}
#endif
