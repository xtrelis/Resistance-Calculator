#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void Band_Colors();
char Choose_Resistance();
void Multiplier_Colors();
char Choose_Multiplier();
void Tolerance_Colors();
char Choose_Tolerance();
int Band_Values(char let);
double Mult_Values(char let);
float Tol_Values(char let);
char Ohm_Conversion(char let, double res);
int ColorName_Conversion(char let);

int main()
{
	int resistors, bandnumb1, bandnumb2, bandnumb3;
	char band1, band2, band3, multiplier, tolerance, ohm;
	float tolnumb;
	double multnumb, resistance; 
	char *colorNames[] = { "Black", "Brown", "Red", "Orange", "Yellow", "Green", "Blue", "Purple", "Grey", "White", "Gold", "Silver", "None" };	
    
	// Επιλογή αριθμού Αντιστάσεων	
	printf ("How many resistors do you want to calculate (4 - 5) ? \n");
	
	do
	{
		scanf ("%d", &resistors);
		
		if ((resistors < 4) || (resistors > 5))
			printf ("Wrong Choice ! \n");
			
	} while ((resistors < 4) || (resistors > 5));
	
	
	
	if (resistors == 4)
	{	
		system("cls");	
		printf ("\n( Band 1 )  ( Band 2 )  ( Multiplier )  ( Tolerance )\n\n");
		
		// Επιλογή Αντίστασης 1
		printf ("Choose the color of Band [ 1 ]. \n\n");
		Band_Colors();
	
		band1 = Choose_Resistance();
	
		// Υπολογισμός Αντίστασης 1
		bandnumb1 = Band_Values(band1) * 10;	
		
		system("cls");
		printf ("\n( %s )  ( Band 2 )  ( Multiplier )  ( Tolerance )\n\n", colorNames[ColorName_Conversion(band1)]);
		
		// Επιλογή Αντίστασης 2
		printf ("Choose the color of Band [ 2 ]. \n\n");
		Band_Colors();
	
		band2 = Choose_Resistance();
	
		// Υπολογισμός Αντίστασης 2
		bandnumb2 = Band_Values(band2);
	
		// Υπολογισμός Συνόλου Αντιστάσεων 1 + 2
		resistance = bandnumb1 + bandnumb2;
		
		system("cls");	
		printf ("\n( %s )  ( %s )  ( Multiplier )  ( Tolerance )\n\n", colorNames[ColorName_Conversion(band1)], colorNames[ColorName_Conversion(band2)]);
		
		// Επιλογή Πολλαπλασιαστή
		printf ("Choose the color of Multiplier. \n\n");
		Multiplier_Colors();
	
		multiplier = Choose_Multiplier();
		
		// Υπολογισμός Πολλαπλασιαστή
		multnumb = Mult_Values(multiplier);
	
		// Υπολογισμός Τύπου Ωμ
		ohm = Ohm_Conversion(multiplier, resistance);
	
		// Υπολογισμός Συνόλου Αντιστάσεων 1 + 2 + Πολλαπλασιαστή
		resistance = resistance * multnumb;
		
		system("cls");	
		printf ("\n( %s )  ( %s )  ( %s )  ( Tolerance )\n\n", colorNames[ColorName_Conversion(band1)], colorNames[ColorName_Conversion(band2)], 
			colorNames[ColorName_Conversion(multiplier)]);
	
		// Επιλογή Ανοχής
		printf ("Choose the color of Tolerance. \n\n");
		Tolerance_Colors();
	
		tolerance = Choose_Tolerance();
	
		// Υπολογισμός Ανοχής
		tolnumb = Tol_Values(tolerance);
	
		system("cls");	
		printf ("\n( %s )  ( %s )  ( %s )  ( %s )\n\n", colorNames[ColorName_Conversion(band1)], colorNames[ColorName_Conversion(band2)], colorNames[ColorName_Conversion(multiplier)],
			colorNames[ColorName_Conversion(tolerance)]);
			
		// Αποτέλεσμα
		printf ("Total Resistance : %.2f %cOhm \t Tolerance : +/- %.2f %%", resistance, ohm, tolnumb);
	}
	
	else
	{
		system("cls");	
		printf ("\n( Band 1 )  ( Band 2 )  ( Band3 )  ( Multiplier )  ( Tolerance )\n\n");
		
		// Επιλογή Αντίστασης 1
		printf ("Choose the color of Band [ 1 ]. \n\n");
		Band_Colors();
	
		band1 = Choose_Resistance();
	
		// Υπολογισμός Αντίστασης 1
		bandnumb1 = Band_Values(band1) * 100;	
	
		system("cls");	
		printf ("\n( %s )  ( Band 2 )  ( Band3 )  ( Multiplier )  ( Tolerance )\n\n", colorNames[ColorName_Conversion(band1)]);
		
		// Επιλογή Αντίστασης 2
		printf ("Choose the color of Band [ 2 ]. \n\n");
		Band_Colors();
	
		band2 = Choose_Resistance();
	
		// Υπολογισμός Αντίστασης 2
		bandnumb2 = Band_Values(band2) * 10;
		
		system("cls");	
		printf ("\n( %s )  ( %s )  ( Band3 )  ( Multiplier )  ( Tolerance )\n\n", colorNames[ColorName_Conversion(band1)], colorNames[ColorName_Conversion(band2)]);
		
		// Επιλογή Αντίστασης 3
		printf ("Choose the color of Band [ 3 ]. \n\n");
		Band_Colors();
	
		band3 = Choose_Resistance();
	
		// Υπολογισμός Αντίστασης 2
		bandnumb3 = Band_Values(band3);
	
		// Υπολογισμός Συνόλου Αντιστάσεων 1 + 2 + 3
		resistance = bandnumb1 + bandnumb2 + bandnumb3;
		
		system("cls");	
		printf ("\n( %s )  ( %s )  ( %s )  ( Multiplier )  ( Tolerance )\n\n", colorNames[ColorName_Conversion(band1)], colorNames[ColorName_Conversion(band2)], 
			colorNames[ColorName_Conversion(band3)]);
		
		// Επιλογή Πολλαπλασιαστή
		printf ("Choose the color of Multiplier. \n\n");
		Multiplier_Colors();
	
		multiplier = Choose_Multiplier();
		
		// Υπολογισμός Πολλαπλασιαστή
		multnumb = Mult_Values(multiplier);
	
		// Υπολογισμός Τύπου Ωμ
		ohm = Ohm_Conversion(multiplier, resistance);
	
		// Υπολογισμός Συνόλου Αντιστάσεων 1 + 2 + Πολλαπλασιαστή
		resistance = resistance * multnumb;
		
		system("cls");	
		printf ("\n( %s )  ( %s )  ( %s )  ( %s )  ( Tolerance )\n\n", colorNames[ColorName_Conversion(band1)], colorNames[ColorName_Conversion(band2)], 
			colorNames[ColorName_Conversion(band3)], colorNames[ColorName_Conversion(multiplier)]);
			
		// Επιλογή Ανοχής
		printf ("Choose the color of Tolerance. \n\n");
		Tolerance_Colors();
	
		tolerance = Choose_Tolerance();
	
		// Υπολογισμός Ανοχής
		tolnumb = Tol_Values(tolerance);
		
		system("cls");	
		printf ("\n( %s )  ( %s )  ( %s )  ( %s )  ( %s )\n\n", colorNames[ColorName_Conversion(band1)], colorNames[ColorName_Conversion(band2)], 
			colorNames[ColorName_Conversion(band3)], colorNames[ColorName_Conversion(multiplier)], colorNames[ColorName_Conversion(tolerance)]);
			
		// Αποτέλεσμα
		printf ("Total Resistance : %.2f %cOhm \t Tolerance : +/- %.2f %%", resistance, ohm, tolnumb);
	}
			
	return 0;
}


