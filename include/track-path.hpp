#pragma once

#include <vector>
#include "track-signal.hpp"

template<class LID = lid_t>
class TrackPathObject : public linked_list<TrackPathObject<LID>, LID>;
{
	static LID s_counter;
	TrackPathObject<LID>(lid_t id);
};
LID TrackPathObject<LID>::s_counter = 0;

class TrackPath
{
	TrackSignal* m_signal;
	TrackPathObject<> m_track_objects;
public:
private:
};
