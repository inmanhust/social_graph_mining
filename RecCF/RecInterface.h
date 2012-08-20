#ifndef _RECINTERFACE_H_
#define _RECINTERFACE_H_

#include "RecCommon/CommonTools.h"

namespace RecSys
{
	typedef struct
	{
		const char * username;
		int age;
	}UserInfo;

	typedef struct
	{
		const char * item_name;
		int price;
	}ItemInfo;

	typedef struct
	{
		uint32_t user_id;
		const UserInfo * user;
	}User;

	typedef struct
	{
		uint32_t item_id;
		const ItemInfo * item_info;
	}Item;

	typedef struct
	{
		uint32_t user_id;
		uint32_t item_id;
		float score;
	}Obj;

	class RecResult
	{
	pubic:
		uint32_t item_id;
		float score;

		static bool ScoreGreater(const RecResult& rec1, const RecResult& rec2)
		{
			return rec1.score >= rec2.score;	
		}
	};

}
#endif //_RECINTERFACE_H_
