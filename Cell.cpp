#include "Cell.h"



Cell::Cell()
{
}

Cell::Cell(int id)
{
	this->cellid = id;
}

int Cell::isOverlap(MBR mbr)
{
	return bound.isOverlap(mbr);
}

int Cell::insertTraj(STTraj traj)
{
	trajList.insert(traj.trajID);
	if (this->trajPointNumList.find(traj.trajID) == this->trajPointNumList.end())
		this->trajPointNumList[traj.trajID] = 1;
	else
		this->trajPointNumList[traj.trajID]++;
	return this->trajList.size();
}

int Cell::getTrajNum()
{
	return trajList.size();
}


Cell::~Cell()
{
}
