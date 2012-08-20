#ifndef __RECDATACENTER_H__
#define __RECDATACENTER_H__

#include "RecInterface.h"

namespace RecSys
{
	class RecDataCenter
	{
	public:
		RecDataCenter();
		bool Init(const char * base_dir, RecConfig * config);
	
	public:
		bool loadRecDataObj(const char * filename);
	public:
		vector<RecObj> rec_data_objs_;
	private:
		RecConfig * config_;	
	
	};
}
#endif //__RECDATACENTER_H__

