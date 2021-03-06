#pragma once
#ifndef __READ_VOL_H
#define __READ_VOL_H

#include <cstdio>
#include <cstdint>
#include <stdio.h>
#include <iostream>
#include<vector>

extern int sx, sy, sz;

using namespace std;
typedef struct {
	int x;
	int y;
	int z;
}Point;

float bytesToFloat(unsigned char b0, unsigned char b1, unsigned char b2, unsigned char b3);
void readHeader(unsigned char* buff);
void readData(vector<float> &data, FILE *fp_sour);
void printData(vector<float> &data);
float findData(vector<float> &data, Point pos);

#endif