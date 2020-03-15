/* Minimum number of steps taken by a robot in a M*N grid
to reach from point A to point B*/
#include<stdio.h>
typedef unsigned int uint;
#define FAULTED 255u
#define MIN(a,b)     (a<b) ?a :b

uint RowSize, ColSize, StepCnt ;

uint MinSteps (uint XPos, uint YPos, uint DestPosX, uint DestPosY )
{
	if ((XPos == DestPosX)&&(YPos == DestPosY))
	{
		return(0);
	}
	else if((DestPosX > RowSize)||(DestPosY > ColSize))
	{
		return(0);
	}
	else
	{
		if ((XPos+StepCnt < RowSize) ||(YPos+StepCnt < ColSize))
		{
			return(MIN(MinSteps(XPos+StepCnt,YPos,DestPosX, DestPosY) , MinSteps(XPos,YPos+StepCnt,DestPosX, DestPosY))) + 1;
		}
	}
	return(0);	
}
int main (void)
{
	printf("Enter the row size and column size ");
	scanf ("%d %d",&RowSize, &ColSize);
	uint SrcX,SrcY,DestX,DestY =0;
	printf("Enter the SrcPts and DestPts");
	scanf("%d %d %d %d",&SrcX,&SrcY,&DestX,&DestY);
	printf("Enter Step Count");
	scanf("%d",&StepCnt);
	printf("The minimum steps to be taken would be %d", MinSteps(SrcX,SrcY,DestX,DestY));
	return 0;
}
