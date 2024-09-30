#ifndef TRACK_SIGNAL_HPP
#define TRACK_SIGNAL_HPP

// #pragma once

#include <vector>
#include "track-object.hpp"

class TrackSignal : public TrackObject
{
	public:
	using state_t = uint8_t;
	private:
	state_t m_state;

	public:
	TrackSignal(/* lid_t */);
	state_t get_state(void);
};
#endif //TRACK_SIGNAL_HPP