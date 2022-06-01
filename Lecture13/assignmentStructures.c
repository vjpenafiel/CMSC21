#include <stdio.h>
#include <math.h>

struct line{		// main struct line
	struct point{		// coordinates of the points
		float x;
		float y;;
	}point1, point2;
	float midpoint[2];	// midpoint of the line
	float slope;		// slope of the line
	float distance;		// distance of the line
}line1;

// function to solve and return the slope
float solveSlope(struct line line1){
	line1.slope = ((line1.point1.y - line1.point2.y)/(line1.point1.x - line1.point2.x));	// uses the solope formula by using the xs and ys from the struct      m = (y1 - y2)/(x1 - x2)
	return line1.slope;		// returns slope value
};

// function to solve and print the midpoint
float solveMidpoint(struct line line1){
	line1.midpoint[0] = ((line1.point1.x + line1.point2.x)/ 2.0);			// computes for the x value of the ordered pair of the midpoint      x = ((x1+x2)/2)
	line1.midpoint[1] = ((line1.point1.y + line1.point2.y)/ 2.0);			// computes for the x value of the ordered pair of the midpoint      y = ((y1+y2)/2)
	printf("Midpoint: (%f, %f)", line1.midpoint[0], line1.midpoint[1]);		// prints the midpoint together in a statement with parentheses      midpoint = (x, y)
};

// function to solve and print the distance between 2 points
float solveDistance(struct line line1){
	line1.distance = sqrt(pow((line1.point1.x - line1.point2.x), 2.0) + pow((line1.point1.y - line1.point2.y), 2.0));	// uses the distance formula and math functions to calculate the struct x and y values       sqrt(((x1-x2)^2)+((x1-x2)^2))
	printf("Distance between 2 points: %f", line1.distance);															// prints the result in a statement with a label
};

// function to solve and print the slope intercept form
void getSlopeInterceptForm(struct line line1){
	float b = line1.point1.y - ((solveSlope(line1))*(line1.point1.x));	// calculates for the b or the y-intercept by filing in the other values in the slope intercept form, uses the result of solveSlope         b = y - mx
	printf("y = %fx + %f", solveSlope(line1), b);						// prints out b within the point slope formula
};

int main(){
	// scans and gets the 1st ordered pair 
	printf("Enter x and y for point 1: ");				
	scanf("%f %f", &line1.point1.x, &line1.point1.y);

	// scans and gets the 1st ordered pair 
	printf("Enter x and y for point 2: ");
	scanf("%f %f", &line1.point2.x, &line1.point2.y);

	printf("\n");
	printf("Slope: %f", solveSlope(line1));		// calls the solveSlope function with a label, the label was not initially added within the function so that the return value could be used for the intercept form function
	printf("\n");
	solveMidpoint(line1);						// calls the solveMidpoint function
	printf("\n");
	solveDistance(line1);						// calls the solveDistance function
	printf("\n");
	getSlopeInterceptForm(line1);				// calls the getSlopeInterceptForm function
}