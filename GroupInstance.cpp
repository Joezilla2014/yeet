#include "GroupInstance.h"

GroupInstance::GroupInstance(void)
{
	PVInstance::PVInstance();
}

GroupInstance::GroupInstance(const GroupInstance &oinst)
{
	PVInstance::PVInstance(oinst);
}

GroupInstance::~GroupInstance(void)
{
}

std::vector<PROPGRIDITEM> GroupInstance::getProperties()
{
	std::vector<PROPGRIDITEM> properties = PVInstance::getProperties();
	return properties;
}
void GroupInstance::PropUpdate(LPPROPGRIDITEM &pItem)
{
	PVInstance::PropUpdate(pItem);
}
