#pragma once

// #include "linked-list.hpp"
#include "track-object.hpp"
#include "device-binary.hpp"

class Turnout : public TrackObject //, public linked_list<Turnout>
{
	public:
	using turnout_t = Turnout *;
	inline dir_t get_dir(void);
	inline bool set_dir(dir_t);
	inline bool set_dir(owner_t, dir_t);
	inline bool validate(dir_t);
	Turnout(devbin_t, dir_t);

	private:
	dir_t m_dir;
	dir_t m_diverge;
	devbin_t m_dev;
};