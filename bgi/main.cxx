#include"graphics.h" 
#include <iostream>

void drawRoad() {
	//Road 
	line(0, 600, 1088, 600);
	line(0, 650, 1088, 650);
	line(0, 630, 64, 630);
	line(128, 630, 192, 630);
	line(256, 630, 320, 630);
	line(384, 630, 448, 630);
	line(512, 630, 576, 630);
	line(640, 630, 704, 630);
	line(768, 630, 832, 630);
	line(896, 630, 960, 630);
	line(1024, 630, 1088, 630);
	//tree
	setfillstyle(SOLID_FILL, GREEN);
	circle(128, 700, 30);
	floodfill(129, 700, WHITE);
	circle(140, 705, 30);
	floodfill(162, 705, WHITE);
	circle(145, 713, 30);
	floodfill(169, 713, WHITE);
	circle(125, 713, 30);
	floodfill(100, 713, WHITE);
	//flowers
	setfillstyle(SOLID_FILL, RED);
	circle(130, 705, 5);
	floodfill(131, 705, WHITE);
	circle(115, 700, 5);
	floodfill(116, 700, WHITE);
	circle(160, 690, 5);
	floodfill(161, 690, WHITE);
	circle(155, 710, 5);
	floodfill(156, 710, WHITE);
	//second tree
	setfillstyle(SOLID_FILL, GREEN);
	circle(328, 700, 30);
	floodfill(329, 700, WHITE);
	circle(340, 705, 30);
	floodfill(362, 705, WHITE);
	circle(345, 713, 30);
	floodfill(369, 713, WHITE);
	circle(325, 713, 30);
	floodfill(300, 713, WHITE);
	//flowers
	setfillstyle(SOLID_FILL, RED);
	circle(330, 705, 5);
	floodfill(331, 705, WHITE);
	circle(315, 700, 5);
	floodfill(316, 700, WHITE);
	circle(360, 690, 5);
	floodfill(361, 690, WHITE);
	circle(355, 710, 5);
	floodfill(356, 710, WHITE);
	//therd tree
	setfillstyle(SOLID_FILL, GREEN);
	circle(528, 700, 30);
	floodfill(529, 700, WHITE);
	circle(540, 705, 30);
	floodfill(562, 705, WHITE);
	circle(545, 713, 30);
	floodfill(569, 713, WHITE);
	circle(525, 713, 30);
	floodfill(500, 713, WHITE);
	//flowers
	setfillstyle(SOLID_FILL, RED);
	circle(530, 705, 5);
	floodfill(531, 705, WHITE);
	circle(515, 700, 5);
	floodfill(516, 700, WHITE);
	circle(560, 690, 5);
	floodfill(561, 690, WHITE);
	circle(555, 710, 5);
	floodfill(556, 710, WHITE);
	//fouth tree
	setfillstyle(SOLID_FILL, GREEN);
	circle(728, 700, 30);
	floodfill(729, 700, WHITE);
	circle(740, 705, 30);
	floodfill(762, 705, WHITE);
	circle(745, 713, 30);
	floodfill(769, 713, WHITE);
	circle(725, 713, 30);
	floodfill(700, 713, WHITE);
	//flowers
	setfillstyle(SOLID_FILL, RED);
	circle(730, 705, 5);
	floodfill(731, 705, WHITE);
	circle(715, 700, 5);
	floodfill(716, 700, WHITE);
	circle(760, 690, 5);
	floodfill(761, 690, WHITE);
	circle(755, 710, 5);
	floodfill(756, 710, WHITE);
	//fivth tree
	setfillstyle(SOLID_FILL, GREEN);
	circle(928, 700, 30);
	floodfill(929, 700, WHITE);
	circle(940, 705, 30);
	floodfill(962, 705, WHITE);
	circle(945, 713, 30);
	floodfill(969, 713, WHITE);
	circle(925, 713, 30);
	floodfill(900, 713, WHITE);
	//flowers
	setfillstyle(SOLID_FILL, RED);
	circle(930, 705, 5);
	floodfill(931, 705, WHITE);
	circle(915, 700, 5);
	floodfill(916, 700, WHITE);
	circle(960, 690, 5);
	floodfill(961, 690, WHITE);
	circle(955, 710, 5);
	floodfill(956, 710, WHITE);
	
}
void drawSky() {
	//sun
	setfillstyle(SOLID_FILL, YELLOW);
	circle(40, 40, 60);
	line(90, 10, 150, 4);
	line(90, 20, 150, 15);
	line(100, 30, 150, 27);
	line(100, 40, 150, 40);
	line(100, 50, 145, 55);
	line(90, 60, 145, 72);
	line(90, 70, 140, 85);
	line(85, 80, 130, 95);
	line(75, 85, 99, 120);
	line(65, 92, 75, 135);
	line(50, 100, 55, 145);
	line(40, 95, 40, 150);
	line(30, 100, 25, 150);
	line(20, 90, 15, 150);
	floodfill(41, 40,WHITE);
	//first cloud
	arc(300, 80, 200, 360, 70);
	arc(360, 70, 220, 120, 50);
	arc(325, 60, 360, 120, 50);
	arc(280, 50, 20, 170, 50);
	arc(240, 55, 50, 290, 50);
	//second cloud 
	arc(520, 80, 190, 325, 70);
	arc(580, 70, 260, 120, 50);
	arc(545, 60, 360, 130, 50);
	arc(480, 55, 30, 250, 50);
	//therd cloud 
	arc(800, 80, 190, 360, 70);
	arc(850, 70, 220, 120, 50);	
	arc(780, 50, 20, 170, 50);
	arc(740, 55, 50, 290, 50);
	//fourth cloud
	arc(990, 80, 100, 320, 70);
	arc(1030, 40, 20, 170, 70);
	arc(1050, 80, 190, 340, 70);
}
void drawPerson(int x) {
	line(888 - x, 400, 888 - x, 530);
	//handLeft
	line(888 - x, 430, 858 - x, 450);
	//Right hand 
	line(888 - x, 430, 918 - x, 450);
	//ÇáÑÌæá
	line(888 - x, 530, 858 - x, 600);
	line(888 - x, 530, 918 - x, 600);
	//head
	circle(888 - x, 370, 30);
	//sad
	if (x < 540) {
		arc(888 - x, 370, 180, 360, 15);
	}		
	else {
		arc(888 - x, 390, 20, 160, 15);
	}
	//eyes
	circle(880 - x, 358, 3);
	circle(896 - x, 358, 3);
	//covid-19
	setfillstyle(SOLID_FILL, GREEN);
	circle(918 - x, 450, 3);
	floodfill(919 - x, 450, WHITE);
}
void drawPersonNoCovid(int x) {
	line(200 + x, 400, 200 + x, 530);
	//handLeft
	line(200 + x, 430, 170 + x, 450);
	//Right hand 
	line(200 + x, 430, 230 + x, 450);
	//ÇáÑÌæá
	line(200 + x, 530, 170 + x, 600);
	line(200 + x, 530, 230 + x, 600);
	//head
	circle(200 + x, 370, 30);
	//smile
	arc(200 + x, 370, 180, 360, 15);
	//eyes
	circle(192 + x, 358, 3);
	circle(208 + x, 358, 3);
	if (x > 350) {
		//covid-19
		setfillstyle(SOLID_FILL, GREEN);
		circle(230 + x, 450, 3);
		floodfill(231 + x, 450, WHITE);
	}
	

}

