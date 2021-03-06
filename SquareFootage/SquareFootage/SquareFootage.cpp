//Square footage calculator of three different houses
//Created by: Jared Summers
//Created on 3-13-2018

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	double dblColonialBP = 0.0;
	double dblColonialSF = 0.0;
	double dblColonialPPSF = 0.0;
	
	double dblSplitBP = 0.0;
	double dblSplitPPSF = 0.0;
	double dblSplitSF = 0.0;

	double dblSinglePPSF = 0.0;
	double dblSingleSF = 0.0;
	double dblSingleBP = 0.0;
	
	cout << "Colonial House" << endl;
	cout << "Enter the Base price, Square Footage, and Price per Square foot:" << endl;
	cin >> dblColonialBP >> dblColonialSF >> dblColonialPPSF;

	double dblColonialTotal = (dblColonialBP + (dblColonialSF * dblColonialPPSF));

	cout << "Total Price: $ " << dblColonialTotal << endl;

	cout << endl;

	cout << "Split-Entry House" << endl;
	cout << "Enter the Base price, Square Footage, and Price per Square foot:" << endl;
	cin >> dblSplitBP >> dblSplitSF >> dblSplitPPSF;

	double dblSplitTotal = (dblSplitBP + (dblSplitSF * dblSplitPPSF));

	cout << "Total Price: $ " << dblSplitTotal << endl;

	cout << endl;

	cout << "Single-Story House" << endl;
	cout << "Enter the Base price, Square Footage, and Price per Square foot:" << endl;
	cin >> dblSingleBP >> dblSingleSF >> dblSinglePPSF;

	double dblSingleTotal = (dblSingleBP + (dblSingleSF * dblSinglePPSF));

	cout << "Total Price: $ " << dblSingleTotal << endl;

	cout << endl;
	

	if ((dblColonialTotal > dblSplitTotal) && (dblSplitTotal > dblSingleTotal)) {
		cout << "Price from Least to Greatest: " << endl;
		cout << "Single-Story: $ " << dblSingleTotal << endl
			<< "Split-Entry: $ " << dblSplitTotal << endl
			<< "Colonial: $ " << dblColonialTotal << endl;
			
	}
	
	else if ((dblColonialTotal > dblSingleTotal) && (dblSingleTotal > dblSplitTotal)) {
		cout << "Price from Least to Greatest: " << endl;
		cout << "Split-Entry: $ " << dblSplitTotal << endl
			<< "Single-Story: $ " << dblSingleTotal << endl
			<< "Colonial: $ " << dblColonialTotal << endl;

	}

	else if ((dblSplitTotal > dblSingleTotal) && (dblSingleTotal > dblColonialTotal)) {
		cout << "Price from Least to Greatest: " << endl;
		cout << "Colonial: $ " << dblColonialTotal << endl
			<< "Single-Story: $ " << dblSingleTotal << endl
			<< "Split-Entry: $ " << dblSplitTotal << endl;

	}

	else if ((dblSplitTotal > dblColonialTotal) && (dblColonialTotal > dblSingleTotal)) {
		cout << "Price from Least to Greatest: " << endl;
		cout << "Single-Story: $ " << dblSingleTotal << endl
			<< "Colonial: $ " << dblColonialTotal << endl
			<< "Split-Entry: $ " << dblSplitTotal << endl;
	}

	else if ((dblSingleTotal > dblColonialTotal) && (dblColonialTotal > dblSplitTotal)) {
		cout << "Price from Least to Greatest: " << endl;
		cout << "Split-Entry: $ " << dblSplitTotal << endl
			<< "Colonial: $ " << dblColonialTotal << endl
			<< "Single-Story: $ " << dblSingleTotal << endl;

	}

	else if ((dblSingleTotal > dblSplitTotal) && (dblSplitTotal > dblColonialTotal)) {
		cout << "Price from Least to Greatest: " << endl;
		cout << "Colonial: $ " << dblColonialTotal << endl
			<< "Split-Entry: $ " << dblSplitTotal << endl
			<< "Single-Story: $ " << dblSingleTotal << endl;

	}

	cout << endl;
    return 0;
}
