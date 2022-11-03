#pragma once
#include<iostream>
#include<string>
#include"Check/UserInput.h"
using namespace std;

class View
{
public:
	//input canbo
	static string inputName();
	static int inputAge();
	static string inputGender();
	static string inputAddress();
	//input congnhan
	static int inputLevel();
	//input kysu
	static string inputMajor();
	//input nhanvien
	static string inputTask();
	//print
	static void printCongNhan(string name, int age, string gender, string address, int level);
	static void printKySu(string name, int age, string gender, string address, string major);
	static void printNhanVien(string name, int age, string gender, string address, string task);
};


