#pragma once

// class TrackSignal : public TrackObject, public linked_list<TrackSignal>;

#include <vector>
#include "track-object.hpp"
// #include "linked-list.hpp"

// class TrackSignal : public TrackObject, public linked_list<TrackSignal>
class TrackSignal // : public TrackObject
{
	using state_t = uint8_t;
	state_t m_state;

	public:
	TrackSignal(/* lid_t */);

	state_t get_state(void);
};