using namespace std;
void main() {
	int gd, gm;
	detectgraph(&gd, &gm);
	initgraph(&gd, &gm, "c:/laps/bgi");
	initwindow(1088, 800, "Covid-19");
	// before SPREAD COVID-19 person1 on right has covid
	//person2 on right helathy person 
	for (int x = 0; x < 350; x++) {
		cleardevice();
		drawRoad();
		drawSky();
		drawPerson(x);
		drawPersonNoCovid(x);
		
		delay(10);
	}
	//this loop to control on contact time between 2 persons 
	bool contions = false;
	do {
		settextstyle(8, HORIZ_DIR, 2);
		outtextxy(0, 260, "COVID-19 WILL SPREAD BY CLOSE CONTACT");
		outtextxy(0, 280, "BETWEEN PERSON1 WHICH IS HAS NO SYMPTOMS AND PERSON2 WAS HEALTHY");
		outtextxy(0, 300, "AND PERSON1 WILL SHOW THE SYMPTOMS");
		int endContact; 
		//end contact and continue walk 
		cout << "please enter 0 to continue .. " << endl;
		cin >> endContact;
		if (endContact == 0)
			contions = false;
	} while (contions);
	//after SPREAD COVID-19 and person1 will show SYMPTOMS
	for (int i = 350; i < 1088; i++)
	{
		cleardevice();
		drawRoad();
		drawSky();
		drawPerson(i);
		drawPersonNoCovid(i);

		delay(10);
	}
	getch();
	closegraph();
}