int ColorName_Conversion(char let)
{
	int i;
	 
	switch (let)
	{
		case 'M' : 
				i = 0;
				break;
		case 'K' : 
				i = 1;
				break;
		case 'N' : 
				i = 2;
				break;
		case 'O' : 
				i = 3;
				break;
		case 'I' : 
				i = 4;
				break;
		case 'R' : 
				i = 5;
				break;
		case 'L' : 
				i = 6;
				break;
		case 'V' : 
				i = 7;
				break;
		case 'G' : 
				i = 8;
				break;
		case 'A' : 
				i = 9;
				break;
		case 'X' : 
				i = 10;
				break;
		case 'S' : 
				i = 11;
				break;
		case 'Q' : 
				i = 12;
				break;																									
	}
	
	return i;
}

char Ohm_Conversion(char let, double res)
{
	char conv;
	
	if (res < 10 )		
		switch (let)
		{
			case 'O' :
			case 'I' :
			case 'R' :   
					conv = 'K';
					break;
					
			case 'L' : 
			case 'V' : 
			case 'G' : 
					conv = 'M';
					break;
					
			case 'A' : 
					conv = 'G';
					break;	
					
			default : 
					conv = ' ';
					break;																						
		}
		
	else
		switch (let)
		{	
			case 'N' :
			case 'O' :
			case 'I' : 
					conv = 'K';
					break;
			  	
			case 'R' :
			case 'L' : 
			case 'V' :
					conv = 'M';
					break;
				 
			case 'G' : 	
			case 'A' : 
					conv = 'G';
					break;	
					
			default : 
					conv = ' ';
					break;																						
		}	
	
	return conv;
}

