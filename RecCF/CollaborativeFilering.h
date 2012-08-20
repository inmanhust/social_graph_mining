#ifndef __COLLABORATIVEFILTERING__H_
#define __COLLABORATIVEFILTERING__H_

namespace RecSys
{
	typedef unordered_map<uint32_t, vector<Item> > MiniIndex;

	class CollaborativeFiltering	
	{
	public:
		bool addNewObj(uint32_t user_id, vector<>)
	private:
		uint32_t item_num_;
		MiniIndex index_;
			
	}
}


#endif // __COLLABORATIVEFILTERING__H_
