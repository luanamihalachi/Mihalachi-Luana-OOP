#pragma once
class Student
{
	char name[30];
	float mathg;
	float engg;
	float histg;
	float avgg;
public: 
	void setName();
	void setMath();
	void setEng();
	void setHist();
	void setAvg();

	char* getName();
	float getMath();
	float getEng();
	float getHist();
	float getAvg();

};