float Tol_Values(char let)
{
	float tol;
	
	switch (let)
	{
		case 'K' : 
				tol = 1;
				break;
		case 'N' : 
				tol = 2;
				break;
		case 'R' : 
				tol = 0.5;
				break;
		case 'L' : 
				tol = 0.25;
				break;
		case 'V' : 
				tol = 1;
				break;
		case 'G' : 
				tol = 0.05;
				break;
		case 'X' : 
				tol = 5;
				break;
		case 'S' : 
				tol = 10;
				break;
		case 'Q' : 
				tol = 20;
				break;																					
	}
	
	return tol;
}

double Mult_Values(char let)
{
	double mult;
	
	switch (let)
	{
		case 'M' : 
				mult = 1;
				break;
		case 'K' : 
				mult = 10;
				break;
		case 'N' : 
				mult = 1;
				break;
		case 'O' : 
				mult = 1;
				break;
		case 'I' : 
				mult = 10;
				break;
		case 'R' : 
				mult = 0.1;
				break;
		case 'L' : 
				mult = 1;
				break;
		case 'V' : 
				mult = 10;
				break;
		case 'G' : 
				mult = 0.1;
				break;
		case 'A' : 
				mult = 1;
				break;
		case 'X' : 
				mult = 0.1;
				break;
		case 'S' : 
				mult = 0.01;
				break;																					
	}
	
	return mult;
}

int Band_Values(char let)
{
	int band;
	
	switch (let)
	{
		case 'M' : 
				band = 0;
				break;
		case 'K' : 
				band = 1;
				break;
		case 'N' : 
				band = 2;
				break;
		case 'O' : 
				band = 3;
				break;
		case 'I' : 
				band = 4;
				break;
		case 'R' : 
				band = 5;
				break;
		case 'L' : 
				band = 6;
				break;
		case 'V' : 
				band = 7;
				break;
		case 'G' : 
				band = 8;
				break;
		case 'A' : 
				band = 9;
				break;														
	}
	
	return band;
}

char Choose_Tolerance()
{	
	char tol;
	
	do
	{
		scanf (" %c", &tol);
		tol = toupper(tol);
		
		if ((tol != 'K') && (tol != 'N') && (tol != 'R') && (tol != 'L') && (tol != 'V') && (tol != 'G') && (tol != 'X') && (tol != 'S') && (tol != 'Q'))
					printf ("Wrong Choice ! \n");
			
	} while ((tol != 'K') && (tol != 'N') && (tol != 'R') && (tol != 'L') && (tol != 'V') && (tol != 'G') && (tol != 'X') && (tol != 'S') && (tol != 'Q'));
	
	return tol;
}

void Tolerance_Colors()
{
	printf (" K  ( Brown ) \n N  ( Red ) \n R  ( Green ) \n L  ( Blue ) \n V  ( Purple ) \n G  ( Grey ) \n X  ( Gold ) \n S  ( Silver ) \n Q  ( None ) \n");	
}

char Choose_Multiplier()
{	
	char mult;
	
	do
	{
		scanf (" %c", &mult);
		mult = toupper(mult);
		
		if ((mult != 'M') && (mult != 'K') && (mult != 'N') && (mult != 'O') && (mult != 'I') && (mult != 'R') && (mult != 'L') && (mult != 'V') && (mult != 'G') && (mult != 'A') && 
			(mult != 'X') && (mult != 'S'))
					printf ("Wrong Choice ! \n");
			
	} while ((mult != 'M') && (mult != 'K') && (mult != 'N') && (mult != 'O') && (mult != 'I') && (mult != 'R') && (mult != 'L') && (mult != 'V') && (mult != 'G') && (mult != 'A') &&	
		(mult != 'X') && (mult != 'S'));
	
	return mult;
}

void Multiplier_Colors()
{
	printf (" M  ( Black ) \n K  ( Brown ) \n N  ( Red ) \n O  ( Orange ) \n I  ( Yellow ) \n R  ( Green ) \n L  ( Blue ) \n V  ( Purple ) \n G  ( Grey ) \n A  ( White ) \n"
		" X  ( Gold ) \n S  ( Silver ) \n");
}

char Choose_Resistance()
{	
	char band;
	
	do
	{
		scanf (" %c", &band);
		band = toupper(band);
		
		if ((band != 'M') && (band != 'K') && (band != 'N') && (band != 'O') && (band != 'I') && (band != 'R') && (band != 'L') && (band != 'V') && (band != 'G') && (band != 'A'))
			printf ("Wrong Choice ! \n");
			
	} while ((band != 'M') && (band != 'K') && (band != 'N') && (band != 'O') && (band != 'I') && (band != 'R') && (band != 'L') && (band != 'V') && (band != 'G') && (band != 'A'));
	
	return band;
}

void Band_Colors()
{
	printf (" M  ( Black ) \n K  ( Brown ) \n N  ( Red ) \n O  ( Orange ) \n I  ( Yellow ) \n R  ( Green ) \n L  ( Blue ) \n V  ( Purple ) \n G  ( Grey ) \n A  ( White ) \n");
}
